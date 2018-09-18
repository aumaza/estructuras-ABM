#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "Alumno.h"

#define A 3

sAlumno pedirAlumno()
{
    sAlumno alumnito;


    printf("Ingrese legajo: ");
    scanf("%d", &alumnito.legajo);
    printf("Ingrese Nombre: ");
    fflush(stdin);
    gets(alumnito.nombre);
    printf("Ingrese promedio: ");
    scanf("%f", &alumnito.promedio);
    printf("Ingrese edad: ");
    scanf("%d", &alumnito.edad);

    return alumnito;

}


void mostrarUnAlumno(sAlumno miAlumno)
{
    printf("%d--%s--%f--%d\n", miAlumno.legajo, miAlumno.nombre,
           miAlumno.promedio, miAlumno.edad);

}

int menuGeneral()
{
system("cls");
//system("clear");

int opc;

do{
system("cls");
//system("clear");
sAlumno listadoMain[A];

int ok;
int ch;

printf("\n======================================");
printf("\nSeleccione la Operacion a Realizar");
printf("\n======================================\n");
printf("\n1. Altas");
printf("\n2. Modificar");
printf("\n3. Baja");
printf("\n4. Informes");
printf("\n5. Salir");
printf("\n\n======================================\n");

do
    {
      printf("\nOpcion: ");
      fflush(stdout);
      if ((ok = scanf("%d", &opc)) == EOF)
         return 1;


      if ((ch = getchar()) != '\n')
      {
         ok = 0;

         while ((ch = getchar()) != EOF && ch != '\n');
      }
   }while(!ok);
printf("\n======================================\n");

switch(opc)
{

case 1:  cargarListadoDeAlumnos(listadoMain, A); break;
case 2:  break;
case 3:  break;
case 4:  mostrarListadoDeAlumnos(listadoMain, A); break;

}
}while(opc != 5);

return 0;

}

void cargarListadoDeAlumnos(sAlumno listado[], int tam)
{
    int i;
     for(i=0; i<tam; i++)
    {
       listado[i]=pedirAlumno();

    }
}
void mostrarListadoDeAlumnos(sAlumno listado[], int tam)
{
    int i;

     for(i=0; i<tam; i++)
    {
        mostrarUnAlumno(listado[i]);
    }
    system("pause");
}

void ordenarListadoDeAlumnosPorNombre(sAlumno listado[], int tam)
{
    sAlumno auxAlumno;
    int i;
    int j;
    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(listado[i].nombre,listado[j].nombre)>0)
            {
                auxAlumno = listado[i];
                listado[i] = listado[j];
                listado[j] = auxAlumno;

            }
        }
    }
    printf("\n===================================\n");
    printf("\nLegajo: %d", auxAlumno.legajo);
    printf("\nNombre: %s", auxAlumno.nombre);
    printf("\nPromedio: %.2f", auxAlumno.promedio);
    printf("\nEdad: %d", auxAlumno.edad);
    printf("\n===================================\n");

system("pause");

}


sOpcion RetornaOpcion(sOpcion listadoOpciones[], int cantidad)
{

    //int i;
    int opcion;

    MostrarListadoOpciones(listadoOpciones,cantidad);

    /*for(i=0; i<cantidad; i++)
    {
        printf("\n\t%d :  %s", listadoOpciones[i].numero, listadoOpciones[i].texto);
    }*/

    printf("\n\t Ingrese opcion: ");
    scanf("%d", &opcion);
    sOpcion opcionStruct={opcion,listadoOpciones[opcion-1].texto};

    return opcionStruct;
}

sOpcion AltaOpcion()
{

sOpcion RetornaOpcion;

printf("\nIngrese numero: ");
scanf("%d", &RetornaOpcion.numero);

printf("\nIngrese texto: ");
fflush(stdin);
fgets(RetornaOpcion.texto, 20, stdin);

RetornaOpcion.isEmpty=1;

return RetornaOpcion;

}

void MostrarOpcion(sOpcion opcionParametro)
{
    printf("\n\t%d :  %s", opcionParametro.numero, opcionParametro.texto);

}

void MostrarListadoOpciones(sOpcion listado[], int cantidad)
{
    int i;

    for(i=0; i<cantidad; i++)
    {
        if(listado[i].isEmpty==1)
        {
         MostrarOpcion(listado[i]);
        }
    }
}

void MostrarMenu(sMenu unMenu)
{

    printf("\n\t\t  %s", unMenu.titulo);
    MostrarListadoOpciones(unMenu.listadoDeOpciones, 4);
}

sMenu initMenu(sMenu unMenu)
{
    int i;

    for(i=0; i<4; i++)
    {
        unMenu.listadoDeOpciones[i].isEmpty=0;
    }

    return unMenu;
}

sMenu cargaMenu(sMenu unMenu)
{
    int i;

    printf("\nIngrese Titulo: ");
    fflush(stdin);
    fgets(unMenu.titulo, 20, stdin);

    for(i=0; i<4; i++)
    {
        unMenu.listadoDeOpciones[i]=AltaOpcion();
    }

    return unMenu;
}


sMenu eliminaOpcion(sMenu unMenu)
{
    int i;
    int num;

    printf("\nQue numero de opcion desea Eliminar: ");
    scanf("%d", num);

    for(i=0; i<4; i++)
    {
        if(unMenu.listadoDeOpciones[i].numero==num)
        {
            unMenu.listadoDeOpciones[i].isEmpty=0;
        }
    }

    return unMenu;
}
