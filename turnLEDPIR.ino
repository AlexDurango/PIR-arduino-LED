//Declarar Variables
const int pinPIR = 1;

int rojoLED= 2;
int azulLED = 3;
int verdeLED = 4;

const int buzzerPIN = 5;
const int buzzerPIN2 = 6;


void setup()
{
  pinMode(pinPIR, INPUT);
  
  pinMode(rojoLED, OUTPUT);
  pinMode(azulLED, OUTPUT);
  pinMode(verdeLED, OUTPUT);
  
  pinMode(buzzerPIN, OUTPUT);
  pinMode(buzzerPIN2, OUTPUT);
}

void loop()
{
  //Lee si el sensor se activa
  int encenderPIR = digitalRead(pinPIR);
  
  if(encenderPIR == HIGH){
    //Usar la función random(volor minimo, valor maximo)
    int valorRandomRojo = random(1, 255);
    int valorRandomAzul = random(1, 255);
    int valorRandomVerde = random(1, 255);
    
    analogWrite(rojoLED, valorRandomRojo);
    analogWrite(azulLED, valorRandomAzul);
    analogWrite(verdeLED, valorRandomVerde);
    
    tone(buzzerPIN2, 700, 300);//The buzzer goes brrrrrrrrrrrrrrrrrrrrr
    delay(250);
    noTone(buzzerPIN);
    delay(250);
    tone(buzzerPIN, 200, 300);
    delay(250);
    noTone(buzzerPIN2);
   
  
    
    
    //usar tone(pinDelBuzzer, frecuencia, tiempo); y not(pinBuzzer)
    
    analogWrite(verdeLED, 0);
    analogWrite(verdeLED, 0);
    analogWrite(verdeLED, 0);
    
    //apaga el sensor luego de 250 ms
    encenderPIR == LOW;
  }
  
  else{
    delay(200);
  }
}