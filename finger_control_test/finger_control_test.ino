#include <Servo.h>

//Set servo names
Servo finger1;
Servo finger2;
Servo finger3;
Servo finger4;

//Set servo pins
int f1 = 50;
int f2 = 51;
int f3 = 52;
int f4 = 4;

//Set servo state (Open/close)
boolean fb1 = false;
boolean fb2 = false;
boolean fb3 = false;
boolean fb4 = false;

char receivedChar; 
boolean newData = false;


void setup() {
  Serial.begin(115200);

  // Set outputs
  finger1.attach(f1);
  finger1.write(0);

  finger2.attach(f2);
  finger2.write(0);

  finger3.attach(f3);
  finger3.write(0);

  finger4.attach(f4);
  finger4.write(0);
  
}

void loop() {
  recvOneChar();
  showNewData();

  if (receivedChar == '1'){
    // Toggle finger one
    if (fb1 == false){
      finger1.write(180);
      fb1 = true;
    } else {
      finger1.write(0);
      fb1 = false;
    }
  }

  if (receivedChar == '2'){
    // Toggle finger two
    if (fb2 == false){
      finger2.write(180);
      fb2 = true;
    } else {
      finger2.write(0);
      fb2 = false;
    }
  }

  if (receivedChar == '3'){
    // Toggle finger three
    if (fb3 == false){
      finger3.write(180);
      fb3 = true;
    } else {
      finger3.write(0);
      fb3 = false;
    }
  }

  if (receivedChar == '4'){
    // Toggle finger four
    if (fb4 == false){
      finger4.write(180);
      fb4 = true;
    } else {
      finger4.write(0);
      fb4 = false;
    }
  }

  if (receivedChar == '5'){
    // Toggle all fingers
    if (fb1 == false){
      finger1.write(180);
      finger2.write(180);
      finger3.write(180);
      finger4.write(180);
      fb1 = true;
    } else {
      finger1.write(0);
      finger2.write(0);
      finger3.write(0);
      finger4.write(0);
      fb1 = false;
    }
  }

  delay(20);
}



void recvOneChar() {
    if (Serial.available() > 0) {
        receivedChar = Serial.read();
        newData = true;
    }
}

void showNewData() {
    if (newData == true) {
        Serial.print("Toggling ... ");
        Serial.println(receivedChar);
        newData = false;
    }
}

