#include <Arduino.h>
#include <t_and_h.h>
//#include <mpu6050.h>
/*
void setup(){
  Serial.begin(9600);       // открываем последовательный порт на скорости 9600 бод
  delay(1000);              // выполняем задержку для перехода датчика в активное состояние
}
void loop(){
  t_and_h();
  delay(2000);
}
*/
#include "MPU6050.h"
MPU6050 mpu;
int16_t ax, ay, az;
int16_t gx, gy, gz;
void setup() {
  Wire.begin();
  Serial.begin(9600);
  mpu.initialize();
  // состояние соединения
  Serial.println(mpu.testConnection() ? "MPU6050 OK" : "MPU6050 FAIL");
  delay(1000);
}
void loop() {
  mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
  Serial.print(ax); Serial.print('\t');
  Serial.print(ay); Serial.print('\t');
  Serial.print(az); Serial.print('\t');
  Serial.print(gx); Serial.print('\t');
  Serial.print(gy); Serial.print('\t');
  Serial.println(gz);
  delay(5);
}