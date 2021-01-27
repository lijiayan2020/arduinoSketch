//②又或者用两个按键，一个控制灯亮，另一个控制灯灭。

//设置灯的引脚
int Yellow_1 = 12;


//按键
int button_1 = 6;
int button_2 = 5;

//记录时间点
unsigned long changeTime;

void setup()
{
    pinMode(Yellow_1, OUTPUT);

    pinMode(button_1, INPUT_PULLUP);
    pinMode(button_2, INPUT_PULLUP);
}

void loop()
{
    int state_1 = digitalRead(button_1);
    int state_2 = digitalRead(button_2);
    
    if(state_1==LOW  )
    {
        digitalWrite(Yellow_1, HIGH);
    }
    if(state_2==LOW )
    {
        digitalWrite(Yellow_1, LOW);
    }

}
