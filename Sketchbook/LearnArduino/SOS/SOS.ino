//基于摩尔斯密码
int LedPin = 10;
void setup() {
  // put your setup code here, to run once:
  
  pinMode(LedPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  //S字母
  for(int i=0;i<3;i++){
    digitalWrite(LedPin, HIGH);
    delay(150);
    digitalWrite(LedPin, LOW);
    delay(100);
  }
  
  delay(100); //字母间的间距

  //O字母
  for(int i=0;i<3;i++){
    digitalWrite(LedPin, HIGH);
    delay(400);
    digitalWrite(LedPin, LOW);
    delay(100);
  }

    delay(100); //字母间距

   //S字母
   for(int i=0;i<3;i++){
    digitalWrite(LedPin, HIGH);
    delay(150);
    digitalWrite(LedPin, LOW);
    delay(100);
  }
  delay(5000); //距离下一个SOS 5s
}
