#include"Samuquinha.h"

Samuquinha::Samuquinha(int motores[2][3], int init_p[2]){
    Serial.println("Iniciada biclioteca");
    motors = motores;
}

int Samuquinha::goTo(int x, int y){
    return 1;
}

int Samuquinha::goBack(){
    return 2;
}

void Samuquinha::obstacle(){
    return 3;
}

// void Samuquinha::frente(){
//     digitalWrite(motors[0][0], HIGH);
//     digitalWrite(motors[0][1], LOW);
//     digitalWrite(motors[1][0], HIGH);
//     digitalWrite(motors[1][1], LOW);
//     analogWrite(motors[0][2], 255);
//     analogWrite()
// }   