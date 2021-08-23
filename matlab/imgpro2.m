%% Bad Apple 图像数据生成程序
% 需事先将视频文件放在代码所在文件夹内
% 本例最终生成图像尺寸为80*60，可按需修改
%该源码来源于网络，具体作者未知，棉花糖做了细微修改，如果侵犯了你的权益，我会及时删除
%% 预处理
clc;clear;
fileName = 'badapple.mp4';              	% 文件名可按实际修改
video = VideoReader(fileName);              % matlab自带，读取视频文件
numOfFrames = video.Duration * video.frameRate;	% 总帧数 = 总时长 * 帧率 
guiWaitBar = waitbar(0,'Please wait');  	% 新建进度条GUI
fid = fopen('badappledata_20FPS.bin','a');    	% 新建二进制文件，以添加方式打开
%% 图像处理
tic;                                            % 计时开始
k = 1;
while hasFrame(video)                       	% 只要视频还没读取完就循环
    frame = readFrame(video);               	% 每执行一次readframe，帧数减少1
    if rem(k,2)==0                          	% 每隔3帧处理一帧，即原视频30FPS,此处取15FPS
        D = im2bw(frame,0.5);               	% 对图像二值化，0.5代表阈值取中值
        rawData = imresize(D,[60 80]);      	% 保持原比例调整尺寸到80*60
        %fwrite(fid,imageData','ubit1','ieee-be'); % 按位，以大端模式写入二进制文件
        fwrite(fid,rawData','ubit1','ieee-be');
    end
    k = k+1;
    waitbar(k/numOfFrames,guiWaitBar);          % 设置进度条当前值
end
close(guiWaitBar);                              % 关闭进度条
fclose(fid);
toc;                                            % 计时停止
