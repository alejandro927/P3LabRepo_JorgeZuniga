#include <iostream>
#include "Buscaminas.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int menu() {
	int opcion=0;
	cout<<"====Busca Minas===="<<endl;
	cout<<"=1) Jugar         ="<<endl;
	cout<<"=2) Salida        ="<<endl;
	cout<<"==================="<<endl;
	cout<<"Ingrese la opcion que desea:"<<endl;
	cout<<"R: ";
	cin>>opcion;
	return opcion;
}


int main(int argc, char** argv) {
	BuscaMinas* buscaminas = new BuscaMinas();

	int opcion=0;
	while(opcion != 4) {
		opcion = menu();
		switch(opcion) {
			case 1: {
				bool ganaste;
				ganaste = buscaminas->jugar();

				if(ganaste) {
					cout<<"Felicidades Ganaste!!";
				} else {
					cout<<"Perdiste ni modo :v";

				}
			}
			break;
			case 2: {
				cout<<"\nGracias por Jugar!!!\nBuen Dia";
			}
			break;
		}
	}




	delete buscaminas;
	return 0;
}