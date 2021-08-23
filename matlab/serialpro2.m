clc;
clear;

scom1 = instrfind('Type', 'serial', 'Port', 'COM5', 'Tag', '');	% ���Ҵ��ڶ���
if isempty(scom1)				% ������ڶ��󲻴�������
    scom1 = serial('COM5');
else							% ����ʹ���Ѵ��ڵĶ���
    fclose(scom1);
    scom1 = scom1(1);
end

scom1.baudrate=1500000;			% �����ʣ�����Խ��Խ�ã�����stm32f103rct6���Ҳ��Ե���õ�
scom1.OutputBufferSize = 1024; 	% �޸����������
fopen(scom1);

filename = 'badappledata_20FPS_1.bin';
fid = fopen(filename,'r'); 
pause(1);						% ��ֻ����ʽ���ļ�����ͣ1s�ȴ���Ƭ����λ
receiveData = 0;
for i = 1:3287					% ��֡��Ϊ3288
    tic;						% ��ʱ��ʼ
    C = fread(fid, 600, 'uint8');	% ��uint8��ʽ����600�ֽڣ�һ֡���ݣ�
    fwrite(scom1, C);
    while(~receiveData)
        receiveData = fread(scom1, 1, 'char');	% �ȴ����ڷ�������
    end
    receiveData = 0;
    time1 = toc;				% ��ʱ������time1Ϊ��ʾͼ���õ�ʱ��
    if time1 < 0.065				% ����ʾͼ����ʱ����0.65s ����ʱ��0.65s��10FPS��
        pause(0.065 - time1);
    end
    time2 = toc					% �ٴμ�ʱ���鿴��ǰ֡��ʱ
end 

fclose(fid);		% �ر��ļ�
fclose(scom1);      % �رմ���                                                    
delete(scom1);      % ɾ�����ڶ���
clear scom1 ;       % �������
