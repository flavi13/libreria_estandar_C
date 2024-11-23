//
// Created by Flavia Rivero on 19/11/24.
//

// Created by Flavia Rivero on 19/11/24.
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main() {
    // EJERCICIO 1
    int nums[] = { -10 };
    int n = sizeof(nums) / sizeof(nums[0]);
    calcularValorAbsoluto(nums, n);

    // EJERCICIO 2
    generarNumerosAleatorios();

    // EJERCICIO 2 - apartado b
    calcularLongitudCadenas();

    // EJERCICIO 3 y apartado b
    manejarArchivos();

    return 0;
}
