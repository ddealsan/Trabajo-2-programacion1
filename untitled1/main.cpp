#include <iostream>
#include <string>

int main() {
    //Declara dos variables: una string para el nombre y una integer para la edad.

    std::string nombre;
    int edad;
    //  Solicita al usuario su nombre
    std::cout << "Por favor ingresa tu nombre: ";
    std::cin >> nombre;
    //  Solicita al usuario su edad
    std::cout << "Por favor ingresa tu edad: ";
    std::cin >> edad;
    std::cout <<"Hola,"<<nombre<<"!Tienes"<<edad<< "años\n";
    return 0;

}