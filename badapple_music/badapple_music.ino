#define G0 -1
#define G1 393
#define G2 441
#define G3 495
#define G4 556
#define G5 624
#define G6 661
#define G7 742

#define GL1 G1/2
#define GL2 G2/2
#define GL3 G3/2
#define GL4 G4/2
#define GL5 G5/2
#define GL6 G6/2
#define GL7 G7/2

#define GLL1 G1/4
#define GLL2 G2/4
#define GLL3 G3/4
#define GLL4 G4/4
#define GLL5 G5/4
#define GLL6 G6/4
#define GLL7 G7/4

#define GH1 G1*2
#define GH2 G2*2
#define GH3 G3*2
#define GH4 G4*2
#define GH5 G5*2
#define GH6 G6*2
#define GH7 G7*2

#define GHH1 G1*4
#define GHH2 G2*4
#define GHH3 G3*4
#define GHH4 G4*4
#define GHH5 G5*4
#define GHH6 G6*4
#define GHH7 G7*4
//以上部分是定义是把每个音符和频率值对应起来，其实不用打这么多，但是都打上了，后面可以随意编写G调的各种歌，我这里用G+数字表示音符，GH+数字表示上面有点的那种音符，GL+数字表示下面有点的那种音符。这样后面写起来比较好识别。

