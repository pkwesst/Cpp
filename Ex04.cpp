void setup(){
  pinMode(2, INPUT); //2번 핀은 Sensor와 연결됨
  Serial.begin(9600); //모니터에 출력 
	pinMode(13, OUTPUT);
}

void loop(){
  int buttonState = digitalRead(2);
  Serial.println(buttonState);
  
	if(buttonState ==1 1){
		digitalWrite(13, HIGH);
	}else{
		digitalWrite(13, LOW);
	}

  delay(10);
}

//결과 => 버튼 누르면 시리얼 모니터의 0이 1로 바뀜
