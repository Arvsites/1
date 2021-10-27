
int motor[4][2] = {{44,45},{46,47},{48,49},{50,51}}; //motor 1,2,3,4; [enable], [dir];


void motor_begin(){
    for (int i=0;i<4;i++)
        for (int j=0;j<2;j++)
            pinMode(motor[i][j], OUTPUT);
}

void straight (int t, bool direction, int speed){

}


void turn (float rad){
    while (mpu6050()>rad){
        //тут находится код для поворота датчика и двигателей
        //двигатели настроены на режим поворота
        //двигатель 1 и 3 поворачиваются в одну сторону
        //двигатеь 2 и 4 поворачиваются в другую сторону
    }
}