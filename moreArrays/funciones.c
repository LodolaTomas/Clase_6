#include "funciones.h"


void cargarArrayHardcode(int Sillas[],int Edades[],int Cantidad)
{
    int auxA[]={55,11,33,22,44};
    int auxB[]={18,19,81,91,98};
    int i;
    for(i=0;i<Cantidad;i++)
    {
        Sillas[i]=auxA[i];
        Edades[i]=auxB[i];
    }

}
void mostarDatos(int Sillas[],int Edades[],int Cantidad)
{
    int i;
    for(i=0;i<Cantidad;i++)
    {

        printf("Legajo[%d]= Silla %d, Edad %d\n",i,Sillas[i],Edades[i]);

    }



}
