#include <iostream>
using namespace std;
#define PI 3.14159e
const int NUMERO_MAXIMO = 100;

void funcionVoid() {
    cout << "Esta función no devuelve un valor." << endl;
}

typedef unsigned long long ULL;
enum Color { ROJO, VERDE, AZUL };
const string DIAS_DE_LA_SEMANA[] = {"Lunes", "Martes", "Miércoles", "Jueves", "Viernes", "Sábado", "Domingo"};
int main() {
    double radio = 5.0;
    double circunferencia = 2 * PI * radio;
    cout << "Circunferencia de un círculo: " << circunferencia << endl;
    cout << "Número máximo permitido: " << NUMERO_MAXIMO << endl;

    funcionVoid();
    ULL numeroGrande = 123456789012345;
    cout << "Número grande: " << numeroGrande << endl;

    Color colorFavorito = AZUL;
    cout << "Mi color favorito es el número: " << colorFavorito << endl;
    cout << "Días de la semana:" << endl;
    for (int i = 0; i < 7; i++) {
        cout << DIAS_DE_LA_SEMANA[i] << endl;
    }

    return 0;
}
