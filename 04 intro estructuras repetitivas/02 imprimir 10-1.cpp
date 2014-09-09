// Autor: Miguel Duss�n

/*
Programa que muestra los n�meros desde 10 hasta 1 
utilizando ciclo mientras
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

	//Variable de control de ciclo
	//Tambi�n se utiliza para mostrar el n�mero actual dentro del ciclo

	int i = 10;

	while(i >= 1){ //Abre ciclo mientras

		cout << i << endl;  //imprime el n�mero

		// Decremento de la variable de control
		i--; //equivalente a: numero = numero - 1 
	} // Cierra ciclo mientras

	system("pause");
	
	return 0;
}
