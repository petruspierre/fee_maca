#ifndef SAMUQUINHA_H
#define SAMUQUINHA_H

#include <Arduino.h>

class Samuquinha{
	// Colocar m�todos que v�o ser exportados
	public:
		Samuquinha(int motores[2][3]);
		int goTo(int x, int y);
		int goBack();
		//void frente();
	
	// Vari�veis e m�todos internos
	private:
		int motors[2][3];
		void obstacle();
};

#endif