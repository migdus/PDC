/*
Autor: Miguel Dussán

Programa que imprime la multiplicación de los números desde 1*1
hasta 5*5 usando ciclos anidados
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			cout << i<<" * "<<j<<" = " << i*j << endl;
		}
	}
	system("PAUSE");
	return 0;
}
