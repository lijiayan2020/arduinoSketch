//1.在流水灯3的基础上，用一个按键，按一下控制灯亮，再按一下控制灯灭。

//设置灯的引脚
int Yellow_1 = 12;
int Yellow_2 = 7;

int Red_1 = 11;
int Red_2 = 8;

int Green_1 = 10;
int Green_2 = 9;

//按键
int button = 6;

//记录时间点
unsigned long changeTime;

void setup()
{
    pinMode(Yellow_1, OUTPUT);
    pinMode(Yellow_2, OUTPUT);

    pinMode(Green_1, OUTPUT);
    pinMode(Green_2, OUTPUT);

    pinMode(Red_1, OUTPUT);
    pinMode(Red_2, OUTPUT);

    pinMode(button, INPUT);
}

void loop()
{
    int state = digitalRead(button);//获取现在的时间
    
    if(state==HIGH && millis()>changeTime)
    {
        TurnOn();
    }
}

void TurnOn()
{
    digitalWrite(Yellow_1, HIGH);
    delay(150);
    digitalWrite(Red_1,HIGH);
    delay(150);
    digitalWrite(Green_1, HIGH);
    delay(150);
    digitalWrite(Green_2, HIGH);
    delay(150);
    digitalWrite(Red_2, HIGH);
    delay(150);
    digitalWrite(Yellow_2, HIGH);
    delay(150);
    digitalWrite(Yellow_1, LOW);
    digitalWrite(Red_1, LOW);
    digitalWrite(Green_1, LOW);
    digitalWrite(Yellow_2, LOW);
    digitalWrite(Red_2, LOW);
    digitalWrite(Green_2, LOW);
    delay(150);
    changeTime = millis();//获取时间
}
