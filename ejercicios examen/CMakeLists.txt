cmake_minimum_required(VERSION 3.26)
project(examentema1)

set(CMAKE_CXX_STANDARD 14)

add_executable(examentema1
        parte2examen.cpp
        README.md
        manejodeexcepciones.cpp
        ../registrodematerias.cpp)
add_executable(gestiondeestudiantes gestiondeestudiantes.cpp)
add_executable(gestiondememoria gestiondememoria.cpp)
