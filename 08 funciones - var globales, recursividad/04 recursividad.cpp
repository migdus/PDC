#include <iostream>
#include <cstdlib>
using namespace std;
int factorial(int);
int main(){
    cout << factorial(10);
    return 0;
    system("PAUSE");
}
int factorial(int x){
    if(x == 1)
        return 1;
    else
        return x * factorial(x-1);
}