//这部分是用英文对应了拍子，这样后面也比较好看
int tune[] =//132
{
  G1, G1, G1, G1, G1, G1, G1,
  G1, G1, G1, G1, G1,
  G1, G1, G1, G1, G1, G1, G1,
  G1, G1, G1, G1, G1,
  G1, G1, G1, G1, G1, G1, G1,
  G1, G1, G1, G1, G1,
  G1, G1, G1, G1, G1, G1, G1,
  G1, G1, G1, G1, G1,
  GLL6, G0, GLL6, GLL5, GLL6, GLL6, G0, GLL6, GLL5, GLL6,
  GLL6, G0, GLL6, GLL5, GLL6, GLL6, GLL6, GL1, GL2, GL1, GL2,
  GLL6, G0, GLL6, GLL5, GLL6, GLL6, G0, GLL6, GLL5, GLL6,
  GLL6, G0, GLL6, GLL5, GLL6, GL2, GL1, GL2, GL1, GLL6, G1,
  GLL6, G0, GLL6, GLL5, GLL6, GLL6, G0, GLL6, GLL5, GLL6,
  GLL6, G0, GLL6, GLL5, GLL6, GLL6, GLL6, GL1, GL2, GL1, GL2,
  GLL6, G0, GLL6, GLL5, GLL6, GLL6, G0, GLL6, GLL5, GLL6,
  GLL6, G0, GLL6, GLL5, GLL6, GL2, GL1, GL2, GL1, GLL6, G1,
  //  GL6, GL7, G1, G2, G3, G6, G5,
  //  G3, GL6, G3, G2, G1, GL7,
  //  GL6, GL7, G1, G2, G3, G2, G1,
  //  GL7, GL6, GL7, G1, GL7, GL6, GL5, GL7,
  //  GL6, GL7, G1, G2, G3, G6, G5,
  //  G3, GL6, G3, G2, G1, GL7,
  //  GL6, GL7, G1, G2, G3, G2, G1,
  //  GL7, G1, G2, G3,
  //  GL6, GL7, G1, G2, G3, G6, G5,
  //  G3, GL6, G3, G2, G1, GL7,
  //  GL6, GL7, G1, G2, G3, G2, G1,
  //  GL7, GL6, GL7, G1, GL7, GL6, GL5, GL7,
  //  GL6, GL7, G1, G2, G3, G6, G5,
  //  G3, GL6, G3, G2, G1, GL7,
  //  GL6, GL7, G1, G2, G3, G2, G1,
  //  GL7, G1, G2, G3,
  //G5,G6,G3,G2,G3,G2,G3,
  //G5,G6,G3,G2,G3,G2,G3,
  //G2,G1,GL7,GL5,GL6,GL5,GL6,
  //GL7,G1,G2,G3,GL6,G3,G5,
  //G5,G6,G3,G2,G3,G2,G3,
  //G5,G6,G3,G2,G3,G2,G3,
  //G2,G1,GL7,GL5,GL6,GL5,GL6,
  //GL7,G1,G2,G3,GL6,G3,G5,
  //G5,G6,G3,G2,G3,G2,G3,
  //G5,G6,G3,G2,G3,G2,G3,
  //G2,G1,GL7,GL5,GL6,GL5,GL6,
  //GL7,G1,G2,G3,GL6,G3,G5,
  //G5,G6,G3,G2,G3,G2,G3,
  //G5,G6,G3,G2,G3,G6,G7,
  //GH1,G7,G6,G5,G3,G2,G3,
  //G2,G1,GL7,GL5,GL6,G3,G5,
  //G5,G6,G3,G2,G3,G2,G3,
  //G5,G6,G3,G2,G3,G2,G3,
  //G2,G1,GL7,GL5,GL6,GL5,GL6,
  //GL7,G1,G2,G3,GL6,G3,G5,
  //G5,G6,G3,G2,G3,G2,G3,
  //G5,G6,G3,G2,G3,G2,G3,
  //G2,G1,GL7,GL5,GL6,GL5,GL6,
  //GL7,G1,G2,G3,GL6,G3,G5,
  //G5,G6,G3,G2,G3,G2,G3,
  //G5,G6,G3,G2,G3,G2,G3,
  //G2,G1,GL7,GL5,GL6,GL5,GL6,
  //GL7,G1,G2,G3,GL6,G3,G5,
  //G5,G6,G3,G2,G3,G2,G3,
  //G5,G6,G3,G2,G3,G6,G7,
  //GH1,G7,G6,G5,G3,G2,G3,
  //G2,G1,GL7,GL5,GL6,G3,G5,
};//这部分就是整首曲子的音符部分,用了一个序列定义为tune，整数
int tune2[] = {//112

  G5, G6, G3, G2, G3, G2, G3,
  G5, G6, G3, G2, G3, G2, G3,
  G2, G1, GL7, GL5, GL6, GL5, GL6,
  GL7, G1, G2, G3, GL6, G3, G5,
  G5, G6, G3, G2, G3, G2, G3,
  G5, G6, G3, G2, G3, G2, G3,
  G2, G1, GL7, GL5, GL6, GL5, GL6,
  GL7, G1, G2, G3, GL6, G3, G5,
  G5, G6, G3, G2, G3, G2, G3,
  G5, G6, G3, G2, G3, G2, G3,
  G2, G1, GL7, GL5, GL6, GL5, GL6,
  GL7, G1, G2, G3, GL6, G3, G5,
  G5, G6, G3, G2, G3, G2, G3,
  G5, G6, G3, G2, G3, G6, G7,
  GH1, G7, G6, G5, G3, G2, G3,
  G2, G1, GL7, GL5, GL6, G3, G5,
};
int tune1[] = {//104
  GL6, GL7, G1, G2, G3, G6, G5,
  G3, GL6, G3, G2, G1, GL7,
  GL6, GL7, G1, G2, G3, G2, G1,
  GL7, GL6, GL7, G1, GL7, GL6, GL5, GL7,
  GL6, GL7, G1, G2, G3, G6, G5,
  G3, GL6, G3, G2, G1, GL7,
  GL6, GL7, G1, G2, G3, G2, G1,
  GL7, G1, G2, G3,
  GL6, GL7, G1, G2, G3, G6, G5,
  G3, GL6, G3, G2, G1, GL7,
  GL6, GL7, G1, G2, G3, G2, G1,
  GL7, GL6, GL7, G1, GL7, GL6, GL5, GL7,
  GL6, GL7, G1, G2, G3, G6, G5,
  G3, GL6, G3, G2, G1, GL7,
  GL6, GL7, G1, G2, G3, G2, G1,
  GL7, G1, G2, G3,
};
int tune3[] = {//8
  GL6, GL6, GL6, GL6, GL6, GL6, GL6, GL6,
};
float repeat3[] = {
  0.75, 0.25, 0.5, 0.5, 0.75, 0.25, 0.5, 0.5,
};
float duration[] =
{
  1, 1, 1, 0.25, 0.25, 0.25, 0.25,
  1, 1, 1, 0.5, 0.5,
  1, 1, 1, 0.25, 0.25, 0.25, 0.25,
  1, 1, 1, 0.5, 0.5,
  1, 1, 1, 0.25, 0.25, 0.25, 0.25,
  1, 1, 1, 0.5, 0.5,
  1, 1, 1, 0.25, 0.25, 0.25, 0.25,
  1, 1, 1, 0.5, 0.5,
  1, 0.25, 0.25, 0.25, 0.25, 1, 0.25, 0.25, 0.25, 0.25,
  1, 0.25, 0.25, 0.25, 0.25, 0.5, 0.25, 0.25, 0.5, 0.25, 0.25,
  1, 0.25, 0.25, 0.25, 0.25, 1, 0.25, 0.25, 0.25, 0.25,
  1, 0.25, 0.25, 0.25, 0.25, 0.5, 0.25, 0.25, 0.5, 0.25, 0.25,
  1, 0.25, 0.25, 0.25, 0.25, 1, 0.25, 0.25, 0.25, 0.25,
  1, 0.25, 0.25, 0.25, 0.25, 0.5, 0.25, 0.25, 0.5, 0.25, 0.25,
  1, 0.25, 0.25, 0.25, 0.25, 1, 0.25, 0.25, 0.25, 0.25,
  1, 0.25, 0.25, 0.25, 0.25, 0.5, 0.25, 0.25, 0.5, 0.25, 0.25,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
  //0.5,0.5,0.5,0.5,1,0.5,0.5,
};//这部分是整首曲子的接拍部分，也定义个序列duration，浮点（数组的个数和前面音符的个数是一样的，一一对应么）
int length, i = 0, j = 0, i1 = 0, j1 = 0; //这里定义几个变量，length用来表示共有多少个音符，其他的是用来记位的
int tonePin = 5; //蜂鸣器的pin
float repeat2[] = {
  0.5, 0.5, 0.5, 0.5, 1, 0.5, 0.5,
};
float repeat1[] = {
  0.5, 0.5, 0.5, 0.5, 1, 0.5, 0.5,
  1, 1, 0.5, 0.5, 0.5, 0.5,
  0.5, 0.5, 0.5, 0.5, 1, 0.5, 0.5,
  0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5,
  0.5, 0.5, 0.5, 0.5, 1, 0.5, 0.5,
  1, 1, 0.5, 0.5, 0.5, 0.5,
  0.5, 0.5, 0.5, 0.5, 1, 0.5, 0.5,
  1, 1, 1, 1,
  0.5, 0.5, 0.5, 0.5, 1, 0.5, 0.5,
  1, 1, 0.5, 0.5, 0.5, 0.5,
  0.5, 0.5, 0.5, 0.5, 1, 0.5, 0.5,
  0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5,
  0.5, 0.5, 0.5, 0.5, 1, 0.5, 0.5,
  1, 1, 0.5, 0.5, 0.5, 0.5,
  0.5, 0.5, 0.5, 0.5, 1, 0.5, 0.5,
  1, 1, 1, 1,
};
#define DELAY 433 //延迟是为了调节音调的速度
void setup()
{
  Serial.begin(9600);
  pinMode(3, INPUT_PULLUP);
  pinMode(tonePin, OUTPUT);
  //设置蜂鸣器的pin为输出模式
  length = sizeof(tune) / sizeof(tune[0]) + (sizeof(tune1) / sizeof(tune1[0])) * 1 + (sizeof(tune2) / sizeof(tune2[0])) * 2 + (sizeof(tune3) / sizeof(tune3[0])) * 8;

  //这里用了一个sizeof函数，可以查出全部tone序列里有多少个音符
}

void loop()
{
  while (digitalRead(3)) {//3号引脚接GND开始
  }
  i = 0;
  j = 0;
  i1 = 0;
  j1 = 0;
  for (int x = 0; x < length; x++) //循环音符的次数，这里分成了几个部分是为了减少内存占用
  {
    if (x >= 0 && x <= 131) {
      tone(tonePin, tune[x]);
      delay(DELAY * duration[x]);
    }
    if (x > 131 && x <= 235) {
      tone(tonePin, tune1[x - 132]);
      delay(DELAY * repeat1[x - 132]);
    }
    if (x > 235 && x <= 459) {
      tone(tonePin, tune2[j]);
      delay(DELAY * repeat2[i]);
      i++;
      j++;
      if (i == 7) i = 0;
      if (j == 112) j = 0;
    }
    if (x > 459 && x <= 523) {
      tone(tonePin, tune3[j1]);
      delay(DELAY * repeat3[i1]);
      i1++;
      j1++;
      if (i1 == 8) i1 = 0;
      if (j1 == 8) j1 = 0;
    }


    noTone(tonePin);//停止当前音符，进入下一音符
  }
  delay(5000);//等待5秒后，循环重新开始
}