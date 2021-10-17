#include <TroykaLight.h>
TroykaLight sensorLight(A14);

void photoresisrot()    {
    // считывание данных с датчика освещённости
    sensorLight.read();
    // вывод показателей сенсора освещённости в люксахи
    Serial.print(sensorLight.getLightLux());
    Serial.println(" Lx\t");
    delay(300);
}