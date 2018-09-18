

typedef struct
{
    float promedio;
    int legajo;
    char nombre[35];
    int edad;

} sAlumno;

typedef struct
{

int numero;
char texto[15];
int isEmpty;

}sOpcion;

typedef struct
{
    char titulo[15];
    sOpcion listadoDeOpciones[4];
}sMenu;


/** \brief
 *
 * \param sAlumno
 * \return void
 *
 */
void mostrarUnAlumno(sAlumno);
sAlumno pedirAlumno();

void cargarListadoDeAlumnos(sAlumno[], int);
void mostrarListadoDeAlumnos(sAlumno[], int);
void ordenarListadoDeAlumnosPorNombre(sAlumno[], int);
int menuGeneral();
sOpcion RetornaOpcion(sOpcion listadoOpciones[], int cantidad);
sOpcion AltaOpcion();
void MostrarOpcion(sOpcion opcionParametro);
void MostrarListadoOpciones(sOpcion listado[], int cantidad);
void MostrarMenu(sMenu unMenu);
sMenu initMenu(sMenu unMenu);
sMenu cargaMenu(sMenu unMenu);
sMenu eliminaOpcion(sMenu miMenu);

