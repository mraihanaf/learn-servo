#include <Servo.h>

Servo myservo;

int pos = 0;
int pin = 9;
int add = 45;
int buttonPin = 10;

void setup() {
  Serial.begin(9600);
  myservo.attach(9);
  pinMode(A0, INPUT);\
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  // Servo max angle is 180
  // Servo adalah akuator
  // Bahasa -> Servus (latin) artinya "Pengikut/Pelayan"
  // Why servo small?
  // cuz torsi (power) yang lebih tinggi
  // Servo components
  // 1. Motor DC/AC (Sumber daya)
  // 2. Motor Servo ( GearBox ) (Menggerakan, dll)
  // 3. Potensio (Mengubah Tegangan yang digunakan pada sudut yang berbeda)
  // 4. Poros Output (Pengukur sudut)
  // 5. Sirkuit kontrol
  

  // Perkabelan -> Coklat: GND - Merah: Power(5v/3v) - Orange: Signal 
  int state = digitalRead(buttonPin);
  int potVal = analogRead(A0);
  int angle = map(potVal, 0, 1023, 0, 180);
  myservo.write(angle);
  
  if(state == LOW){
    myservo.write(90);
  }

  Serial.print("potVal: ");
  Serial.print(potVal);
  Serial.print(" Angle: ");
  Serial.print(myservo.read());
  Serial.print(" Button: ");
  Serial.print(state);
  Serial.print("\n");
}

// sensor dan akuator
