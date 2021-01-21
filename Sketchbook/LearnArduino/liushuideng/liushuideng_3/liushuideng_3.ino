//（3）再比如，从左至右，依次亮起1个、2个、3个……

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
}
