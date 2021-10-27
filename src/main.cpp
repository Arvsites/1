#include <Arduino.h>
#include <t_and_h.h>
#include "mpu6050.h"
#include "photoresistor.h"
#include "motors.h"

String res ="";

void setup(){
  
  mpu6050_begin();
  motor_begin();

  Serial.begin(115200);
  delay(3000);              // выполняем задержку для перехода датчиков в активное состояние
  Serial.setTimeout(100);
  
}
void loop(){
  // Serial.print(mpu6050());
  // Serial.print(' ');
  // Serial.print(hum());
  // Serial.print(' ');
  // Serial.print(tem());
  // Serial.print(' ');
  // Serial.println(photoresisrot());
  // delay(400);
  //mpu6050();      //гироском-акселерометр
  //tem();      //температура-влажность
  //photoresisrot();      //освещенность
  if (Serial.available()>0){
    char key = Serial.read();
    int val = Serial.parseInt();
    switch (key) {
      case 'd':
        res = "d";
        res += (String) mpu6050();
        res += ",";
        res += (String) photoresisrot();
        res += ",";
        res += (String) tem();
        res += ",";
        res += (String) hum();
        res += ";";
        Serial.println(res);
        val = 0;
        break;
      
      default:
        break;
    }
      
    
  }

}



