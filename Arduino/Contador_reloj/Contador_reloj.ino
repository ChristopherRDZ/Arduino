byte ledA = 2; /// rojo
byte ledB = 3; /// verde
byte ledC = 4; /// azul
byte ledD = 5;
byte ledE = 6;
byte ledF = 7;
byte ledG = 8;
byte boton = 9;
byte boto2 = 10;
byte var = 0;
byte varprev = 0;
byte con = -1;
byte var2 = 0;
byte var2prev = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledC, OUTPUT);
  pinMode(ledD, OUTPUT);
  pinMode(ledE, OUTPUT);
  pinMode(ledF, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(boton, INPUT);
  Serial.begin(9600);
}

void cero(){
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);

  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, LOW);
}

void uno(){
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
}

void dos(){
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, LOW);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, HIGH);
}

void tres(){
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, HIGH);
}

void cuatro(){
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
}

void cinco(){
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
}

void seis(){
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
}

void siete(){
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledG, LOW);
}

void ocho(){
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
}

void nueve(){
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledC, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledE, LOW);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledG, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  var = digitalRead(boton);
  if(var == 1 && varprev == 0){
    con++;
    if(con >= 10){
      con = 0;
    }
    if(con == 0){
      cero();
    }else if(con == 1){
      uno();
    }else if(con == 2){
      dos();
    }else if(con == 3){
      tres();
    }else if(con == 4){
      cuatro();
    }else if(con == 5){
      cinco();
    }else if(con == 6){
      seis();
    }else if(con == 7){
      siete();
    }else if(con == 8){
      ocho();
    }else if(con == 9){
      nueve();
    }

    varprev = var;
  }else{
    varprev = var;
  }

  /*var2 = digitalRead(boton2);
  if(boton2 == 1 && var2prev == 0){
    con--;
    if(con < 0){
      con = 9;
    }
    if(con == 0){
      cero();
    }else if(con == 1){
      uno();
    }else if(con == 2){
      dos();
    }else if(con == 3){
      tres();
    }else if(con == 4){
      cuatro();
    }else if(con == 5){
      cinco();
    }else if(con == 6){
      seis();
    }else if(con == 7){
      siete();
    }else if(con == 8){
      ocho();
    }else if(con == 9){
      nueve();
    }
    var2prev = var2;
  }else{
    var2prev = var2;
  }

  delay(100);*/
  
}
