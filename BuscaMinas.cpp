#include "BuscaMinas.h"
#include <iostream>
using namespace std;
BuscaMinas::BuscaMinas() {
}

BuscaMinas::~BuscaMinas() {
}

bool BuscaMinas::jugar() {
	int opcion=0;

	cout<<"====Busca Minas===="<<endl;
	cout<<"=1) Facil         ="<<endl;
	cout<<"=2) Normal        ="<<endl;
	cout<<"=3) Dificil       ="<<endl;
	cout<<"=4) Salida        ="<<endl;
	cout<<"==================="<<endl;
	cout<<"Ingrese la dificultad que desea:"<<endl;
	cout<<"R: ";
	cin>>opcion;
	Tablero* tablero = new Tablero(opcion);




}



