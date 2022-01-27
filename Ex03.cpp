int trig = 2;
int echo = 3;

void setup(){
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(trig, HIGH);
  delay(10);
  digitalWrite(trig, LOW);
  
  // echo LOW -> 초음파가 들어오면 HIGH로 뜀
  int duration = pulseIn(echo, HIGH) / 2;
  // 아두이노 + HC-SR04
  // 보정값 : 29.1
  
  int distance = duration / 29.1;
  Serial.print("distance : ");
  Serial.print(distance);
  Serial.println("cm");
  
  
  
}
