// Autor: Miguel Dussán

/*
Programa que muestra un mensaje de manera indefinida.

Demostración de un ciclo infinito.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

	while(1 == 1){ //Abre ciclo mientras, con una condución que siempre será verdadera

		cout << "punchis ";
	} // Cierra ciclo mientras

	system("pause");
	
	return 0;
}
