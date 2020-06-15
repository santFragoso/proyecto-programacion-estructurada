#include "catalogo.c"
#include "Registro_actividades_peso.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

/*******/
void obtenerInfoDeUsuario (char *nombreDeUsuario, float *estaturaDeUsuario, char *genero);
void mostrarOpcionesMenuPrincipal ();
void registrarActividadesYPeso();
void fMenuNutricion();
void fmencalc();
float florentz(int ALT, int SEXO);
float fcreff(int EDAD,int ALT,int MORF);
float fmondu(int ALT, float CIRCM);
void fimc(float IMC);
/*******/

int main () {
setlocale(LC_CTYPE, "spanish");
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
        fmencalc();
		break;
	case 4:
        fMenuNutricion();
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
	printf("\n 4. PLAN NUTRICIONAL");
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
                                /*----------SIGUIENTE FUNCION---------- */

 void fMenuNutricion(){
float peso_,altura_,edad_,sexo_,actividad_,TMB_,valorActividad_,meta_;
int bandera_,bandera2_,bandera3_,caso;
printf("\n Bienvenido al menu para conocer su plan de nutricion ideal en acorde con sus objetivos \n");
printf("\nPara usar esta herramienta primero sera necesario realizar el calculo para conocer su TMB (Tasa Metabolica Basar)\n");
printf("A continuacion se le pediran los datos necesarios para realizar el calculo de su TMB\n");
printf("Ingrese su peso actual en Kg\n");
scanf("%f",&peso_);
printf("Ingrese su altura en centimetros\n");
scanf("%f",&altura_);
printf("Ingrese su edad en anios\n");
scanf("%f",&edad_);
do{
        bandera_ = 1;
printf("Es hombre o mujer? Ingrese 1 si es hombre o 0 si es mujer\n");
scanf("%f",&sexo_);
if (sexo_ == 1 || sexo_ == 0){
    bandera_ = 0;
}

}while(bandera_ == 1 );

do{
        bandera2_ = 1;
printf("Cual es su nivel de actividad actual? Ingrese 0 si no realiza ningun tipo de actividad, 1 si realiza actividad moderada y 2 si realiza mucha activdad\n");
scanf("%f",&actividad_);
if (actividad_ == 0 || actividad_ == 1 || actividad_ == 2){
    bandera2_ = 0;
}

}while(bandera2_ == 1 );

if (actividad_ == 0){
    valorActividad_ = 1.2;
}
if (actividad_ == 1){
    valorActividad_ = 1.55;
}
if (actividad_ == 2){
    valorActividad_ = 1.72;
}

if (sexo_ == 1){

    TMB_ = ((66 + (13.7*peso_) + (5*altura_) - (6.75 * edad_) ) * valorActividad_);
    printf ("Su Tasa Metabolica Basar es de  %f \n", TMB_);
    printf ("Esta es la cantidad de calorias que consume al dia para mantener su peso actual\n");
}

if (sexo_ == 0){

    TMB_ = ((655 + (9.6 * peso_) + (1.8*altura_) - (4.7 * edad_)) * valorActividad_);
    printf ("Su Tasa Metabolica Basar es de  %f \n", TMB_);
    printf ("Esta es la cantidad de calorias que consume al dia para mantener su peso actual\n");
}
do{
        bandera3_ = 1;
printf("Cual es su meta? Ingrese 1 si su meta es ganar masa muscular y aumentar de peso, Ingrese 0 si su meta es bajar de peso y eliminar grasa\n");
scanf("%f",&meta_);
if ( meta_ == 1 || meta_ == 0){
    bandera3_ = 0;
}

}while(bandera3_==1);

if (meta_ == 1){
    printf("Para aumentar de masa muscular y ganar peso es necesario consumir un aproximado de 500 calorias extras diarias\n");
    printf ("La cantidad de calorias que debe consumir al dia recomendadas para su condiciones actuales y poder alcanzar su meta seran %.2f calorias al dia\n", (TMB_+500));
    printf ("Ingrese 1 para abrir en el explorador la guia en PDF con las dieta recomendadas para subir de peso y regresar al menu principal, ingrese 0 para regresar al menu principal\n");
    scanf("%d",&caso);
    switch (caso){
    case 1 :
    system("START https://www.maximuscle.com/downloads/HOG-BULKING-MEAL-PLANNER.PDF");
			break;
    default :
    break;
    }
}
if (meta_ == 0){
    printf("Para bajar de peso y poder eliminar grasa es necesario reducir la ingesta de calorias diarias en 500 aproximadamente\n");
    printf ("La cantidad de calorias que debe consumir al dia recomendadas para su condiciones actuales y poder alcanzar su meta seran %.2f calorias al dia\n", (TMB_-500));
    printf("Ingrese 1 para abrir en el explorador la guia en PDF con las dietas recomendadas para bajar de peso y regresar al menu principal, ingrese 0 para regresar al menu principal\n");
    scanf("%d",&caso);
    switch (caso){
case 1 :
    system("START https://images.template.net/wp-content/uploads/2016/01/11040917/30-Day-Meal-Plan-for-Weigh-Loss-PDF-Template-Free-Download.pdf");
    break;
default :
    break;
    }
}
}

                                    /*----------SIGUIENTE FUNCION---------- */
void fmencalc(){
	int RESC; //Respuesta para la calculadora que se va a
	float PESO,IMC,CIRCM; //Peso y circunferencia de la muñeca
	int ALT;//Altura
	int EDAD,SEXO,MORF;//Edad, sexo y morfología
	float PI,ALTM; //Peso ideal y altura en centímetros que será pasada a metros
	int RESM; //Respuesta para regresar o no al menú de las calculadoras
	printf("Este es el menú de las calculadoras para un peso ideal\n");
	printf("¿Qué calculadora desea utilizar?\n");
	printf("[1] Fórmula de Broca\n");
	printf("[2] Fórmula de Lorentz\n");
	printf("[3] Fórmula de Creff\n");
	printf("[4] Fórmula de Monnerot-Dumaine\n");
	printf("[5] Índice de Masa Corporal(IMC)\n");
	printf("[0] Regresar al menú anterior\n");

	scanf("%d",&RESC);
	while(RESC<0||RESC>5){
		printf("El número que ingresó no corresponde a ninguna opción proporcionada. Por favor intente de nuevo\n");
		scanf("%d",&RESC);
	}

	switch(RESC){
		case(1): printf("Se utilizará la fórmula de Broca\n");
				 printf("NOTA: No se recomienda esta fórmula si usted es muy alto, ya que el resultado puede ser erróneo\n");
				 printf("Ingrese su altura en cm\n");
				 scanf("%d",&ALT);
				 while(ALT<0||ALT>300){
					printf("Por favor introduzca un valor apropiado\n");
					scanf("%d",&ALT);
				 }
				 PI=ALT-100;
				 printf("Su peso ideal es de: %gkg\n",PI);

				 printf("¿Desea volver al menú de las calculadoras? [0] Sí [1] No\n");
				 scanf("%d",&RESM);
				 while(RESM<0||RESM>1){
					printf("Esa no es una opción válida. Por favor vuelva a intentar\n");
					scanf("%d",&RESM);
				 }
				 if(RESM==0){
					fmencalc();
				 }
		break;
		case(2): printf("Se utilizará la fórmula de Lorentz\n");
				 printf("Ingrese su altura en cm\n");
				 scanf("%d",&ALT);
				 while(ALT<0||ALT>300){
					printf("Por favor introduzca un valor apropiado\n");
					scanf("%d",&ALT);
				 }
				 printf("Introduzca su sexo. [1] Hombre, [2] Mujer\n");
				 scanf("%d",&SEXO);
				 while(SEXO!=1&&SEXO!=2){
					printf("Por favor escoja uno de los valores que se le proporcionaron\n");
					scanf("%d",&SEXO);
				 }
				 printf("Su peso ideal según los datos es: %gkg\n",florentz(ALT,SEXO));

				 printf("¿Desea volver al menú de las calculadoras? [0] Sí [1] No\n");
				 scanf("%d",&RESM);
				 while(RESM<0||RESM>1){
					printf("Esa no es una opción válida. Por favor vuelva a intentar\n");
					scanf("%d",&RESM);
				 }
				 if(RESM==0){
					fmencalc();
				 }
		break;
		case(3): printf("Se utilizará la fórmula de Creff\n");
				 printf("Ingrese su altura en cm\n");
				 scanf("%d",&ALT);
				 while(ALT<0||ALT>300){
					printf("Por favor introduzca un valor apropiado\n");
					scanf("%d",&ALT);
				 }

				 printf("Proporcione su edad\n");
				 scanf("%d",&EDAD);
				 while(EDAD<0||EDAD>110){
				 	printf("Ese valor no está permitido. Por favor ingrese un nuevo valor\n");
				 	scanf("%d",&EDAD);
				 }

				 printf("¿Qué tipo de morfología presenta?\n");
				 printf("[1] Ectomorfo\n");
				 printf("[2] Mesomorfo\n");
				 printf("[3] Endomorfo\n");
				 scanf("%d",&MORF);

				 while(MORF<1||MORF>3){
				 	printf("Introduzca únicamente valores que se le proporcionaron\n");
				 	scanf("%d",&MORF);
				 }
				 printf("Su peso ideal según los datos es: %gkg\n",fcreff(EDAD,ALT,MORF));

				 printf("¿Desea volver al menú de las calculadoras? [0] Sí [1] No\n");
				 scanf("%d",&RESM);
				 while(RESM<0||RESM>1){
					printf("Esa no es una opción válida. Por favor vuelva a intentar\n");
					scanf("%d",&RESM);
				 }
				 if(RESM==0){
					fmencalc();
				 }
		break;
		case(4): printf("Se utilizará la fórmula de Monnerot-Dumaine\n");
				 printf("Ingrese su altura en cm\n");
				 scanf("%d",&ALT);
				 while(ALT<0||ALT>300){
					printf("Por favor introduzca un valor apropiado\n");
					scanf("%d",&ALT);
				 }

				 printf("Proporcione la circunferencia de su muñeca en cm\n");
				 scanf("%f",&CIRCM);
				 while(CIRCM<0||CIRCM>100){
				 	printf("Ese valor no está permitido, ingrese un nuevo valor\n");
				 	scanf("%f",&CIRCM);
				 }
				 printf("Su peso ideal es: %gkg\n",fmondu(ALT,CIRCM));

				 printf("¿Desea volver al menú de las calculadoras? [0] Sí [1] No\n");
				 scanf("%d",&RESM);
				 while(RESM<0||RESM>1){
					printf("Esa no es una opción válida. Por favor vuelva a intentar\n");
					scanf("%d",&RESM);
				 }
				 if(RESM==0){
					fmencalc();
				 }
		break;
		case(5): printf("Cálculo de IMC\n");
				 printf("Ingrese su altura en cm\n");
				 scanf("%f",&ALTM);
				 while(ALTM<0||ALTM>300){
					printf("Por favor introduzca un valor apropiado\n");
					scanf("%f",&ALTM);
				 }
				 printf("Proporcione su peso en kg\n");
				 scanf("%f",&PESO);
				 while(PESO<0||PESO>800){
					printf("Por favor ingrese un valor adecuado\n");
					scanf("%f",&PESO);
				 }

				 ALTM=ALTM/100;
				 IMC=(PESO/(pow(ALTM,2)));
				 printf("Su IMC es de: %g\n",IMC);
				 printf("Usted se encuentra dentro de la clasificación:\n");
				 fimc(IMC);

				 printf("¿Desea volver al menú de las calculadoras? [0] Sí [1] No\n");
				 scanf("%d",&RESM);
				 while(RESM<0||RESM>1){
					printf("Esa no es una opción válida. Por favor vuelva a intentar\n");
					scanf("%d",&RESM);
				 }
				 if(RESM==0){
					fmencalc();
				 }
		break;
		case(0):
		break;
	}
}
float florentz(int ALT, int SEXO){
	float PI,k; //k es la constante en la fórmula
	k=0;
	if(SEXO==1){
		k=4;
	}
	else{
		k=2.5;
	}
	PI=ALT-100-(ALT-150)/k;
	return PI;
}
float fcreff(int EDAD,int ALT,int MORF){
	float PI,k; //k es la constante en la fórmula
	k=0;
	if(MORF==1){
		k=0.9;
	}
	else{
		if(MORF==2){
			k=1;
		}
		else{
			k=1.1;
		}
	}
	PI=(ALT-100+(EDAD/10))*0.9*k;
	return PI;
}
float fmondu(int ALT, float CIRCM){
	int PI;
	PI=(ALT-100+4*(CIRCM))/2;
	return PI;
}
void fimc(float IMC){
	if(IMC<18.5){
		printf("Insuficiencia ponderal\n");
	}
	else{
		if(IMC<25){
			printf("Intervalo normal\n");
		}
		else{
			if(IMC<30){
				printf("Sobrepeso o preobesidad\n");
			}
			else{
				if(IMC<35){
					printf("Obesidad de clase I\n");
				}
				else{
					if(IMC<40){
						printf("Obesidad de clase II\n");
					}
					else{
						printf("Obesidad de clase III\n");
					}
				}
			}
		}
	}
}
