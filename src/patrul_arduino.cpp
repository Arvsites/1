#include <Arduino.h>
#include <t_and_h.h>
#include "mpu6050.h"

void setup(){
  mpu6050_begin();
  
  Serial.begin(115200);       // открываем последовательный порт на скорости 9600 бод
  delay(3000);              // выполняем задержку для перехода датчика в активное состояние
  
}
void loop(){
  mpu6050();
  /*
  t_and_h();
  delay(2000);
  */
}
