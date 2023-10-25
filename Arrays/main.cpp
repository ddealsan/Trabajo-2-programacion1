#include <iostream>
using namespace std;
int main() {

    int numeros[10];
    for (int i=0; i<10 ; i++) {
        numeros[i] = i + 1;
    }
    cout<<"los primeros numeros naturales son: "<<endl;

    for(int numero:numeros){
       cout<<numero<<" "<<endl;
    }
    return 0;
    }



