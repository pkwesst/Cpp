void setup(){
  pinMode(9, OUTPUT); // analog 출력 위해 ~ 핀 연결!
}

void loop(){
  
  analogWrite(9, 0);// LED의 밝기를 0%
  delay(1000);// 1초 쉼
  analogWrite(9, 76); // LED의 밝기를 30%
  delay(1000);// 1초 쉼
  analogWrite(9, 127);// LED의 밝기를 50%
  delay(1000);// 1초 쉼
  analogWrite(9, 255);// LED의 밝기를 100%
  delay(1000);// 1초 쉼


}
