clc;
clear;

scom1 = instrfind('Type', 'serial', 'Port', 'COM5', 'Tag', '');	% 查找串口对象
if isempty(scom1)				% 如果串口对象不存在则建立
    scom1 = serial('COM5');
else							% 否则使用已存在的对象
    fclose(scom1);
    scom1 = scom1(1);
end

scom1.baudrate=1500000;			% 波特率，不是越高越好，这是stm32f103rct6下我测试的最好的
scom1.OutputBufferSize = 1024; 	% 修改输出缓冲区
fopen(scom1);

filename = 'badappledata_20FPS_1.bin';
fid = fopen(filename,'r'); 
pause(1);						% 以只读方式打开文件，暂停1s等待单片机复位
receiveData = 0;
for i = 1:3287					% 总帧数为3288
    tic;						% 计时开始
    C = fread(fid, 600, 'uint8');	% 以uint8格式发送600字节（一帧数据）
    fwrite(scom1, C);
    while(~receiveData)
        receiveData = fread(scom1, 1, 'char');	% 等待串口返回数据
    end
    receiveData = 0;
    time1 = toc;				% 计时结束，time1为显示图像用的时间
    if time1 < 0.065				% 若显示图像用时不到0.65s 则延时至0.65s（10FPS）
        pause(0.065 - time1);
    end
    time2 = toc					% 再次计时，查看当前帧用时
end 

fclose(fid);		% 关闭文件
fclose(scom1);      % 关闭串口                                                    
delete(scom1);      % 删除串口对象
clear scom1 ;       % 清除变量

