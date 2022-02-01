void setup(){
  pinMode(9, OUTPUT); // analog출력위해 ~ 핀 연결!
  // pinMode는 기본값이 INPUT
  pinMode(2, INPUT);
  Serial.begin(9600);
}
int cnt = 0; // 버튼 누른 횟수를 저장하는 변수
boolean check = true;

void loop(){
  int btn1 = digitalRead(2);
  
  if(btn1 == 1){
    if(check == true){
       cnt++;
         check = false;
    }
  }else{
     check = true;
  }
  Serial.println(cnt);
  
  if(cnt % 4 == 0){
     analogWrite(9, 0);
  }else if(cnt % 4 == 1){
     analogWrite(9, 76);
  }else if(cnt % 4 == 2){
     analogWrite(9, 127);
  }else{
     analogWrite(9, 255);   
  }
  
}

//버튼 디바운서
//버튼 누를 때마다 기능이 달라짐
