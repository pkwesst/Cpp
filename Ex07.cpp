void setup(){
  pinMode(9, OUTPUT); // analog 출력 위해 ~ 핀 연결!
  // pinMode는 기본값이 INPUT
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop(){
  
  int btn1 = digitalRead(2);
  int btn2 = digitalRead(3);
  int btn3 = digitalRead(4);
  int btn3 = digitalRead(5);
  
  if(btn1 ==1){
    analongWrite(9,0);
  }else if(btn2 == 1){
    analogWrite(9, 76)
  }else if(btn3 == 1){
    analogWrite(9, 127);
  }else if(btn4 == 1){
    analogWrite(9, 255);
  }
  
  delay(10);
}

// 4개의 버튼으로 밝기 조절
