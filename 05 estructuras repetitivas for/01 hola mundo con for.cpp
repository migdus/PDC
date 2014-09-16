/*
Autor: Miguel Dussán

Programa que imprime seis veces la cadena "hola", una por línea, usando
ciclos anidados.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	for(int i=1;i<=2;i++){
		for(int j=0;j<3;j++){
			cout<<"hola\n";
		}
	}
	system("PAUSE");
	return 0;
}
