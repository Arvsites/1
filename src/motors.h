
int motor[4][2] = {{44,45},{46,47},{48,49},{50,51}}; //motor 1,2,3,4; [enable], [dir];


void motor_begin(){
    for (int i=0;i<4;i++)
        for (int j=0;j<2;j++)
            pinMode(motor[i][j], OUTPUT);
}

void straight (int t, bool direction, int speed){

}


void turn (float rad){
    
}