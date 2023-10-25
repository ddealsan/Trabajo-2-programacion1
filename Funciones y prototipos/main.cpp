#include <iostream>
#include <stdarg.h>
using namespace std;
#include "operaciones.h"

//Procedimiento que devuelve un valor:
int suma(int a, int b) {
    return a + b;
}
//procedimiento que no devuelve un valor
void saludos() {
    cout << "Hola ¿Como estas?" << endl;
}
//declaracion de una funcion con elementos variables:
void lista(int num, ...) {
    va_list args;
    va_start(args, num);
    for (int i = 0; i < num; ++i) {
        int valor = va_arg(args, int);
        std::cout << valor << " ";
    }
va_end(args);
}
// paso 7 función con variable con un valor predeterminado
void saludopre(int n = 1, const char* mensaje = "\nHola otra vez") {
    for (int i = 0; i < n; ++i) {
        cout << mensaje << endl;
    }
}
//paso 8 suma de una funcion inline
inline int sumainline(int a, int b) {
    return a + b;
}
//paso 10 usar un factorial
long factorial(long n)
{
    if(n==1)
        return 1;  // !1=1
    else
        return n*factorial(n-1);
}
int main() {
    cout << "La suma es: " << suma(34, 45) << endl;
    cout << "La multiplicacion es: " << multiplicacion(10, 20) << endl;
    //paso 4 como se crea y destruye una variable local
    int a;
    a = 5;
    cout << a << endl;
    //paso 5 aqui hago el polimorfismo con la funcion multiplicacion
    // Aqui tambien hago el paso 9 ya que es una funcion que llamo desde un archivo externo
    cout << "La multiplicacion es: " << multiplicacion(3, 5, 12) << endl;
    //paso 6 declaracion de una funcion con elementos variables:
    lista(4, 4, 9, 1, 6);
    //paso 7 mensaje con valor predeterminado
    saludopre();
    //paso 8 suma de función inline
    int x = 6;
    int z = 21;
    cout << "Si sumas " << x << " y " << z << " da: " << sumainline(x, z) << endl;
    //paso 10 aqui usaré un factorial
    cout << "el factorial es: " << factorial(12) << endl;

    return 0;
}
