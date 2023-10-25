#include <iostream>
#include <stdarg.h>
// cuando se compare asi hay que usar las comillas simples
void may(char& c){
    printf("Primero c=%c\n",c);
    if(c>='a' && c<='z')
        c=c-('a'-'A');
    printf("Segundo c=%c\n", c);
}
int main() {
    char x='a';
    may(x);
    printf("Tercero x=%c\n",x);
    return 0;
}
