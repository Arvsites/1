#include <Arduino.h>
#include <t_and_h.h>
#include "mpu6050.h"
#include "photoresistor.h"
#include "motors.h"

//*
void setup(){
  
  mpu6050_begin();
  motor_begin();

  Serial.begin(115200);
  delay(3000);              // выполняем задержку для перехода датчиков в активное состояние
  
}
void loop(){
  //mpu6050();      //гироском-акселерометр
  //t_and_h();      //температура-влажность
  //photoresisrot();      //освещенность

  
}
//*/


