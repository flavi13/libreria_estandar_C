//
// Created by Flavia Rivero on 23/11/24.
//

#include "../main.h"
#include <stdio.h>

void manejarArchivos() {
    // Intentar abrir el archivo en modo lectura (para verificar si existe)
    FILE *file1 = fopen("fie.txt", "r");
    if (file1 == NULL) {
        printf("El archivo no se pudo abrir.\n");
    } else {
        // Leer el contenido del archivo existente
        char line[256];
        while (fgets(line, sizeof(line), file1) != NULL) {
            printf("%s", line);
        }
        fclose(file1); // Cerrar el archivo después de leer
    }

    // Abrir el archivo en modo escritura
    FILE *file2 = fopen("file.txt", "w");
    if (file2 == NULL) {
        printf("El archivo no se pudo abrir para escritura.\n");
        return;
    }

    fprintf(file2, "Hola, mundo!\n");

    // Cerrar el archivo después de escribir
    fclose(file2);

    // Abrir de nuevo el archivo en modo lectura
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
