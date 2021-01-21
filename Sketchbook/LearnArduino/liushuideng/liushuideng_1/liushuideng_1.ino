//练习 用六个LED做一个流水灯
//（1）选择任意颜色LED 6个，做一个流水灯，6盏灯从左至右依次点亮，然后再从右至左依次熄灭
//设置灯的引脚
int Yellow_1 = 12;
int Yellow_2 = 7;

int Red_1 = 11;
int Red_2 = 8;

int Green_1 = 10;
int Green_2 = 9;

void setup()
{
    pinMode(Yellow_1, OUTPUT);
    pinMode(Yellow_2, OUTPUT);

    pinMode(Green_1, OUTPUT);
    pinMode(Green_2, OUTPUT);

    pinMode(Red_1, OUTPUT);
    pinMode(Red_2, OUTPUT);
}
void loop()
{
    //顺着过去
    //1.黄1灯亮
    digitalWrite(Yellow_1, HIGH);
    delay(150);

    //2.红1灯亮,黄1灭
    digitalWrite(Yellow_1, LOW);
    digitalWrite(Red_1, HIGH);
    delay(150);

    //3.绿1灯亮，红1灭
    digitalWrite(Red_1, LOW);
    digitalWrite(Green_1, HIGH);
    delay(150);

    //4.绿2亮，绿1灭
    digitalWrite(Green_1, LOW);
    digitalWrite(Green_2, HIGH);
    delay(150);

    //5.红2亮，绿2灭
    digitalWrite(Green_2, LOW);
    digitalWrite(Red_2, HIGH);
    delay(150);

    //6.黄2亮，红2灭
    digitalWrite(Red_2, LOW);
    digitalWrite(Yellow_2, HIGH);
    delay(150);

    //倒着回来
    //1.红2亮，黄2灭
    digitalWrite(Yellow_2, LOW);
    digitalWrite(Red_2, HIGH);
    delay(150);

    //2.绿2亮，红2灭
    digitalWrite(Red_2, LOW);
    digitalWrite(Green_2, HIGH);
    delay(150);
    
    //3.绿1亮，绿2灭
    digitalWrite(Green_2, LOW);
    digitalWrite(Green_1, HIGH);
    delay(150);

    //4.红1亮，绿1灭
    digitalWrite(Green_1, LOW);
    digitalWrite(Red_1, HIGH);
    delay(150);

    //5.红1灭,连接顺着的第一个黄灯
    digitalWrite(Red_1, LOW);
    
    
}
