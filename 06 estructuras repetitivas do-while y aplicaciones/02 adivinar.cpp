#include <iostream>

using namespace std;

int main(){
    bool numOK=false;
    int n;

    do{
        cout << "Numero? ";
        cin >> n;
        if(n == 4)
            numOK = true;
	else
		cout << "Numero incorrecto. Intenta de nuevo ;)"<<endl;
    }while(!numOK);

    cout << "Numero correcto. Fin";
}
