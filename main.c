#include <stdio.h>

int main() {
    int estudiantes;
    int i, j;

    printf("SISTEMA DE GESTION DE CALIFICACIONES\n");
    printf("------------------------------------\n");

    printf("Ingrese el numero de estudiantes: ");
    scanf("%d", &estudiantes);

    while (estudiantes <= 0) {
        printf("Error. Ingrese un numero de estudiantes mayor a 0: ");
        scanf("%d", &estudiantes);
    }

    float notas[estudiantes][3];

    for (i = 0; i < estudiantes; i++) {
        printf("\nEstudiante %d\n", i + 1);

        for (j = 0; j < 3; j++) {
            do {
                printf("Ingrese la nota de la asignatura %d: ", j + 1);
                scanf("%f", &notas[i][j]);

                if (notas[i][j] < 0 || notas[i][j] > 10) {
                    printf("Error: la nota debe estar entre 0 y 10.\n");
                }

            } while (notas[i][j] < 0 || notas[i][j] > 10);
        }
    }

    return 0;
}