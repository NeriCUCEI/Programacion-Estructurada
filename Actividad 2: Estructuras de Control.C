#include <stdio.h>
#include <stdlib.h>

/*
  Gabriel Antonio Neri Reyes
  222559699
  Programación Estructurada:
  Estructuras de Control
*/

// Participación 13 de Febrero:
int esPrimo(int Num) {
    if (Num < 2) {return 0;}
    for (int n = 2; n < Num; n++) {
        if (Num%n == 0) {return 0;}
    }
    return 1;
}

void Mostrar_Menu(){
    printf("Evaluar Edad [1]\n");
    printf("Aplicable para Beca [2]\n");
    printf("Validar Beca [3]\n");
    printf("Evaluar Numero [4]\n");
    printf("Salir [5+]\n");
    printf("\nIngrese el numero del programa a ejecutar: ");
}

int Ingresar_Edad() {
    int edad;
    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    return edad;
}

int Ingresar_Promedio_y_Materias_Reprobadas() {
    int Promedio; int Materias_Reprobadas;
    printf("Promedio: ");
    scanf("%d", &Promedio);
    printf("Numero de materias deprobadas: ");
    scanf("%d", &Materias_Reprobadas);
    Promedio = abs(Promedio); Materias_Reprobadas = abs(Materias_Reprobadas);
    if (Promedio > 100) {Promedio = 100;}
    return Promedio, Materias_Reprobadas;
}
void Evaluar_Edad(){
    int edad = Ingresar_Edad();
    if (edad < 0) {printf("No existes\n");}
    else if (edad >= 18) {printf("Eres mayor de edad\n");}
    else {printf("Eres menor de edad\n");}
    printf("\n");
}

void Aplicable_Beca() {
    int Promedio; int Materias_Reprobadas;
    Promedio, Materias_Reprobadas = Ingresar_Promedio_y_Materias_Reprobadas();
    if (Promedio >= 85 && !(Materias_Reprobadas)) {printf("Eres aplicable para la beca\n");}
    else {printf("No eres aplicable para la beca\n");}
    printf("\n");
}

void Validar_Beca() {
    int Promedio; int Materias_Reprobadas; int Obtenible = 1;
    int Edad = Ingresar_Edad(); Promedio, Materias_Reprobadas = Ingresar_Promedio_y_Materias_Reprobadas();
    if (Edad < 18) {printf("Tienes que ser mayor de edad para aplicar\n"); Obtenible = 0;}
    if (Promedio < 90) {printf("Necesitas promedio de 90 o mas\n"); Obtenible = 0;}
    if (Materias_Reprobadas) {
        printf("Tienes materias reprobadas\n"); Obtenible = 0;
        if (Materias_Reprobadas <= 2) {printf("Puedes reinscribirte\n");}
        else if (Materias_Reprobadas > 3) {printf("Estas en situacion critica\n");}
    }
    if (Obtenible) {printf("Puedes obtener beca\n\n");} else {printf("No puedes obtener beca\n\n");}
}

void Evaluar_Numero() {
    int Num;
    printf("Ingrese un numero: ");
    scanf("%d", &Num);
    if (Num%2 == 0) {printf("Es Par\n");} else {printf("Es Impar\n");}
    if (esPrimo(Num)) {printf("Es Primo\n");}
    printf("\n");
}

int main_Participacion_13_de_Febrero() {
    int index_programa; int Run = 1;
    while (Run) {
        Mostrar_Menu();
        scanf("%d", &index_programa); printf("\n");
        switch(index_programa) {
        case 1:
            Evaluar_Edad(); break;
        case 2:
            Aplicable_Beca(); break;
        case 3:
            Validar_Beca(); break;
        case 4:
            Evaluar_Numero(); break;
        default:
            Run = 0; break;
        }
    }
    return 0;
}

// Participación 6 de Febrero
void Participacion_6_de_Febrero() {
    int a = 3; int b = 4; 
    int c = a++ + --b; 
    printf("%d %d %d\n", a, b , c); // a = 4, b = 3, c = 6  
                       
    int x = 10; int y = 3; 
    printf("%d\n", x + y * 2); // x + y * 2 = 16
    printf("%d\n, (x + y) * 2); (x + y) * 2 = 26
}

// Estructuras de control ciclico
void Menu_Promedio() {
    printf("Sacar Promedio [1]\n");
    printf("Salir [2]\n");
}

float Promedio() {
    int suma_calificaciones = 0; int calificacion; int repeticiones;
    printf("\nCuantas calificaciones vas a ingresar: ");
    scanf("%d", &repeticiones);
    if (repeticiones < 0) {printf("No cantidad negativa de calificaciones\n\n"); return 0.0;}
    for (int r = 1; r <= repeticiones; r++) {
        printf("Calificacion %d: ", r);
        scanf("%d", &calificacion);
        if (calificacion > 100) {printf("El maximo es 100\n\n"); return 0.0;}
        if (calificacion < 0) {printf("No hay calificaciones negativas\n\n"); return 0.0;}
        suma_calificaciones += calificacion;
    }
    float Promedio;
    if (repeticiones == 0) {Promedio = 0.0;}
    else {Promedio = suma_calificaciones/repeticiones;}
    printf("El promedio es %f\n\n", Promedio);
    return Promedio;
}

int main() {
    int opcion;
    do {
        Menu();
        scanf("%d", &opcion);
        if (opcion == 1) {Promedio();}
    } while (opcion != 2);
}
