#include <iostream>
#include <string>
using namespace std;
int variableGlobal = 8;

int main() {

    std::string nombre;
    int edad;
    std::cout << "Por favor ingresa tu nombre: ";
    std::cin >> nombre;
    std::cout << "Por favor ingresa tu edad: ";
    std::cin >> edad;
    std::cout <<"Hola,"<<nombre<<"!Tienes"<<edad<< "años\n";
    int variableLocal1 = 5;
    int variableLocal2 = 10;

    if (true) {
        int variableLocalBloque = 30;
        cout << "Variable local en un bloque (if): " << variableLocalBloque << endl;
    }
    cout << "Variables locales en main:" << endl;
    cout << "variableLocal1 = " << variableLocal1 << endl;
    cout << "variableLocal2 = " << variableLocal2 << endl;
    cout << "Variable global: " << variableGlobal << endl;

    int entero = 5;
    double pi = 3.14;
    char caracter = 'A';
    bool booleano = true;
    cout << "Tipos de datos:" << endl;
    cout << "Entero: " << entero << endl;
    cout << "Decimal: " << pi << endl;
    cout << "Caracter: " << caracter << endl;
    cout << "Booleano: " << booleano << endl;

    return 0;

}