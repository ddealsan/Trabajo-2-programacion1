#include <iostream>
using namespace std;

int main() {
    for (int i =1; i <= 10; i++){
        std::cout<<"\n"<<i<<"\n";
    }

    int numero;
    cout << "Ingresa un número para la tabla de multiplicar: ";
    cin >> numero;

    cout << "Tabla de multiplicar usando un bucle while:" << endl;
    int i = 1;
    while (i <= 10) {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
        i++;
    }
    cout << "Tabla de multiplicar usando un bucle do-while:" << endl;
    i = 1;

    do {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
        i++;
    } while (i <= 10);
    int valorBuscado = 5;
    cout << "Usando la instrucción de salto 'break':" << endl;
    while (true) {
        int entrada;
        cout << "Ingresa el número (-1 para salir): ";
        cin >> entrada;


        if (entrada == -1) {
            cout << "Saliendo del bucle." << endl;
            break;  // Salir del bucle cuando se ingresa -1
        }
        if (entrada == valorBuscado) {
        cout << "¡Encontraste el número " << valorBuscado << "!" << endl;
        }
    }
    return 0;

}
