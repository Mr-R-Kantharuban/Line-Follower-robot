#define irsensor1 8
#define irsensor2 9

void setup() {
  pinMode(irsensor1, INPUT);
  pinMode(irsensor2, INPUT);
  
  
  Serial.begin(9600);

}
void forward() {
  //  #motor 1
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  //  #motor 2
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
}


void stops() {
  //  #motor 1
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  //  #motor 2
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
}


void left() {
  //  #motor 1
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  //  #motor 2
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
}


void right() {
  //  #motor 1
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  //  #motor 2
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
}



void back() {
  //  #motor 1
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  //  #motor 2
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
}
void loop() {
  forward();
  int ir1=digitalRead(irsensor1);
  int ir2=digitalRead(irsensor2);
  if(ir1==1 && ir2==1)
  {
    forward();
  }
  else if(ir1==0 && ir2==1)
  {
    right();
//    delay(500);
  }
  else if(ir1==1 && ir2==0)
  {
    left();
//    delay(500);
  }
  else
  {
    stops();
  }
 
}
