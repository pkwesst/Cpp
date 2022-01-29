void setup(){
  pinMode(2, INPUT); //2번 핀은 Sensor와 연결됨
  Serial.begin(9600); //모니터에 출력 
	pinMode(13, OUTPUT);
}

void loop(){
  int buttonState = digitalRead(2);
  Serial.println(buttonState);
  
  delay(10);
  
  digitalWrite(13,buttonState);
}

//결과 => 버튼 누르면 LED 켜짐
