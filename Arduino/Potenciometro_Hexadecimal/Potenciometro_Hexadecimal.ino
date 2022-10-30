byte ledA = 2; /// rojo
byte ledB = 3; /// verde
byte ledC = 4; /// azul
byte ledD = 5;
byte ledE = 6;
byte ledF = 7;
byte ledG = 8;

int pot = A1;
int var = 0;
int var2 = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledC, OUTPUT);
  pinMode(ledD, OUTPUT);
  pinMode(ledE, OUTPUT);
  pinMode(ledF, OUTPUT);
  pinMode(ledG, OUTPUT);
  Serial.begin(9600);
}

void cero(){
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);

  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, HIGH);
}

void uno(){
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
}

void dos(){
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, LOW);
}

void tres(){
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, LOW);
}

void cuatro(){
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
}

void cinco(){
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
}

void seis(){
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
}

void siete(){
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
}

void ocho(){
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
}

void nueve(){
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, HIGH); ///
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
}

void A(){
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, LOW); ///
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
}

void B(){
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW); ///
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
}

void C(){
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW); ///
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, HIGH);
}

void D(){
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW); ///
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, LOW);
}

void E(){
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW); ///
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
}

void EFE(){
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, LOW); ///
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  var2 = analogRead(pot);
  var = map(var2, 0, 1023, 0, 16);

  if(var == 0 || pot <= 20){
    cero();
  }
  if(var == 1){
    uno();
  }
  if(var == 2){
    dos();
  }
  if(var == 3){
    tres();
  }
  if(var == 4){
    cuatro();
  }
  if(var == 5){
    cinco();
  }
  if(var == 6){
    seis();
  }
  if(var == 7){
    siete();
  }
  if(var == 8){
    ocho();
  }
  if(var == 9){
    nueve();
  }
  if(var == 10){
    A();
  }
  if(var == 11){
    B();
  }
  if(var == 12){
    C();
  }
  if(var == 13){
    D();
  }
  if(var == 14){
    E();
  }
  if(var == 15){
    EFE();
  }

  Serial.print(var);
  Serial.print(" --> POT: ");
  Serial.println(var2);

  
}
