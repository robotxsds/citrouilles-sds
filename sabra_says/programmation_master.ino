// Version finale (programme qui sera sur le Arduino)

/* Bugs possibles:
- Aucun pour l'instant
*/


// Declaration constantes de BOUTONS
const int bo1 = 2;     
const int bo2 = 3;
const int bo3 = 4;
const int bo4 = 5;

// Declaration variables ETAT BOUTON
int etatbo1 = 0;
int etatbo2 = 0;
int etatbo3 = 0;
int etatbo4 = 0;

// Declaration constantes de LEDs
const int led1 = 13;
const int led2 = 12;
const int led3 = 11;
const int led4 = 10;

// TODO: Declarer le(s) son(s)
/*
const int son1 = 9;
const int son2 = 8;
const int son3 = 7;
const int son4 = 6;
*/


// Fonction SETUP

void setup() {
  
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);  
  
  pinMode(bo1, INPUT); 
  pinMode(bo2, INPUT);
  pinMode(bo3, INPUT);
  pinMode(bo4, INPUT);  
}

void loop(){
  buttonState = digitalRead(bo1);
  buttonState = digitalRead(bo2);
 
    if (buttonState == HIGH) {     
      digitalWrite(led1, HIGH);  
  } 
  
    else {
      digitalWrite(led1, LOW); 
  }
  
