#include <iostream>
using namespace std;


int Sumar(int b, int c) {
    return b+c;
}

int main() {
    // parte 1
    int a =10;
    char letter = 'A';

    int *intPtr= &a;
    char *charPtr = &letter;

    cout<<"valo del numero:"<< a <<endl;
    cout<<"valor de la letra:"<<letter<<endl;

    cout<<"direccion del numero:"<< intPtr<<endl;
    cout<<"direccion de la letra:"<< charPtr<<endl;

    cout << "valor a traves del puntero del numero: " <<intPtr<<endl;
    cout << "valor a traves del puntero de la letra\n: " <<charPtr<<endl;

// parte 2
    const int arraysize=5;
    int myArray[arraysize] = {1, 2, 3, 4, 5};
    int *ptr = myArray;
    for (int i = 0; i <arraysize; i++) {
        cout  << "Elemento " << i << ": " << *ptr << endl;
        *ptr=*ptr * 2;
        *ptr++;
    }
    cout<<"\nArray modificado: " <<endl;
    for (int i = 0; i < arraysize; i++) {
    cout<< "elemento " << i << ":" << myArray[i]<<endl;
    }

//parte 3
    int *ptr2 = new int;
    *ptr2 = 42;
    std::cout << "\nValor asignado dinámicamente: " << *ptr2<<"\n" << std::endl;
    delete ptr2;

// parte 4

    int myArray2[] = {1, 2, 3, 4, 5};
    int *ptr3 = myArray;
    for (int i = 0; i < 5; i++) {
        std::cout << "Elemento " << i << ": " << *ptr3 << std::endl;
        ptr++;
    }

    //parte 5

    int x = 5;
    int *ptr4 = &x;
    int **ptr5 = &ptr4;
    std::cout << "Valor de x a través de ptr5: " << **ptr5 << std::endl;

    //parte 6

    int (*funcPtr)(int, int) = &Sumar;
    int resultado = funcPtr(3, 5);
    std::cout << "Resultado de la función Sumar: " << resultado << std::endl;


    return 0;
    }




