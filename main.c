#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Alumno.h"
#define A 3




int main()
{
    //int i=0;
    sAlumno listadoMain[A];
    int i;
    sMenu miMenu;
    miMenu=initMenu(miMenu);

    for(i=0; i<4; i++)
    {
        printf("\n esta: %d", miMenu.listadoDeOpciones[i].isEmpty);
    }

    //cargaMenu(miMenu);
    //MostrarMenu(miMenu);
    //eliminaOpcion(miMenu);
    //MostrarMenu(miMenu);
    //int opcion;

    //sOpcion opcionSeleccionada;
    //sOpcion listadoOpcionesMain[4];
    //sOpcion listadoOpciones[]={{1, "Alta"}, {2, "Listar"}, {3, "Ordenar"}, {4, "Salir"}};

    /*for(i=0; i<4; i++)
    {
        listadoOpcionesMain[i]=AltaOpcion();

    }*/


    /*RetornaOpcion(listadoOpcionesMain,4);

    do
    {

    //opcionSeleccionada=RetornaOpcion(listadoOpciones, 4);
    //printf("\n\t%d : \\t %s", listadoOpciones[i].numero, listadoOpciones[i].texto);


    switch(opcionSeleccionada.numero)
    {
        case 1: cargarListadoDeAlumnos(listadoMain, A); break;
        case 2: mostrarListadoDeAlumnos(listadoMain, A); break;
        case 3: ordenarListadoDeAlumnosPorNombre(listadoMain, A); break;
    }
    }while(opcionSeleccionada.numero !=4);
    //menuGeneral();

    /*cargarListadoDeAlumnos(listadoMain, A);

    mostrarListadoDeAlumnos(listadoMain, A);

    printf("Ordenar\n");

    ordenarListadoDeAlumnosPorNombre(listadoMain, A);

    mostrarListadoDeAlumnos(listadoMain, A);*/




    return 0;
}

