byte led2 = 2;
byte led3 = 3;
byte led4 = 4;
byte led5 = 5;
byte led6 = 6;
byte led7 = 7;
byte led8 = 8;
byte led9 = 9;

void setup() {
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);

  ///Hacia enfrente 

  digitalWrite(led2,HIGH);
  delay(50);

  digitalWrite(led2, LOW);
  digitalWrite(led3,HIGH);
  delay(50);

  digitalWrite(led3, LOW);
  digitalWrite(led4,HIGH);
  delay(50);

  digitalWrite(led4, LOW);
  digitalWrite(led5,HIGH);
  delay(50);

  digitalWrite(led5, LOW);
  digitalWrite(led6,HIGH);
  delay(50);

  digitalWrite(led6, LOW);
  digitalWrite(led7,HIGH);
  delay(50);

  digitalWrite(led7, LOW);
  digitalWrite(led8,HIGH);
  delay(50);

  digitalWrite(led8, LOW);
  digitalWrite(led9,HIGH);
  delay(50);


  ///Hacia atras

  digitalWrite(led9, LOW);
  digitalWrite(led8,HIGH);
  delay(50);

  digitalWrite(led8, LOW);
  digitalWrite(led7,HIGH);
  delay(50);

  digitalWrite(led7, LOW);
  digitalWrite(led6,HIGH);
  delay(50);

  digitalWrite(led6, LOW);
  digitalWrite(led5,HIGH);
  delay(50);

  digitalWrite(led5, LOW);
  digitalWrite(led4,HIGH);
  delay(50);

  digitalWrite(led4, LOW);
  digitalWrite(led3,HIGH);
  delay(50);

  digitalWrite(led3, LOW);
  digitalWrite(led2,HIGH);
  delay(50);
  

}
