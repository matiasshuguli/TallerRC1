#include <stdio.h>

int main() {
    int estudiantes;
    int i, j;
    float suma, promedio;
    float mayor, menor;

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

    printf("\n\nRESULTADOS POR ESTUDIANTE\n");
    printf("-------------------------\n");

    for (i = 0; i < estudiantes; i++) {
        suma = 0;
        mayor = notas[i][0];
        menor = notas[i][0];

        for (j = 0; j < 3; j++) {
            suma = suma + notas[i][j];

            if (notas[i][j] > mayor) {
                mayor = notas[i][j];
            }

            if (notas[i][j] < menor) {
                menor = notas[i][j];
            }
        }

        promedio = suma / 3;

        printf("\nEstudiante %d\n", i + 1);
        printf("Promedio: %.2f\n", promedio);
        printf("Nota mas alta: %.2f\n", mayor);
        printf("Nota mas baja: %.2f\n", menor);
    }

    printf("\n\nRESULTADOS POR ASIGNATURA\n");
    printf("-------------------------\n");

    for (j = 0; j < 3; j++) {
        suma = 0;
        mayor = notas[0][j];
        menor = notas[0][j];

        for (i = 0; i < estudiantes; i++) {
            suma = suma + notas[i][j];

            if (notas[i][j] > mayor) {
                mayor = notas[i][j];
            }

            if (notas[i][j] < menor) {
                menor = notas[i][j];
            }
        }

        promedio = suma / estudiantes;

        printf("\nAsignatura %d\n", j + 1);
        printf("Promedio: %.2f\n", promedio);
        printf("Nota mas alta: %.2f\n", mayor);
        printf("Nota mas baja: %.2f\n", menor);
    }

    return 0;
}