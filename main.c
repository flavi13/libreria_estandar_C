//
// Created by Flavia Rivero on 19/11/24.
//
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

int main() {

//EJERCICIO 1
    // Declarar varios números, incluyendo positivos, negativos y cero
    int nums[] = { -10, 20, -30, 40, 0 };
    int n = sizeof(nums) / sizeof(nums[0]);

    // Recorrer y obtener el valor absoluto de cada número utilizando abs()
    for (int i = 0; i < n; i++) {
        int abs_num = abs(nums[i]);
        printf("El valor absoluto de %d es %d\n", nums[i], abs_num);
    }

//EJERCICIO 2
    // Cambiar la semilla utilizando la hora actual
    srand(time(0));
    int random_number1 = rand();
    printf("Número aleatorio con semilla basada en el tiempo: %d\n", random_number1);

    // Cambiar la semilla a un número fijo
    srand(42);  // Puedes usar cualquier número aquí
    int random_number2 = rand();
    printf("Número aleatorio con semilla 42: %d\n", random_number2);

    // Cambiar la semilla nuevamente a otro número fijo
    srand(100);  // Puedes usar cualquier número aquí
    int random_number3 = rand();
    printf("Número aleatorio con semilla 100: %d\n", random_number3);

// EJERCICIO 2 - apartado b
    // Declarar varias cadenas
    char str1[] = "Hola mundo";
    char str2[] = "Programación en C";
    char str3[] = "";
    char str4[] = "¡C es un lenguaje poderoso!";

    // Obtener la longitud de cada cadena utilizando strlen()
    int length1 = strlen(str1);
    int length2 = strlen(str2);
    int length3 = strlen(str3);
    int length4 = strlen(str4);

    // Imprimir los resultados
    printf("La longitud de '%s' es: %d\n", str1, length1);
    printf("La longitud de '%s' es: %d\n", str2, length2);
    printf("La longitud de '%s' es: %d\n", str3, length3);
    printf("La longitud de '%s' es: %d\n", str4, length4);

// EJERCICIO 3 - apartado a
    // Intentar abrir el archivo en modo lectura
    FILE *file1 = fopen("file.txt", "r");
    if (file1 == NULL) {
        // Si el archivo no se puede abrir, mostrar un mensaje de error
        printf("El archivo no se pudo abrir.\n");
        return 1;  // Salir del programa con un código de error
    }

    // Si el archivo se abre correctamente, leer el contenido (opcional)
    char line[256];
    while (fgets(line, sizeof(line), file1) != NULL) {
        printf("%s", line);  // Imprimir cada línea del archivo
    }

    // Cerrar el archivo al final
    fclose(file1);

// EJERCICIO 3 - apartado b
    // Abrir el archivo en modo escritura
    FILE *file2 = fopen("file.txt", "w");
    if (file2 == NULL) {
        printf("El archivo no se pudo abrir para escritura.\n");
        return 1;
    }

    // Escribir en el archivo
    fprintf(file2, "Hola, mundo!\n");

    // Cerrar el archivo después de escribir
    fclose(file2);

    // Abrir de nuevo el archivo en modo lectura
    file2 = fopen("file.txt", "r");
    if (file2 == NULL) {
        printf("El archivo no se pudo abrir para lectura.\n");
        return 1;
    }

    // Leer el contenido del archivo
    char buffer[50];
    if (fgets(buffer, sizeof(buffer), file2) != NULL) {
        printf("Leído del archivo: %s", buffer);
    }

    // Cerrar el archivo después de leer
    fclose(file2);

    return 0;
}

