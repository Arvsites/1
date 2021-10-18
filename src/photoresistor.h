#include <TroykaLight.h>
TroykaLight sensorLight(A14);

void photoresisrot()    {
    // считывание данных с датчика освещённости
    sensorLight.read();
    // вывод показателей сенсора освещённости в люксахи
    Serial.println(sensorLight.getLightLux());
    //delay(300);
}