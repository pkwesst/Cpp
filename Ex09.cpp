void setup(){
  Serial.begin(9600);
  pinMode(9, OUTPUT); 
}

void loop(){
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  
  // 값을 변환시켜주는 Arduino 내장함수 : map();
  // map(변환할 값, 변환 전 최소, 변환 전 최대, 변환 후 최소, 변환 후 최대);
  int mapValue = map(sensorValue, 0, 1023, 0, 255);
  analogWrite(9, mapValue);
  
  delay(10);
}
