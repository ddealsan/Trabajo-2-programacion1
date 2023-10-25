#include <iostream>
using namespace std;
main() {
    int edad;
    std::cout<< "por favor ingresa tu edad\n";
    std::cin >> edad;
    if (edad >=18){
        std::cout <<"Eres mayor de edad.\n";
    } else {
        std::cout<<"Eres menor de edad.\n";
    }

    int a = 10;
    int b = 20;

    int suma = a + b;
    int resta = a - b;
    bool igual = (a == b);
    bool menorQue = (a < b);
    bool orLogico = (a > 15) || (b < 25);
    cout << "Operadores aritméticos:" << endl;
    cout << "Suma: " << suma << endl;
    cout << "Resta: " << resta << endl;
    cout << "Operadores de comparación:" << endl;
    cout << "Igual: " << igual << endl;
    cout << "Menor Que: " << menorQue << endl;
    cout << "Operadores lógicos:" << endl;
    cout << "OR Lógico: " << orLogico << endl;

    return 0;
}
