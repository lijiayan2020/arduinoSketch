//（2）如果上面那个作业你已经完成了，可以尝试先从中间的灯开始亮起，依次向两边扩开。
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
    //两个绿亮
    digitalWrite(Green_1,HIGH);
    digitalWrite(Green_2,HIGH);
    delay(150);
    //绿都灭，红都亮
    digitalWrite(Green_1,LOW);
    digitalWrite(Green_2,LOW);
    digitalWrite(Red_1,HIGH);
    digitalWrite(Red_2,HIGH);
    delay(150);
    //红都灭，黄都亮
    digitalWrite(Red_1,LOW);
    digitalWrite(Red_2,LOW);
    digitalWrite(Yellow_1,HIGH);
    digitalWrite(Yellow_2,HIGH);
    delay(150);
    //黄灭，红亮
    digitalWrite(Yellow_1,LOW);
    digitalWrite(Yellow_2,LOW);
    digitalWrite(Red_1,HIGH);
    digitalWrite(Red_2,HIGH);
    delay(150);
    //红灭，接下一个循环的绿亮
    digitalWrite(Red_1,LOW);
    digitalWrite(Red_2,LOW);

}