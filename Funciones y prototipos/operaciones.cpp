#include "operaciones.h"
int resta(int a, int b) {
    return a - b;
}
int multiplicacion(int a,int b) {
    return a * b;
}

int division(int a, int b){
    return a / b;
}
// aqui hago el paso 5 polimorfismo con la operacion multiplicacion
// aqui tambíen hago el paso 9
int multiplicacion(int a,int b,int c) {
    return a * b * c;
}