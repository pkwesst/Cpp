// C++ code 
void setup(){
  // 최초 1회만 실행됨(run once)
  
  // 내가 Module을 연결했다면, pinMode()함수 설정
  // 13번 핀에 LED를 연결함
  // 1.Actuator : 내가 Module에 신호를 보냄
  // 2.Sensor : Module로부터 내가 신호를 받음
  // pinMode(핀 번호, 입출력모드);
  // pinMode(13, OUTPUT); // 13번 핀에 actuator연결 된 상태임
  for(int i = 2; i <= 13; i++){
  pinMode(i, OUTPUT);
  }
}

void loop(){
  // setup() 이후에 동작!
  // 전력이 끊길 때까지!
  // 무한 반복!
  // 출력=>Write 입력=>Read
  
  // 1.13번핀을 통해 +신호를 출력
  // digitalWrite(핀 번호, 신호 종류);
  //digitalWrite(13, HIGH);
  // 2.1초 쉼
  //delay(1000); // delay의 단위는 ms(1000분의 1초)
  // 3.13번핀을 통해 -신호를 출력
  //digitalWrite(13,LOW);
  // 4.1초 쉼
  //delay(1000);
  
  // 1.핀 번호가 홀수인 핀들이 켜짐!(HIGH신호를 출력!)
  // 핀 번호가 짝수인 핀들은 꺼짐!(LOW신호를 출력!)
  for(int j = 0; j <= 1; j++){
  	for(int i = 1; i <= 6; i++){
	  	digitalWrite(i*2+1, j-1);
  		digitalWrite(i*2, j);
  	}
  delay(1000); // 1초 쉼
  }

  // 2.핀 번호가 홀수인 핀들이 꺼짐!(LOW신호를 출력!)
  // 핀 번호가 짝수인 핀들은 켜짐!(HIGH신호를 출력!)
}
