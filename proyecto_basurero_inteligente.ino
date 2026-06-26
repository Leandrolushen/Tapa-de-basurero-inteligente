#include <Servo.h>

const int pinTrig = 9;
const int pinEcho = 10;
const int pinServo = 6; 

Servo miServo; 
bool tapaAbierta = false; 

void setup() {
  Serial.begin(9600);

  pinMode(pinTrig, OUTPUT); 
  pinMode(pinEcho, INPUT);  
  
  miServo.attach(pinServo); 
  miServo.write(0); // Inicia cerrado
}

void loop() {
  long duracion;
  int distancia;

  // Pulso limpio para el sensor
  digitalWrite(pinTrig, LOW);
  delayMicroseconds(4); // Aumentado a 4 para mayor estabilidad
  digitalWrite(pinTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrig, LOW);

  duracion = pulseIn(pinEcho, HIGH, 30000); // 30000ms es el tiempo límite (timeout) si no encuentra eco
  distancia = duracion * 0.034 / 2;

  // FILTRO: Si la lectura está fuera de rango, ignoramos el loop actual
  if (distancia <= 0 || distancia > 250) {
    delay(50);
    return; // Salta el resto del código y vuelve a medir
  }

  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println("cm");
  
  // Condición para activar la tapa
  if (distancia < 50) {
    if (tapaAbierta == false) {
      miServo.write(180); // Abre rápido
      tapaAbierta = true;
      Serial.println("-> TAPA ABIERTA <-");
    } 
    else {
      miServo.write(0); // Cierra rápido
      tapaAbierta = false;
      Serial.println("-> TAPA CERRADA <-");
    }
    delay(2000); // Aumentado a 2 segundos para que te dé tiempo de quitar la mano
  }

  delay(100); 
}