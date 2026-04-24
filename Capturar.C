#include <stdio.h>

void Capturar(int M[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }
}

void Mostrar(int M[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("[%d]", M[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int Suma_Diagonal_Principal(int M[3][3]) {
    return (M[0][0] + M[1][1] + M[2][2]);
}

int main() {
    int M[3][3];
    Capturar(M);
    Mostrar(M);
    printf("Suma de la diagonal principal: %d\n", Suma_Diagonal_Principal(M));
    return 0;
}

