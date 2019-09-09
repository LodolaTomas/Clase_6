#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define T 5

int main()
{
    int array_edades[T];
    int array_sillas[T];

    cargarArrayHardcode(array_edades,array_sillas,T);
    mostarDatos(array_sillas,array_edades,T);

    return 0;
}
