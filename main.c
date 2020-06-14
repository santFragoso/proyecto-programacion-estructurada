#include "catalogo.c"
#include "Registro_actividades_peso.h"
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

/*******/
void obtenerInfoDeUsuario (char *nombreDeUsuario, float *estaturaDeUsuario, char *genero);
void mostrarOpcionesMenuPrincipal ();
void registrarActividadesYPeso();
/*******/

int main () { 

char nombreDeUsuario[250];
float estaturaDeusuario; /*ESTAS SON LAS VARIABLES DE LA INFO DEL USUARIO, SE USARAN A LO LARGO DEL PROGRAMA*/
char genero; 

obtenerInfoDeUsuario(&nombreDeUsuario, &estaturaDeusuario, &genero); 
int valido = 0;
while (valido==0) {
mostrarOpcionesMenuPrincipal(); 

/*Aqui empieza*/
fflush(stdin);

printf("\nIngrese una opción para continuar:\n ");





	int selec;
scanf("%d", &selec);

switch (selec) {
	case 1:
		iniciarCatalogo();
		break;
	case 2:
		fMenuR();
		break;
	case 3:
		
		break;
	case 4:
		
		break;
	default:
		printf("\nopción inválida");
		break;
	
}

				}
	  

	
	
	return 0; 
}






/*----------FUNCIONES---------- */ 
void obtenerInfoDeUsuario (char *nombreDeUsuario, float *estaturaDeUsuario, char *genero)
{
	printf("Bienvenido(a), ingrese su nombre."); /*se obtiene el nombre*/

int confirmar = 0;
char sn;
do {
		fflush(stdin);
		printf("\nNombre: ");
		scanf("%250[^\n]", nombreDeUsuario);
		fflush(stdin);
		printf("\n¿confirmar? S/N\n");
		scanf("%c", &sn);
		tolower(sn);
		
		if (sn == 's')
		{
			confirmar = 1;
		} 

		
   }while (confirmar == 0); 

/*Se obtien la estatura*/
printf("Bienvenido, %s. Ingrese su estatura en metros, esta nos permitirá realizar calculos en algunas d nuestras herramientas.\n", nombreDeUsuario);

sn = 'n';
confirmar = 0; 
 do {
 		fflush(stdin); 	
		printf("Estatura: ");
		scanf("%f", estaturaDeUsuario);
		fflush(stdin);
		printf("\n¿confirmar? S/N\n");
		scanf("%c", &sn);
		tolower(sn);
		
		if (sn == 's')
		{
			confirmar = 1;
		} 

		
   }while (confirmar == 0); 

printf("\n Ingrese  m  para masculino ó  f  para femenino\n"); /*Se obtiene el genero*/

confirmar = 0;	
sn = 'n';
do {
 		
		int entradaValida = 0;
		do{
		 
		fflush(stdin); 	
		printf("Respuesta: ");
		scanf("%c", genero);
		tolower(*genero); 
		
		switch (*genero){
			case 'f':
				entradaValida = 1;
				break;
			case 'm':
				entradaValida = 1;
				break;
			default:
				entradaValida = 0;
				printf("Opción no válida, intente nuevamente...\n");
				break; 
			}
		} while (entradaValida == 0);
		
		
		
		fflush(stdin);
		printf("\n¿confirmar? S/N\n");
		scanf("%c", &sn);
		tolower(sn);
		
		if (sn == 's')
		{
			confirmar = 1;
		} 

		
   }while (confirmar == 0); 
	
 } 
 
/*----------SIGUIENTE FUNCION---------- */ 
 
 void mostrarOpcionesMenuPrincipal ()
 {
	printf("\n/*/*/*/*/*/*/*//*/*/*/*//*/*/*/*/*/*//*/*/*/*/*/*/*/*//**/*/*/*/*/*/*//*/\n");
	printf("\n 1. CATÁLOGO DE EJERCICIOS");	
	printf("\n 2. REGISTRO DE MASA CORPORAL Y EJERCICIOS");
	printf("\n 3. CALCULADORAS "); /*hay que corregir esta linea diciendo las calculadoras dosponibles*/
	printf("\n 4. COMPARACIÓN DE PESO Y ACTIVIDADES A LO LARGO DEL TIEMPO");
	printf("\n/*/*/*/*/*/*/*//*/*/*/*//*/*/*/*/*/*//*/*/*/*/*/*/*/*//**/*/*/*/*/*/*//*/\n");
  	
 }
 
 /*----------SIGUIENTE FUNCION---------- */
 
 struct E efectuarRegistroDeActividad() {
 	struct E temporal;
 	printf("\nIngrese la cantida de series que realizo durante el día: ");
 	scanf("%d",&temporal.SERIES); 
 	printf("\nIngrese las repeticiones por serie realizadas en el día: ");
 	scanf("%d",&temporal.REPET);
 	
 	return temporal; 	
 }
 
 
 
 /*----------SIGUIENTE FUNCION---------- */
 
 void fMenuR(){ //Menu del registro de ejercicios y peso

        int OPCN = 0;
        system("cls");
        printf("Bienvenido al registro de ejercicios o peso, aquí podra registrar los ejercicios que ha realizado\n");
        printf(" y registrar su peso semana a semana.");
        printf("\n************************************************************************************************\n");


        printf("\nIngrese una de las siguientes opciones para continuar: \n");
	    printf("1 - Registro de ejercicios\n");
	    printf("2 - Registro de peso\n");
	    printf("3 - Regresar al menu principal\n");

        printf("Respuesta: ");
        scanf("%d", &OPCN);

        switch (OPCN)
        {
        case 1: fEscE();
            break;

        case 2: fRegP();

            break;
            
        case 3: break;

        default:
            printf("\nOpción inválida\n");
            system("pause");
            fMenuR();
            break;
        }
}

