int solenoidPin1 = 9;
int solenoidPin2 = 8;
int solenoidPin3 = 10;
int odd = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(solenoidPin1, OUTPUT);
  pinMode(solenoidPin2, OUTPUT);
  pinMode(solenoidPin3, OUTPUT);
  pinMode(odd, OUTPUT);
}

void loop() {
  int N = 2000;
  int Rest = 8000;
  // put your main code here, to run repeatedly:
  for (int i=1;i<=120;i++)
  {
    // Oddball:
    
   if (i==1 || i==4 || i==6 || i==9 || i==10  || i==14  || i==16  || i==23  || i==24 || i==33 || i==34 || i==40  || i==44  || i==45  || i==47  || i==56 || i==60 || i==65 || i==69 || i==71 || i==79  || i==80  || i==87  || i==93  || i==103 || i==106 || i==107 || i==110 || i==112 || i==114)
    //if (i==4 || i==5 || i==12  || i==13  || i==14  || i==17  || i==19  || i==20  || i==23  || i==30  || i==44  || i==47  || i==51  || i==56  || i==59  || i==73  || i==82  || i==84  || i==86  || i==96  || i==106 || i==108 || i==117)
        
    {
      digitalWrite(solenoidPin1, HIGH);
      digitalWrite(solenoidPin2, LOW);
      digitalWrite(solenoidPin3, LOW);
      digitalWrite(odd,LOW);
      delay(Rest);
      digitalWrite(solenoidPin1, LOW);
      digitalWrite(solenoidPin2, LOW);
      digitalWrite(solenoidPin3, LOW);
      digitalWrite(odd,LOW);
      delay(3);
      digitalWrite(solenoidPin1, LOW);
      digitalWrite(solenoidPin2, LOW);
      digitalWrite(solenoidPin3, HIGH);
      digitalWrite(odd,HIGH);
      delay(N);
      digitalWrite(solenoidPin1, LOW);
      digitalWrite(solenoidPin2, LOW);
      digitalWrite(solenoidPin3, LOW);
      digitalWrite(odd,LOW);
      delay(3);
    }
    else
    {
      digitalWrite(solenoidPin1, HIGH);
      digitalWrite(solenoidPin2, LOW);
      digitalWrite(solenoidPin3, LOW);
      digitalWrite(odd,LOW);
      delay(Rest);
      digitalWrite(solenoidPin1, LOW);
      digitalWrite(solenoidPin2, LOW);
      digitalWrite(solenoidPin3, LOW);
      digitalWrite(odd,LOW);
      delay(3);
      digitalWrite(solenoidPin1, LOW);
      digitalWrite(solenoidPin2, HIGH);
      digitalWrite(solenoidPin3, LOW);
      digitalWrite(odd,HIGH);
      delay(N);
      digitalWrite(solenoidPin1, LOW);
      digitalWrite(solenoidPin2, LOW);
      digitalWrite(solenoidPin3, LOW);
      digitalWrite(odd,LOW);
      delay(3);
    }
  }
      digitalWrite(solenoidPin1, HIGH);
      digitalWrite(solenoidPin2, LOW);
      digitalWrite(solenoidPin3, LOW);
      digitalWrite(odd,LOW);
      delay(100000);
}
