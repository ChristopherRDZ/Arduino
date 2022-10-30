byte ledcito = 2, led2 = 3, led3 = 4;
byte led7 = 7; // Rojo
byte led8 = 8; // amarillo
byte led9 = 9; // verde

void setup() {
  pinMode(ledcito, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(led7, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(ledcito, LOW);
  digitalWrite(led2, HIGH); /// Rojo prendido
  digitalWrite(led9, HIGH); /// Verde prendido
  delay(3000);
  for (int i = 1; i <= 3; i++){
    digitalWrite(led9, LOW);
    delay(200);
    digitalWrite(led9, HIGH);
    delay(200);
  }

  digitalWrite(led3, LOW);
  ///digitalWrite(ledcito, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led9, LOW);
  digitalWrite(led8, HIGH);
  delay(1000);
  
  digitalWrite(led3, HIGH); /// Verde prendido
  digitalWrite(ledcito, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led7, HIGH); /// Rojo apagado
  delay(3000);

  for (int i = 1; i <= 3; i++){
    digitalWrite(led3, LOW);
    delay(200);
    digitalWrite(led3, HIGH);
    delay(200);
  }


  digitalWrite(led3, LOW);
  digitalWrite(ledcito, HIGH);
  delay(1000);
  /*for (int i = 1; i <= 10; i++){
    digitalWrite(led3, LOW);
    digitalWrite(ledcito, LOW);
    digitalWrite(led2, LOW);
    delay(100);

    digitalWrite(led3, HIGH);
    digitalWrite(ledcito, LOW);
    digitalWrite(led2, LOW);
    delay(100);
  }*/


}
