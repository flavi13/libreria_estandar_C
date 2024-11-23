//
// Created by Flavia Rivero on 23/11/24.
//

#include "main.h"
#include <stdio.h>

void manejarArchivos() {
    // Intentar abrir el archivo en modo lectura
    FILE *file1 = fopen("file.txt", "r");
    if (file1 == NULL) {
        printf("El archivo no se pudo abrir.\n"); // Si el archivo no se puede abrir, mostrar un mensaje de error
    } else {
        // Leer el contenido del archivo
        char line[256];
        while (fgets(line, sizeof(line), file1) != NULL) {
            printf("%s", line);
        }
        fclose(file1); // Cerrar el archivo después de leer
    }

    // Apartado b
    FILE *file2 = fopen("file.txt", "w");
    if (file2 == NULL) {
        printf("El archivo no se pudo abrir para escritura.\n");
        return;
    }

    fprintf(file2, "Hola, mundo!\n");

    // Cerrar el archivo después de escribir
    fclose(file2);

    // Abrir de nuevo para leer
    file2 = fopen("file.txt", "r");
    if (file2 == NULL) {
        printf("El archivo no se pudo abrir para lectura.\n");
        return;
    }

    char buffer[50];
    if (fgets(buffer, sizeof(buffer), file2) != NULL) {
        printf("Leído del archivo: %s", buffer);
    }

    // Cerrar el archivo después de leer
    fclose(file2);
}
