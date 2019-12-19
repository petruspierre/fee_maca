# SISTEMA DIGITAL DE CONTROLE E MONITORAMENTO DE MACAS HOSPITALARES AUTOMATIZADAS

### Criar um robô que simula o funcionamento da maca automatizada. Ele deve identificar sua posição atual, identificar para onde deve ir e conseguir chegar ao destino, sendo capaz de reagir a obstáculos. Utilizando uma interface amigável para controle e monitoramento da posição atual da maca.

## Robô
* Sensor de reflexão;
* Sensor de distância;
* Controlador;
* Wifi;
* Ponte H;
* Motores;
* RFID.

## Algoritmo
* Partindo da posição inicial {0,0} e horizontal, depois de localizar a primeira faixa
* O primeiro destino sempre é o corredor
* A cada vez que ele vira 90º, alterna o sentido
* A cada x graus do encoder, incrementa ou diminui o eixo
* Toma decisões em função do eixo atual e comparando com o eixo do destino

### DIREÇÃO
* 0 - frente
* 1 - tras
* 2 - direita
* 3 - esquerda

### SENTIDO
*  1 - horizontal
* -1 - vertical
