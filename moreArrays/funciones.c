#include "funciones.h"


void cargarArrayHardcode(int Sillas[],int Edades[],int Cantidad)
{
    int auxA[]= {98,19,81,19,98};
    int auxB[]= {55,11,33,22,44};

    int i;
    for(i=0; i<Cantidad; i++)
    {
        Sillas[i]=auxA[i];
        Edades[i]=auxB[i];
    }
}
void mostarDatos(int Sillas[],int Edades[],int Cantidad)
{
    int i;
    for(i=0; i<Cantidad; i++)
    {
        mostrar_Uno(Sillas,Edades,i);
    }
}

int calcular_maximaEdad(int Sillas[],int Edades[],int Cantidad)
{
    int i;
    int flag=0;
    int maxima_edad;
    int maxima;

    for(i=0; i<Cantidad; i++)
    {

        if(flag==0 || maxima_edad<Edades[i])
        {
            maxima_edad=Edades[i];
            maxima=i;
            flag=1;
        }
    }
    return maxima;
}

void mostrar_maximaEdad(int Sillas[],int Edades[],int Cantidad)
{
    int max=calcular_maximaEdad(Sillas,Edades,Cantidad);
    int i;

    printf("\nMaxima Edad\n");

    for(i=0; i<Cantidad; i++)
    {

        if(Edades[i]==Edades[max])
        {
            mostrar_Uno(Sillas,Edades,i);
        }
    }
}
int calcular_minimaEdad(int Sillas[],int Edades[],int Cantidad)
{
    int i;
    int flag=0;
    int minima_edad;
    int minima;

    for(i=0; i<Cantidad; i++)
    {

        if(flag==0 || minima_edad>Edades[i])
        {
            minima_edad=Edades[i];
            minima=i;
            flag=1;
        }
    }
    return minima;
}

void mostrar_minimaEdad(int Sillas[],int Edades[],int Cantidad)
{

    int minima=calcular_minimaEdad(Sillas,Edades,Cantidad);
    int i;

    printf("\nMinima Edad\n");

    for(i=0; i<Cantidad; i++)
    {

        if(Edades[i]==Edades[minima])
        {
            mostrar_Uno(Sillas,Edades,i);
        }
    }
}
void mostrar_Uno(int Sillas[],int Edades[],int indice)
{

    printf("legajo[%d],Silla[%d],Edad[%d]\n",indice,Sillas[indice],Edades[indice]);

}


