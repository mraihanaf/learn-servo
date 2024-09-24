#include <Servo.h>

Servo myservo;

int pos = 0;
int pin = 9;
int add = 10;

void setup() {
  myservo.attach(9);
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
  
  if(pos >= 180 || pos < 0){
    add = add * -1;
  }
  pos = pos + add;
  // write(int angle);
  myservo.write(pos);
  delay(100);
}

// sensor dan akuator
