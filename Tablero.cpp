#include "Tablero.h"

Tablero::Tablero(int dificultad) {
	srand(time(NULL));
	int valor=0;
	switch(dificultad) {
		case 1: {
			/*CasillaBuscaMinas* casilla = new CasillaBuscaMinas();
			
			
			for(int i=0; i<8; i++) {
				for(int j=0; j<8 ; j++) {
					valor = rand()%2;
					
					if(valor == 1) {
						this->tablero[i][j] = casilla->esBomba;
					} else if(valor == 2) {
						this->tablero[i][j] = casilla->descubierta;
					}
				}
			}
			delete casilla;*/
			break;
		}
		case 2: {/*
			for(int i=0; i<10; i++) {
				for(int j=0; j<10 ; j++) {
					valor = rand()%2;
					if(valor == 1) {
						this->tablero[i][j] = casilla->esBomba;
					} else if(valor == 2) {
						this->tablero[i][j] = casilla->descubierta;
					}
				}
			}*/
			break;
		}
		case 3: {/*
			for(int i=0; i<12; i++) {
				for(int j=0; j<12 ; j++) {
					valor = rand()%2;
					if(valor == 1) {
						this->tablero[i][j] = casilla->esBomba;
					} else if(valor == 2) {
						this->tablero[i][j] = casilla->descubierta;
					}
				}
			}*/
			break;
		}

	}

}

Tablero::~Tablero() {

}



bool Tablero::destaparCasilla(int x,int y) {


}

int Tablero::calcularBombas(int x,int y) {


}

void Tablero::marcarCasillas(int x,int y) {


}