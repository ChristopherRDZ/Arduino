byte led3 = 3;
byte led5 = 5;
byte led6 = 6;
byte led9 = 9;
int pot = A1; // Analogico a A1
int lePot = 0;
int var = 0, var2 = 0, var3 = 0, var4 = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(led3, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led9, OUTPUT);
  Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
  
  lePot = analogRead(pot);
  ///var2 = map(lePot, 0, 1023, 0, 255); /// Ajustamos el potenciometro al led
  ///var3 = map(lePot, 0, 1023, 0, 255);

  if(lePot >= 0 && lePot <= 256){
    var2 = 0;
    var3 = 0;
    var4 = 0;
    var = map(lePot, 0, 256, 0, 255);
  }
  if(lePot >= 257 && lePot <= 512){
    var3 = 0;
    var4 = 0;
    var2 = map(lePot, 257, 512, 0, 255);
  }
  if(lePot >= 513 && lePot <= 768){
    var4 = 0;
    var3 = map(lePot, 513, 768, 0, 255);
  }
  if(lePot >= 769 && lePot <= 1023){
    var4 = map(lePot, 769, 1023, 0, 255);
  }

  analogWrite(led3, var);
  analogWrite(led5, var2);
  analogWrite(led6, var3);
  analogWrite(led9, var4);

  Serial.print("Lect. pot: ");
  Serial.print(lePot);
  Serial.print("  -> Ledcito: ");
  Serial.print(var2);
  Serial.print("   -> Ledcito2: ");
  Serial.println(var3);


}
