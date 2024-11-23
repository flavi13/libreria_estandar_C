//
// Created by Flavia Rivero on 23/11/24.
//
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include "ejercicio_2.h"
#include<string.h>

//apartado b
void calcularLongitudCadenas() {
    char str1[] = "Hola";
    char str2[] = "Mundo";


    int length1 = strlen(str1);
    int length2 = strlen(str2);
    int comparison = strcmp(str1, str2);

    printf("La longitud de '%s' es: %d\n", str1, length1);
    printf("La longitud de '%s' es: %d\n", str2, length2);

    if (comparison == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }


//apartado b
    char str3[] = "Hola Mundo";
    int length3 = strlen(str3);
    printf("La longitud de '%s' es: %d\n", str3, length3);


}


