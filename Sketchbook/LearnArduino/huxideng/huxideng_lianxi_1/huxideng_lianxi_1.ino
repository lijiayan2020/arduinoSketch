/*
（1）用LED做个火焰的效果，
通过PWM使LED产生随机的亮度变化，来模拟火焰闪烁的效果。
它可以放在家中作为小夜灯，用浅色罩子盖住效果更佳。
主要材料：一个红色LED、两个黄色LED以及220Ω电阻。
在这个实验中，有个函数会比较好用——random()。
random()可以产生一定范围内的随机数。
提示：可以先设定LED的亮度，在其值附近产生一个随机数，比如random(120)+135，
让其值稳定在135附近，产生这种小幅变化，就更具有火焰跳跃感，不妨尝试一下。
具体用法可以查看编程参考手册，会详细介绍这个函数的用法。之后的讲解中，我们可能对有些函数不进行详细说明，
你可以通过这种方法来学习某个新函数。参考程序：在DFRobot Wiki网站搜索“Arduino编程参考手册（多页面版）”。
*/


//设置灯的引脚
int yellow_1 = 11;
int red_0 =10;
int yellow_2 = 9;

void setup()
{
    pinMode(yellow_1, OUTPUT);
    pinMode(red_0, OUTPUT);
    pinMode(yellow_2, OUTPUT);
}

void loop()
{
    Change(yellow_1, 250);
    Change(yellow_2, 245);
    Change(red_0, 220);
}
void Change(int ledPin, byte start)
{
    int change = random(-80,80);
    int value = start + change;
    analogWrite(ledPin, value);
    delay(100);
}