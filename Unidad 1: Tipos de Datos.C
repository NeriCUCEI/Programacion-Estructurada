#include <stdio.h>

/*
  Gabriel Antonio Neri Reyes
  222559699
  Programación Estructurada
  Tipos de Datos: Código C
*/

int main() {
    int Entero = 67;
    float Q = 3.75;
    double pi = 3.14159265;
    char G = 'G';
    printf("int Entero: %d, %p\n", Entero, &Entero);
    printf("float Q: %f, %p\n", Q, &Q);
    printf("double pi: %lf, %p\n", pi, &pi);
    printf("char G: %c, %p\n", G, &G);
    return 0;
}
