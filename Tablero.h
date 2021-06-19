#ifndef TABLERO_H
#define TABLERO_H
#include <iostream>
using namespace std;
#include "CasillaBuscaMinas.h"
#include <time.h>
#include <stdlib.h>


class Tablero
{
	public:
		Tablero(int);
		~Tablero();
		bool destaparCasilla(int,int);
		
		int calcularBombas(int,int);
		void marcarCasillas(int,int);
		void imprimirMatriz();
		
	private:
		CasillaBuscaMinas*** tablero;
};

#endif