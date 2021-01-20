// 练习，设置交通灯
void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);//红灯
  pinMode(11, OUTPUT); //黄灯
  pinMode(10, OUTPUT); //绿灯
}

void loop() {
  // put your main code here, to run repeatedly:
  //1.红灯一直亮3秒；2.然后红灯熄灭，黄灯亮1秒，3.黄灯熄灭，绿灯亮3秒 4. 绿灯灭，黄灯亮1秒，5.黄灯灭，红灯亮3秒
  //step1
  digitalWrite(12, HIGH);
  delay(3000);
  
  digitalWrite(11,HIGH);
  delay(1000);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
  delay(3000);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  delay(1000);
  digitalWrite(11, LOW);
      
}
