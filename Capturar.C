#include <stdio.h>
#include <stdlib.h>

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
    int Suma = 0;
    for (int n = 0; n < 3; n++) {
        Suma += M[n][n];
    }
    return Suma;
}

void Guardar_Matriz(int M[3][3], FILE *Archivo) {
    Archivo = fopen("Matriz.txt", "a");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            fprintf(Archivo, "[%d] ", M[i][j]);
        }
        fprintf(Archivo, "\n");
    }
    fprintf(Archivo, "\n");
    fclose(Archivo);
}

int main() {
    int M[3][3]; FILE *Archivo;
    Capturar(M);
    Mostrar(M);
    printf("Suma de la diagonal principal: %d\n", Suma_Diagonal_Principal(M));
    Guardar_Matriz(M, Archivo);
    return 0;
}
