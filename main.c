/* ========================================================================== */
/* Proyecto: U3 AI2: Ejercicio: Estructuras                                   */
/* -------------------------------------------------------------------------- */
/* Autor: Michel. Reyes                                                       */
/* ========================================================================== */
//Vamos a crear una estructura pára libros e imprimirla en pantalla
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Libro {
    char titulo[50];
    char autor[50];
    int paginas;
    float precio;
}libro;


int main() {

    libro libro1,libro2,libro3[10];
    strcpy(libro1.titulo, "El principito");
    libro1.paginas = 100;
    libro1.precio = 100.50;

    strcpy(libro2.titulo, "El principito dos");
    libro2.paginas = 200;
    libro2.precio = 200.50;

    printf("El titulo del libro 1 es: %s\n", libro1.titulo);
    printf("El %s tiene %d paginas y cuesta %f\n", libro1.titulo, libro1.paginas, libro1.precio);
    printf("El titulo del libro 2 es: %s\n", libro2.titulo);
    printf("El %s tiene %d paginas y cuesta %f\n", libro2.titulo, libro2.paginas, libro2.precio);
    system("pause");
    int i;
    printf("A continuacion los precios de los libros de oferta\n");
    system("pause");
    for (i = 0; i < 10; i++) {
        libro3[i].precio = 1 + i;
        printf("El precio del libro %i es: %f\n", i + 1, libro3[i].precio);
    }

    system("pause");

    return 0;
}