/*----------SIGUIENTE FUNCION---------- */

void fEscE(){ //Función para escoger el ejercicio su semana 
    int SELEC = 0;
    int SEMANA =0;
    int DIA = 0;
    int repetir = 0;
    int repetir1 = 1;
    int repetir2 = 1;
    int repetir3 = 0;
    system("cls");
    printf("\nHola, en este apartado podras registrar los ejercios que realices semana con semana\n");
    
    /*hay 3 ciclos anidados, cada uno obitne respectivamente ejercicio, semana y dia, esto
	tiene el proposito de permitir al usuario regresar en el menu en caso de equivocarse o querer registrar otro
	ejercicio o semana, etc*/    
    
    do{
    	imprimirCatalogo();
    	printf("\nIndica el # del ejercicio a registrar, asegurate que sea mayor a 0 y menor a 30, ingresa 45 para regresar: ");
    	do{
		
		scanf("%d", &SELEC);
    	}while(SELEC < 0 || (SELEC > 30 && SELEC!=45));
    	
    	if(SELEC==45){
    		repetir2=0;
		}
		else {
		
    	
    	do{
    		
    		
    	printf("\nIndica la semana en la que deseas registrar, ingresa 0 para regresar(99 semanas disponibles): ");
    	do{		
		scanf("%d", &SEMANA);
    	}while(SELEC > 99 || (SELEC < 1 && SELEC!=0));
    	
    	if (SEMANA!=0) {
				
		
		
			repetir=1;
    		do{
    			int opcion;
    			printf("Indica el día que deseas registrar, ingrese 9 para regresar \n "
		"\n\t 0. Lunes \n\t 1. Martes \n\t 2. Miercoles \n\t 3. Jueves \n\t 4. Viernes \n\t 5. Sabado \n\t 6. Domingo\n");  			
    			do{				
				scanf("%d", &DIA);
				}while(SELEC < 0 || (SELEC > 6 && SELEC!=9));
				
    			if (DIA==9)
    			{
    				repetir = 0;
				}
    			else
    			{
				REGISTRO[SELEC][SEMANA][DIA] = efectuarRegistroDeActividad();}
					
				
				}while(repetir == 1);
    	}   	
    	else {
    		repetir1=0;
		}
    		
		}while( repetir1 == 1);
			}

	}while(repetir2==1);

}

	
	
	/*Debe realizarse un codigo que permita elegir constantemente entre semanas y días*/
	
		
	
	
	
	
	
		
		
		
									/*----------SIGUIENTE FUNCION---------- */
	
PESO_t fRegP(){
	PESO_t NPESO;//Nuevo variable para acceder a la estructura
	int OPCN; //Opcion
	int SEMI; //Semana inicial
	int SEMF; //Semana Final
	float SUM; //Sumador
	float PROM; //Promedio
	float CSEM; //Contador del numero de semanas transcurridas
	
	system("cls");
	
	printf("\nBienvenido(a) en esta sección podras registrar tu peso semanal y con ello calcular tu promedio.");
	
	//Se obtiene la semana incial
	do{
		printf("\nIngrese el numero de la semana inicial, asegurese que sea mayor a 0: ");
		scanf("%d", &SEMI);
	}while(SEMI < 0);
	
	//Se obtiene la semana final
	do{
		printf("\nIngrese el numero de la semana final, asegurese que sea mayor al de la semana inicial y menor a 100: ");
		scanf("%d", &SEMF);	
	}while (SEMF < 0 || SEMF <= SEMI || SEMF > 100);
	
	//Se obtiene el peso
	for(int i = SEMI;i<=SEMF;i++){
		do{
			printf("\nIngrese su peso durante la semana en kg %d: ", i);
			scanf("%f", &NPESO.PSEM[i]);
			SUM += NPESO.PSEM[i]; //Se van sumando los pesos
		CSEM ++;
		}while(NPESO.PSEM[i] < 0);
	}
	
	//Se calcula el promedio
	
	PROM = SUM/CSEM;
	
	printf("\nEL promedio de peso de la semana %d a la semana %d es: %g\n", SEMI, SEMF, PROM);
	
	//Accedemos al menu
	OPCN = fMenuPR();
	
	switch(OPCN){
		
		case 1: fRegP();
				break;
		case 2: fMenuR();
				return NPESO;
				break;
		case 3:
				return NPESO;
				break;
		default:printf("\nOpción invalida");
				fMenuPR();
				break;
		
	}
}

								/*----------SIGUIENTE FUNCION---------- */


int fMenuPR(){//Menu de opciones para despues del registro del peso
	
	int OPCN; //Opcion
	
	printf("\n1 - Registrar otro periodo de tiempo\n");
    printf("2 - Regresar al menu anterior\n");
    printf("3 - Regresar al menu principal\n");
    printf("Respuesta: ");
    scanf(" %d", &OPCN);
    
    return OPCN;
}
	
 
 
 
