/*
Autor: Miguel Duss�n

Programa que imprime una secuencia ascendente de caracteres utilizando ciclos
*/

#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
	
	for(int i=0;i<5;i++){
	
		// El valor de i funciona como parte de la condici�n del ciclo
		
		for(int j=0;j<i;j++){
			
			cout << "#";
			
		}
		// Nueva l�nea
		cout << endl;
	}
	system("PAUSE");
	return 0;
}
