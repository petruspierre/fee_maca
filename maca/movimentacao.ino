void frente(){
  digitalWrite(IN[0], HIGH);
  digitalWrite(IN[1], LOW);
  digitalWrite(IN[2], HIGH);
  digitalWrite(IN[3], LOW);
}

void tras(){
  digitalWrite(IN[0], LOW);
  digitalWrite(IN[1], HIGH);
  digitalWrite(IN[2], LOW);
  digitalWrite(IN[3], HIGH);
}

void vira(){

  digitalWrite(IN[0], HIGH);
  digitalWrite(IN[1], LOW);
  digitalWrite(IN[2], LOW);
  digitalWrite(IN[3], HIGH);

  while(encoder.read() <= pulsosNoventa){}
  
  encoder.write(0);
  
}
