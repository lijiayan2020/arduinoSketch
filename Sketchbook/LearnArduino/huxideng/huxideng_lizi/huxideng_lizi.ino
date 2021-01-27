//呼吸灯，Arduino UNO的数字引脚中有6个引脚标有“~”，这个符号代表该引脚具有PWM功能
//呼吸灯，就是让灯有一个由亮到暗、再由暗到亮逐渐变化的过程，模仿人均匀呼吸的节奏。

int ledPin = 10;
void setup()
{
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    fadeOn(1000,5);
    fadeOff(1000,5);
}

void fadeOn(unsigned int time,int increasement)
{
    for(byte value=0;value<255;value+=increasement)
    {
        analogWrite(ledPin,value);
        delay(time/(255/5));
    }
}

void fadeOff(unsigned int time,int increasement)
{
    for(byte value=0;value<255;value-=increasement)
    {
        analogWrite(ledPin,value);
        delay(time/(255/5));
    }
}