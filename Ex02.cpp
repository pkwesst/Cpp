void setup(){
  for(int i = 2; i <= 13; i++){
     pinMode(i, OUTPUT);
  }
}

void loop(){
  
  //2, 4, 6, 8, 10, 12 번핀은 HIGH 신호
  //3, 5, 7, 9, 11, 13 번핀은 LOW 신호
  
  for(int i = 2; i <= 13; i++){
    if(i % 2 == 0){
       digitalWrite(i, 1);
    }else{
       digitalWrite(i, 0);
    }
  }
  delay(1000);
  
  for(int i = 2; i <= 13; i++){
    if(i % 2 == 0){
       digitalWrite(i, 0);
    }else{
       digitalWrite(i, 1);
    }
  }
  delay(1000);
  
  
}
