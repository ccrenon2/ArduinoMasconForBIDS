/*BIDS project by TechOtter
This sketch written by ccrenon(@39renon_3939)*/

void setup(){
  //rikkou
  pinMode(2,INPUT);//P5
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);//P1
  //seidou
  pinMode(7,INPUT);//N
  pinMode(8,INPUT);//limit speed
  pinMode(9,INPUT);//B1
  pinMode(10,INPUT);
  pinMode(11,INPUT);
  pinMode(12,INPUT);
  pinMode(13,INPUT);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);//B8
  pinMode(A3,INPUT);//EB
  pinMode(A4,INPUT);//ReverserFoward
  pinMode(A5,INPUT);//ReverserBack
  Serial.begin(19200);
}
void loop(){
  if(DigitalRead(2) == HIGH){
    Serial.print(TRS5¥n);
  }else if(DigitalRead(3) == HIGH){
    Serial.print(TRS4¥n);
  }else if(DigitalRead(4) == HIGH){
    Serial.print(TRS3¥n);
  }else if(DigitalRead(5) == HIGH){
    Serial.print(TRS2¥n);
  }else if(DigitalRead(6) == HIGH){
    Serial.print(TRS1¥n);
  }else if(DigitalRead(7) == HIGH){
    Serial.print(TRS0¥n);
  }else if(DigitalRead(8) == HIGH){
    Serial.print(TRS-1¥n);
  }else if(DigitalRead(9) == HIGH){
    Serial.print(TRS-2¥n);
  }else if(DigitalRead(10) == HIGH){
    Serial.print(TRS-3¥n);
  }else if(DigitalRead(11) == HIGH){
    Serial.print(TRS-4¥n);
  }else if(DigitalRead(12) == HIGH){
    Serial.print(TRS-5¥n);
  }else if(DigitalRead(13) == HIGH){
    Serial.print(TRS-6¥n);
  }else if(DigitalRead(A0) == HIGH){
    Serial.print(TRS-7¥n);
  }else if(DigitalRead(A1) == HIGH){
    Serial.print(TRS-8¥n);
  }else if(DigitalRead(A2) == HIGH){
    Serial.print(TRS-9¥n);
  }else if(DigitalRead(A3) == HIGH){
    Serial.print(TRS-10¥n);
  }
  if(DigitalRead(A4) == HIGH){
    Serial.print(TRRF¥n);
  }else if(DigitalRead(A5) == HIGH){
    Serial.print(TRRB¥n);
  }else{
    Serial.print(TRRN¥n);
  }
}
