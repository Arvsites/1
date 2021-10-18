
int m1[] = {12,13,14}, //step, dir, enable
    m2[] = {12,13,14},
    m3[] = {12,13,14},
    m4[] = {12,13,14};


void motor_begin(){
    pinMode(12,OUTPUT);
    pinMode(12, OUTPUT);
    for (int i=1;i<4;i++)
        pinMode(m1[i], OUTPUT);
    for (int i=1;i<4;i++)
        pinMode(m2[i], OUTPUT);
    for (int i=1;i<4;i++)
        pinMode(m3[i], OUTPUT);
    for (int i=1;i<4;i++)
        pinMode(m4[i], OUTPUT);
}

void straight (int t, bool direction, int speed){

}


void turn (float rad){
    
}