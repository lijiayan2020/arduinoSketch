//互动交通灯

//设置汽车灯
int carRed = 8；
int carYellow = 7;
int carGreen = 6;

//按键引脚
 int button = 10;

 //设置行人
int pedRed = 11;
int pedGreen = 12;

int crossTime = 5000; //允许行人通过的时间
unsigned long changeTIme; //按键按下后的时间

void setup() {
  // put your setup code here, to run once:
  //所有LED设置为输出模式
  pinMode(carRed,OUTPUT);
  pinMode(carYellow,OUTPUT);
  pinMode(carGreen,OUTPUT);
  pinMode(pedRed,OUTPUT);
  pinMode(pedGreen,OUTPUT);
  pinMode(button,INPUT); //按键设置为输入模式


  //初始交通灯
  digitalWrite(cargreen, HIGH); //开始，汽车灯为绿
  digitalWrite(pedRed, LOW); //行人灯为红
}

void loop() {
  // put your main code here, to run repeatedly:
  int state = difitalRead(button);
  //检测按键是否被按下，并且是否距上次按下后有5s等待时间
  if(state==HIGH && (millis()-changeTime)>5000){
    //调用变灯函数
    cahngeLights();
     
  }
}
void changeLights(){
  //汽车灯绿灭，红亮
  digitalWrite(carGreen,LOW); 
  digitalWrite(carYellow,HIGH);
  delay(2000);//汽车灯红的时间
  //汽车灯绿变红
  digitalWrite(carYellow,LOW);
  digitalWrite(carRed,HIGH);
  delay(1000);//延迟时间，考虑到安全
  //行人灯红变绿
  digitalWrite(pedRed,LOW);
  digitalWrite(pedGree,HIGH);
  delay(crossTime);//等待一个通过时间
  //行人灯绿灯闪烁，提示可过马路时间快到
  for(int i=0;i<10;i++){
    digitalWrite(pedGreen,HIGH);
    delay(250);
    digitalWrite(pedGreen,LOW);
    delay(250);
  }
  digitalWrite(pedRed,HIGH);//行人红灯亮
  delay(500);
  //汽车灯红灭，黄亮
  digitalWrite(carRed,LOW);
  digitalWrite(carGreen,HIGH);
  changeTime = millis(); //记录上一次灯变化时间 
}
