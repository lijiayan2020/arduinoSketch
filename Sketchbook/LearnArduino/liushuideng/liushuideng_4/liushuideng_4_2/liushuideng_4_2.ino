//②又或者用两个按键，一个控制灯亮，另一个控制灯灭。

//设置灯的引脚
int Yellow_1 = 12;
int Yellow_2 = 7;

int Red_1 = 11;
int Red_2 = 8;

int Green_1 = 10;
int Green_2 = 9;

//按键
int button_1 = 6;
int button_2 = 5;

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

    pinMode(button_1, INPUT);
    pinMode(button_2, INPUT);
}

void loop()
{
    int state_1 = digitalRead(button_1);
    int state_2 = digitalRead(button_2);
    
    if(state_1==HIGH  && millis()-changeTime>5000)
    {
        TurnOn();
    }
    if(state_2==HIGH  && millis()-changeTime>5000)
    {
        TurnOff();
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
    TurnOff();
    changeTime = millis();//获取时间
}
void TurnOff()
{
    digitalWrite(Yellow_1, LOW);
    digitalWrite(Red_1, LOW);
    digitalWrite(Green_1, LOW);
    digitalWrite(Yellow_2, LOW);
    digitalWrite(Red_2, LOW);
    digitalWrite(Green_2, LOW);
    delay(150);
}
