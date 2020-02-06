#include"Samuquinha.h"

#include <Arduino.h>

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

class move {
    void foward() {
        digitalWrite(motors[0][0], HIGH);
        digitalWrite(motors[0][1], LOW);
        digitalWrite(motors[1][0], HIGH);
        digitalWrite(motors[1][1], LOW);
    }
}

void setSpeed(int vel1, int vel2){
    analogWrite(motors[0][2], vel1);
    analogWrite(motors[1][2], vel2);
}