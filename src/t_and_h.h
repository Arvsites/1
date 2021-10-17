#include <iarduino_DHT.h>   // подключаем библиотеку для работы с датчиком DHT
iarduino_DHT sensor(2);     // объявляем  переменную для работы с датчиком DHT, указывая номер цифрового вывода к которому подключён датчик (сейчас 2pin)

void t_and_h(){
    switch(sensor.read()){    // читаем показания датчика
        case DHT_OK:               Serial.println((String) "CEHCOP B KOMHATE: " + sensor.hum + "% - " + sensor.tem + "*C");  break;
        case DHT_ERROR_CHECKSUM:   Serial.println(         "CEHCOP B KOMHATE: HE PABEHCTBO KC");                     break;
        case DHT_ERROR_DATA:       Serial.println(         "CEHCOP B KOMHATE: OTBET HE COOTBETCTB. CEHCOPAM 'DHT'"); break;
        case DHT_ERROR_NO_REPLY:   Serial.println(         "CEHCOP B KOMHATE: HET OTBETA");                          break;
        default:                   Serial.println(         "CEHCOP B KOMHATE: ERROR");                               break;
    }  
}