#ifndef REGISTROPAH
#define REGISTROPAH

#include <stdio.h>
#include <stdlib.h>

//Estructuras


typedef struct E{

    int SERIES;
    int REPET;

}; /*E[ejercicio][semana][dia]*/

struct E REGISTRO[30][99][7]; /*E REGISTRO[ejercicio][semana][dia]*/


//Estructura para almacenar el peso del usuario

typedef struct PESO{
	
	float PSEM[99];
	
}PESO_t;

//Funciones


void fMenuR(); //Menu del registro de ejercicio y peso

void fEscE(); //Funcion para escoger el ejercicio a registrar

//Como se creo una estructura por ejercicio se crearon 2 funciones por ejercicio

/*Funciones para dias y semanas*/

void fRegSE1(); //Esta para registrar la semana



int fMenuER();//Menu de opciones para despues del registro de ejercicio

int fMenuPR();//Menu de opciones para despues del registro de ejercicio

PESO_t fRegP();



int iniciarCatalogo(); //Funcion que inicia el catalogo de ejercicios
void imprimirCatalogo(); //Funcion que imprime el catalogo de ejercicios
void mostrarEjercicio(int seleccion); //Funcion que muestra como se realiza el ejercicio seleccionado
int ingresoEjercicio(); //Funcion para escoger un ejercicio para mostrar
void abrirVideoYoutube(int video); //Funcion que abre el ejercicio escogido en youtube
int menuDeNavegacion_Catalogo(int ejercicio);//Menu de navegacion del catalogo

void mostrarOpcionesMenuPrincipal (); //Menu principal del sistema

void obtenerInfoDeUsuario (char* nombreDeUsuario, float* estaturaDeUsuario, char* genero); //Funcion para obtener datos del usuario




#endif // REGISTROPAH
