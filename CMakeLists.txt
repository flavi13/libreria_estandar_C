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
)
