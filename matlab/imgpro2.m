%% Bad Apple ͼ���������ɳ���
% �����Ƚ���Ƶ�ļ����ڴ��������ļ�����
% ������������ͼ��ߴ�Ϊ80*60���ɰ����޸�
%��Դ����Դ�����磬��������δ֪���޻�������ϸ΢�޸ģ�����ַ������Ȩ�棬�һἰʱɾ��
%% Ԥ����
clc;clear;
fileName = 'badapple.mp4';              	% �ļ����ɰ�ʵ���޸�
video = VideoReader(fileName);              % matlab�Դ�����ȡ��Ƶ�ļ�
numOfFrames = video.Duration * video.frameRate;	% ��֡�� = ��ʱ�� * ֡�� 
guiWaitBar = waitbar(0,'Please wait');  	% �½�������GUI
fid = fopen('badappledata_20FPS.bin','a');    	% �½��������ļ�������ӷ�ʽ��
%% ͼ����
tic;                                            % ��ʱ��ʼ
k = 1;
while hasFrame(video)                       	% ֻҪ��Ƶ��û��ȡ���ѭ��
    frame = readFrame(video);               	% ÿִ��һ��readframe��֡������1
    if rem(k,2)==0                          	% ÿ��3֡����һ֡����ԭ��Ƶ30FPS,�˴�ȡ15FPS
        D = im2bw(frame,0.5);               	% ��ͼ���ֵ����0.5������ֵȡ��ֵ
        rawData = imresize(D,[60 80]);      	% ����ԭ���������ߴ絽80*60
        %fwrite(fid,imageData','ubit1','ieee-be'); % ��λ���Դ��ģʽд��������ļ�
        fwrite(fid,rawData','ubit1','ieee-be');
    end
    k = k+1;
    waitbar(k/numOfFrames,guiWaitBar);          % ���ý�������ǰֵ
end
close(guiWaitBar);                              % �رս�����
fclose(fid);
toc;                                            % ��ʱֹͣ
