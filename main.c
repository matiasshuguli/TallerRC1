#include <stdio.h>

int main() {
    int estudiantes;

    printf("SISTEMA DE GESTION DE CALIFICACIONES\n");
    printf("------------------------------------\n");

    printf("Ingrese el numero de estudiantes: ");
    scanf("%d", &estudiantes);
      while (estudiantes <= 0) {

         printf("Error. Ingrese un numero de estudiantes mayor a 0: ");

         scanf("%d", &estudiantes);

     }
 
    float notas[estudiantes][3];

    return 0;
}