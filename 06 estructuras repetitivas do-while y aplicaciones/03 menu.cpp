#include <iostream>

using namespace std;

int main(){
	bool terminar=false;
	int opcion;
	do{
		cout << "Qué fruta desea? 1. Pera 2. Manzana 3. Uva 4. Salir" << endl;
		cin >> opcion;
		switch(opcion){
			case 1:
				cout << "Escogio Pera" << endl;
				break;
			case 2:
				cout << "Escogio Manzana"<<endl;
				break;
			case 3:
				cout << "Escogio Uva"<<endl;
				break;
			case 4:
				cout<< "Adios" << endl;
				terminar = true;
				break;
			default:
				cout << "Opcion incorrecta"<<endl;
		
		}
	}while(!terminar);
}
