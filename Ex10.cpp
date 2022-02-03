// C++ code
int scale[9] = {262, 262, 294, 330, 349, 392, 440, 494, 523};
int piano[10] = {1, 3, 5, 1, 3, 5, 6, 6, 6, 5};

void setup()
{

}

void loop()
{
  //tone(핀 번호, 진동수, 지속시간);
  for(int i = 0; i < 10; i++){
  	tone(8, scale[piano[i]], 100);
    delay(200);
  }
}
