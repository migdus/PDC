// Autor: Miguel Duss�n

/*
Programa que muestra un mensaje de manera indefinida.

Demostraci�n de un ciclo infinito.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

	while(1 == 1){ //Abre ciclo mientras, con una conduci�n que siempre ser� verdadera

		cout << "punchis ";
	} // Cierra ciclo mientras

	system("pause");
	
	return 0;
}
