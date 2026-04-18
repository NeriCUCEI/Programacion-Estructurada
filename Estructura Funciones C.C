#include <stdio.h>

int Suma_Enteros(int num_1, int num_2) {
    return num_1 + num_2;
}

void cambiar(int x) {
    x = 100;
    printf("Cambio la x\n");
}

void Duplicar(int *z) {
    *z = (*z) * 2;
}

void Mostrar(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("{%d} ", v[i]);
    }
    printf("\n");
}

void Mostrar_Matriz(int M[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("[%d]", M[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int x = 0; int A[] = {2, 5, 3, 1, 8, 19}; int M[3][3] = {{1, 2, 3}, {4, 5, 6}, {7,8,9}}; int z = 2;
    printf("%d\n", Suma_Enteros(2,3));
    cambiar(x);
    printf("x = %d\n", x);
    printf("%d\n", sizeof(A)/4);
    Mostrar(A, sizeof(A)/4);
    Mostrar_Matriz(M);
    Duplicar(z);
    printf("%d\n", z);
    return 0;
}

