# Establecer la versión mínima de CMake requerida
cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(libreria_estandar_C)

# Establecer el estándar de C
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

# Incluir directorio de encabezados
include_directories()

# Añadir el ejecutable
add_executable(libreria_estandar_C
        main.c
        main.h
        ejercicio2/ejercicio_2.h
        ejercicio2/ejercicio_2.c
        ejercicio1/ejercicio_1.h
        ejercicio1/ejercicio_1.c
        ejercicio3/ejercicio_3.h
        ejercicio3/ejercicio_3.c
)
