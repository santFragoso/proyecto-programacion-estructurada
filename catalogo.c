#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

const char decirVideoYoutube[] = "Video demostrativo en youtube (El video y sus contenidos pertenecen a sus autores)";

int iniciarCatalogo();
void imprimirCatalogo();
void mostrarEjercicio(int seleccion);
int ingresoEjercicio();
void abrirVideoYoutube(int video);
int menuDeNavegacion_Catalogo(int ejercicio);






int iniciarCatalogo () 
{
	int regresar = 0;
	
	while (regresar ==  0) {
	

	printf("Bienvenido al catálogo de ejercicios, aquí podrá encontrar información sobre como realizar una amplia\n");
	printf("variedad de ejercicios que puede realizar en casa sin herramientas ni pesas");
	printf("\n**************************************\n");
	
	imprimirCatalogo();
		
	if (ingresoEjercicio() == 1) 
	{
		regresar = 1;
		
	}

					     	}
	
}


int ingresoEjercicio ()
{

	int regresar = 0 ;
	int principal = 0;

	while (regresar == 0) {


		printf("Ingrese el número del ejercicio que desea consultar\n");
		
		int seleccion;
		
		scanf("%d", &seleccion);
			
		mostrarEjercicio(seleccion);
		
	    if (menuDeNavegacion_Catalogo (seleccion) == 3)
	    {
	    	return 1;
		}
	       
							}
	
	
	
	
}



int menuDeNavegacion_Catalogo (int ejercicio)
{
	int regresar = 0;
	
	while (regresar == 0){
	
	int opcion = 0;
	printf("\nIngrese una de las siguientes opciones para continuar: \n");
	printf("1 - Elegir un ejercicio diferente\n");
	printf("2 - Abir video del ejercicio en el navegador (Únicamente Windows)\n");
	printf("3 - Regresar al menú principal\n");
	
	scanf("%d", &opcion);
	
	switch (opcion) {	
		case 1:
			regresar = 1;
			break;			
		case 2:
			abrirVideoYoutube(ejercicio);
			regresar = 0;
			break;		
		case 3:
			regresar = 3;
			return 3;
			break;	
		default:
			printf("Opción inválida");			
			break;
	}
		
                           }
                           
	return 0;
}








void imprimirCatalogo ()
{
printf("Zona superior: \n\n");
printf("\t 1 - Flexiones de brazos noramales (Lagartíjas)\n");
printf("\t 2 - Flexiones de V invertida o (Con la cadera levantada)\n");
printf("\t 3 - Flexiones diamante \n");
printf("\t 4 - Flexiones verticales \n");
printf("\t 5 - Desplazamiento lateral en plancha\n");
printf("\t 6 - Crab walk\n");
printf("\t 7 - Bear crawl (paso del osos)\n");

printf("\n\n");



printf("Zona Intermedia: \n\n");

printf("\t 8 - Elevaciones de tronco en el suelo\n");
printf("\t 9 - Planks\n");
printf("\t 10 - Planks laterales\n");
printf("\t 11 - Flexiones de delfín\n");
printf("\t 12 - Elevaciones de piernas extendidas en el suelo\n");
printf("\t 13 - Elevación de pelvis en el suelo\n");
printf("\t 14 - Aleteo de piernas\n");
printf("\t 15 - Superman (extensión lumbar en el suelo)\n");

printf("\n\n");



printf("Zona Inferior: \n\n");

printf("\t 16 - Sentadillas frontales\n");
printf("\t 17 - Sentadillas estilo Sumo\n");
printf("\t 18 - Sentadillas de una pierna\n");
printf("\t 19 - Zancadas\n");
printf("\t 20 - Puentes\n");
printf("\t 21 - Elevaciones de talones de pie\n");
printf("\t 22 - Patadas de burro\n");

printf("\n\n");



printf("Ejercicios cardiovasculares: \n\n");

printf("\t 23 - Burpess\n");
printf("\t 24 - Sprawl\n");
printf("\t 25 - Escaladas\n");
printf("\t 26 - Saltos de rana\n");
printf("\t 27 - Saltamontes\n");
printf("\t 28 - Saltos amplios\n");
printf("\t 29 - Saltos de patinador\n");
printf("\t 30 - Zancadas con salto\n");

printf("\n\n");
	
	
}


void mostrarEjercicio (int seleccion)
{
	switch (seleccion) {
		const char videoDemo[] = "Video demostrativo en youtube";
		case 1:
			printf("%d . ", seleccion);
			printf("Para comenzar con las flexiones debemos colocarnos en el suelo, en decúbito ventral o boca hacia abajo." 
			"Apoyamos las manos en el suelo, justo por debajo de los hombros y separadas de este ancho." 
			"Con los pies levemente separados o juntos, despegamos el torso del suelo impulsándonos con los brazos y el pecho."
			"\nEn ningún momento debemos levantar la cola o quebrar la cintura para realizar la flexión,"
			"sino que el cuerpo debe movilizarse simplemente por flexionar y extender los brazos y desde la cabeza a los pies," 
			"el cuerpo debe formar una línea recta."
			"\nAsí, al flexionar los brazos inspiramos y descendemos el torso hasta que éste se sitúe cerca del suelo, evitando curvar mucho la zona lumbar de la espalda." 
			"Exhalamos y regresamos lentamente a la posición previa en donde los brazos quedan extendidos.\n"
			
			);
			printf("\n %s : https://www.youtube.com/watch?v=e_EKkqoHxns \n", decirVideoYoutube); //los links de youtube van aqui, despues deben colocarse en la funcion abrirVideoYoutube
			break;
			
		case 2:
			printf("%d . ", seleccion);
			printf("Debemos colocar las manos en el suelo a la altura de los hombros, dejando nuestra cadera elevada,"
			"debemos formar una V invertida con nuestro cuerpo al estar en la posición correcta.\n"
			"Procedemos a descender al suelo utilizando nuestros brazos hasta que nuestra cabeza esté cerca del suelo, "
			"después ascendemos lentamente a la posición inicial y repetimos.");
			printf("\n %s : https://www.youtube.com/watch?v=OIs5xo_nhRs  \n", decirVideoYoutube);
			break;
			
		case 3:
			printf("%d . ", seleccion);
			printf("Para comenzar el ejercicio debemos tumbarnos boca abajo o en posición de decúbito ventral y apoyar las puntas de los pies juntas en el suelo,"
			" así como formar bajo nuestro pecho un diamante con las manos."
			"Para formar el diamante debemos unir ambos pulgares en el suelo y ambas puntas de los dedos índice. Apoyamos toda la palma de la mano y elevamos el cuerpo completo, sin quebrar la cintura."
			"Cuando logremos una posición de tabla, con el cuerpo alineado de pies a cabeza y nuestros brazos estén completamente extendidos, volvemos a flexionar los brazos para descender todo el cuerpo al mismo tiempo hasta que el pecho roce nuestras manos"
		" y volvemos a repetir tantas veces como sea necesario.\n");
			printf("\n %s : https://youtu.be/s8Ft6xyN5fw  \n", decirVideoYoutube);
			break;
		
		case 4:
			printf("%d . ", seleccion);
			printf("Básicamente, el ejercicio consiste en la realización de una flexión de brazos en posición vertical invertida, es decir, colocando todo el peso del cuerpo sobre las manos y desde allí, descendiendo mediante la flexión de los codos."
			"Para comenzar el ejercicio debemos apoyar ambas palmas de las manos en el suelo, separadas poco más allá del ancho de los hombros, cerca de una pared donde colocaremos los pies."
 			"Con los brazos extendidos, nos colocamos en posición vertical mediante la contracción del abdomen."
			"Siempre con la espalda recta y las piernas juntas descendemos lentamente mediante la flexión de brazos todo el cuerpo hasta tocar el suelo con la cabeza por delante de las manos."
			" Y lentamente se regresa a la posición inicial para completar una repetición del ejercicio.");
			printf("\n %s : https://www.youtube.com/watch?v=uZWjFe4fufA \n", decirVideoYoutube);
			break;
		
		case 5:
			printf("%d . ", seleccion);
			printf("Desplazamiento lateral en posición de plancha, como si fuéramos a realizar flexiones pero con brazos extendidos y movilizando los mismos hacia un lado y otro para desplazar todo el cuerpo en dicha posición.");
			printf("\n %s : https://www.youtube.com/watch?v=jETy1PJtRPE  \n", decirVideoYoutube);
			break;
		
		case 6:
			printf("%d . ", seleccion);
			printf("El ejercicio comienza sentados en el suelo, con las palmas de las manos apoyadas hacia atrás y por los lados del cuerpo y los pies también apoyados en el suelo, cómo lo muestra el vídeo. Desde allí, "
			"debemos despegar el resto del cuerpo del suelo y trasladarnos hacia atrás caminando con las manos y los pies como único apoyo.");
			printf("\n %s : https://youtu.be/I-3r4cl4ahA \n", decirVideoYoutube);
			break;
		
		case 7:
			printf("%d . ", seleccion);
			printf("Como su nombre lo indica, el ejercicio consiste en imitar la caminata de un oso, se realiza sin equipamiento alguno y partiremos de una posición de rodillas,"
			" apoyando las manos en el suelo poco más separadas que el ancho de los hombros."
			"El movimiento comenzará cuando elevemos la cadera y separemos las rodillas del suelo, quedando así en una posición cuyos únicos puntos de apoyo serán ambas manos completamente sobre el suelo y las puntas de los pies.");
			printf("\n %s : https://youtu.be/2yAWjVCT1VQ \n", decirVideoYoutube);
			break;
			
		case 8:
			printf("%d . ", seleccion);
			printf("Para realizar este ejercicio debemos comenzar por acostarnos boca arriba en el suelo o sobre una colchoneta. Apoyamos los pies en el suelo y flexionamos las rodillas al mismo tiempo que colocamos detrás de la cabeza ambas manos,"
			 "a la altura de la nuca, sin ser necesario entrelazar los dedos."
			 "Desde esta posición debemos inspirar y después elevar el tronco mientras exhalamos el aire, mientras contraemos el abdomen. La espalda debe flexionarse sin despegarse del todo del suelo, sino que sólo debe elevarse la parte superior de la misma mientras hombros y cuello permanecen relajados." 
			 "Lentamente regresamos a la posición inicial sin apoyar por completo la cabeza en el suelo.");
			printf("\n %s : https://www.youtube.com/watch?v=Xyd_fa5zoEU \n", decirVideoYoutube);
			break;
			
		case 9:
			printf("%d . ", seleccion);
			printf("Para comenzar el ejercicio debemos colocarnos en posición de decúbito ventral, es decir, en el suelo o sobre colchoneta, boca hacia abajo. Elevaremos el cuerpo despegándolo del suelo mediante el apoyo de antebrazos y manos, así como mediante la punta de los pies."
			"El resto del cuerpo, desde la cabeza hacia los talones debe quedar los más alineado posible, y sin arquear demasiado la columna debemos contraer el abdomen y mantener la posición de tabla o puente formado por el cuerpo por unos 10 a 30 segundos, respirando lo más normal posible, sin contener la respiración."
			"Descendemos y podemos repetir el ejercicio que no requiere movimiento pero si contracción permanente de las fibras musculares.");
			printf("\n %s : https://www.youtube.com/watch?v=ASdvN_XEl_c \n", decirVideoYoutube);
			break;
		
		case 10:
			printf("%d . ", seleccion);
			printf("Similar a la Plank, esta debe realizarse un codo sobre el suelo para sostener una posicion lateral");
			printf("\n %s : https://youtu.be/ASdvN_XEl_c?t=118 \n", decirVideoYoutube);
			break;
		
		case 11:
			printf("%d . ", seleccion);
			printf("Debemos colocarnos con los antebrazos apoyados en el suelo, paralelos entre sí o unidos mediante las manos, y con las puntas de los pies también apoyadas, debemos formar una \"V\" invertida con el cuerpo para iniciar el ejercicio."
			"Con la espalda recta en todo momento, descenderemos el tronco para alinear el cuerpo y colocarlo paralelo al suelo. Los hombros deben bajar hasta quedar cerca de las muñecas y la barbilla debe posicionarse más allá de las manos que se encuentran en el suelo.");
			printf("\n %s : https://youtu.be/TxVzpBB83ek \n", decirVideoYoutube);
			break;
		
		case 12:
			printf("%d . ", seleccion);
			printf("Para comenzar el ejercicio debemos recostarnos en el suelo, con la espalda totalmente apoyada en la superficie y flexionamos la cadera para elevar las piernas rectas hasta que éstas queden perpendiculares al tronco. Desde allí, con la cabeza, cuello y hombros sobre el suelo, comenzamos el movimiento."
			"Colocamos las manos a los lados del cuerpo, con las palmas sobre el suelo, o bien, para una mayor comodidad y mejor apoyo de la espalda, podemos colocarlas bajo los glúteos."
			"Inspiramos y descendemos las piernas lentamente mientras contraemos el abdomen para controlar el movimiento. Podemos bajar las piernas sólo hasta mitad de recorrido o continuar hasta casi llegar al suelo."
			"Regresamos lentamente a la posición inicial y repetimos tantas veces como se haya indicado.");
			printf("\n %s : https://youtu.be/JB2oyawG9KI \n", decirVideoYoutube);
			break;
		
		case 13:
			printf("%d . ", seleccion);
			printf("Debemos recostarnos en el suelo con las piernas contraidas y con las manos extendidas a los costados. Después, procedemos a levantar nuestra cadera de suelo utilizando los musculoes del abdomen");
			printf("\n %s : https://youtu.be/yMUH54Ld6Xc \n", decirVideoYoutube);
			break;
			
		case 14:
			printf("%d . ", seleccion);
			printf("Para comenzar con la ejecución de este movimiento debemos tumbarnos boca arriba con piernas extendidas y brazos por los lados del cuerpo."
			"Colocaremos las manos debajo de los glúteos para favorecer el cuidado de la columna lumbar y desde allí, iniciaremos el ejercicio."
			"Despegaremos la cabeza y los pies del suelo mediante la contracción del abdomen y realizaremos con las piernas un aleteo vertical, es decir, de forma alternada subiremos y bajaremos los pies simultáneamente sin apoyar los mismos en el suelo hasta finalizar la ejecución del ejercicio.");
			printf("\n %s : https://youtu.be/VoHnFoltddg \n", decirVideoYoutube);
			break;
			
		case 15:
			printf("%d . ", seleccion);
			printf("Para comenzar con la realización del ejercicio debemos tumbarnos boca abajo sobre el suelo, colocando una superficie acolchada sobre la pelvis, un cojín por ejemplo. De lo contrario, nos tumbamos sobre una colchoneta. Allí extendemos piernas y brazos hacia adelante, pasando por los lados de la cabeza. Con la vista hacia abajo y la frente apoyada en la superficie, comenzamos el movimiento."
			"Inspiramos y elevamos al mismo tiempo brazos y piernas hacia arriba sin realizar movimientos bruscos o tirones, y descendemos mientras espiramos sin llegar a tocar el suelo con las extremidades nuevamente.");
			printf("\n %s : https://youtu.be/jXgjanzu6pc \n", decirVideoYoutube);
			break;
		
		case 16:
			printf("%d . ", seleccion);
			printf("Siempre mirando al frente y sin curvar la espalda, debemos descender los glúteos flexionando la rodilla y la cadera,  y cuidando que la rodilla no pase de la punta del pie ni sobrepase los 90 grados de flexión. Descendemos hasta que los muslos quedan paralelos al suelo y desde allí debemos elevarnos lentamente mientras exhalamos el aire inhalado al comenzar el descenso del cuerpo.");
			printf("\n %s : https://youtu.be/aclHkVaku9U \n", decirVideoYoutube);
			break;
		
		case 17:
			printf("%d . ", seleccion);
			printf("Mirando hacia el frente y sin curvar la espalda, separamos las piernas más allá de la altura de los hombros y flexionamos las piernas, procurando que nuestras rodillas no creen un ángulo de 90°");
			printf("\n %s : https://youtu.be/sqDGkIBYPAk \n", decirVideoYoutube);
			break;
		
		case 18:
			printf("%d . ", seleccion);
			printf("Parados con los pies a la altura de los hombros, extendemos ligeramente una de nuestras piernas y procedemos a flexionar la otra hasta llegar lo más cerca del piso posible"
			" Volvemos a nuestra posición original y repetimos");
			printf("\n %s : https://youtu.be/DjxQrgLsty4 \n", decirVideoYoutube);
			break;
		
		case 19:
			printf("%d . ", seleccion);
			printf("Para realizar el ejercicio debemos colocarnos inicialmente de pie, con las piernas ligeramente separadas del ancho de la cadera y al comenzar el movimiento debemos inspirar y efectuar una zancada, es decir dar un paso adelante con una pierna manteniendo el torso lo más recto posible."
			" La pierna desplazada hacia adelante debe flexionarse por su rodilla hasta que el muslo quede paralelo al suelo y la rodilla flexionada forme con la pierna un ángulo de 90 grados. La pierna que no se desplaza debe quedar anclada con el pie al suelo pero debe descender hacia el mismo por la rodilla. Espirando se regresa a la posición inicial.");
			printf("\n %s : https://youtu.be/4LOLArRJu7A \n", decirVideoYoutube);
			break;
			
		case 20:
			printf("%d . ", seleccion);
			printf("ara comenzar el ejercicio debemos ubicarnos tumbados sobre la espalda con los brazos extendidos a los lados del cuerpo y las palmas de las manos apoyadas en el suelo. Con las rodillas flexionadas y los pies apoyados en el suelo debemos inspirar y contraer glúteos para elevar la pelvis mientras las nalgas se separan del suelo con ayuda de los pies que deben empujar con fuerza sobre el suelo."
			"ara comenzar el ejercicio debemos ubicarnos tumbados sobre la espalda con los brazos extendidos a los lados del cuerpo y las palmas de las manos apoyadas en el suelo. Con las rodillas flexionadas y los pies apoyados en el suelo debemos inspirar y contraer glúteos para elevar la pelvis mientras las nalgas se separan del suelo con ayuda de los pies que deben empujar con fuerza sobre el suelo."
			" Así, se formará una especie de puente con el cuerpo. Se debe mantener la posición unos pocos segundos y descender lentamente la pelvis sin llegar a apoyar nuevamente las nalgas en el suelo. Espiramos y comenzamos una nueva repetición del movimiento.");
			printf("\n %s : https://youtu.be/YzYSjkqmqL4 \n", decirVideoYoutube);
			break;
			
		case 21:
			printf("%d . ", seleccion);
			printf("Como el nombre del ejercicio lo dice, para realizar el movimiento debemos comenzar de pie, con los pies separados aproximadamente de la anchura de los hombros y las rodillas ligeramente flexionadas debemos despegar los talones del suelo mientras realizamos una extensión de los pies para elevar el cuerpo mientras éste queda sostenido por la punta del pie."
			"Es importante que la espalda esté bien recta y que el cuerpo se eleve por la flexión plantar o la elevación de los talones. Podemos realizar el movimiento con una barra sostenida sobre el torso, con mancuernas tomadas en ambas manos y/o sobre un banco, en el cual sólo apoyaremos los pies por sus puntas y tendremos la dificultad extra de que los talones realizan un recorrido mayor durante el ejercicio.");
			printf("\n %s : https://youtu.be/OlEY-vSzHoI \n", decirVideoYoutube);
			break;
		
		case 22:
			printf("%d . ", seleccion);
			printf("Para su ejecución nos colocaremos en el suelo a cuatro patas. Partiendo de esta posición apoyaremos los antebrazos al suelo, de modo que las manos queden libres y los codos apoyados por completo. La espalda debe mantenerse recta a lo largo de todo el ejercicio, y para ello nos apoyaremos con las piernas de rodillas."
			" Partiendo de esta posición lo que debemos hacer es un movimiento muy sencillo, ya que simplemente debemos echar una de las piernas, la que no está apoyada en el suelo hacia atrás. La manera de hacerlo será concentrando todo el movimiento en la parte de las caderas y los glúteos, nunca en la espalda o la zona lumbar." 
			" Al realizar este movimiento debemos concentrar todo el empuje en el glúteo, para lo que no vamos a descender del todo al bajar, sino que nos vamos a quedar a medio camino para volver a empujar hacia arriba como si tuviésemos un peso que nos impide mover la pierna hacia atrás y lo tenemos que vencer con la fuerza de nuestros músculos");
			printf("\n %s : https://youtu.be/SJ1Xuz9D-ZQ \n", decirVideoYoutube);
			break;
		
		case 23:
			printf("%d . ", seleccion);
			printf("Para comenzar con el ejercicio debemos colocarnos de pie, con los pies separados del ancho de los hombros y con las puntas ligeramente hacia afuera. Desde allí, comenzamos flexionando las rodillas como si fuéramos a realizar una sentadilla para inclinar el torso y apoyar las manos en el suelo."
			" Allí rápidamente adoptamos una posición de flexiones de brazos mediante la extensión de las piernas hacia atrás y flexionamos los brazos para bajar el pecho hasta tocar con el mismo el suelo."
			" Posteriormente extendemos brazos y realizamos un salto de rana para volver a juntar las piernas y enderezar el cuerpo para culminar el posición erguida con un salto final que se acompaña de un golpe entre ambas manos por encima de la cabeza.");
			printf("\n %s : https://youtu.be/TX60BcsO_wE \n", decirVideoYoutube);
			break;
		
		case 24:
			printf("%d . ", seleccion);
			printf("Para comenzar el movimiento debemos colocarnos de pie, con las piernas separadas del ancho de los hombros y las rodillas ligeramente flexionadas. Desde allí, se desciende el cuerpo hasta una posición de squat o sentadilla y colocando las palmas de las manos en el suelo, delante del cuerpo, se extienden las piernas hacia atrás y con un salto se regresan a la posición inicial."
			" Como se muestra en el vídeo, las rodillas se dirigen hacia afuera y los dedos también, al apoyar las palmas de las manos."
			" Aunque parece un movimiento muy similar a los burpees, no es el mismo ejercicio, pues durante el sprawl se debe arquear la espalda, no se realiza un salto cuando ya estamos de pie, y las piernas y manos adquieren otra postura.");
			printf("\n %s : https://youtu.be/v95Rn7kaq3o \n", decirVideoYoutube);
			break;
		
		case 25:
			printf("%d . ", seleccion);
			printf("Para comenzar con la realización de este ejercicio debemos colocarnos tumbados boca abajo en el suelo y apoyar las manos con los dedos dirigidos hacia el frente, justo debajo de los hombros. Desde allí, elevamos todo el cuerpo para quedar en posición de plancha, con brazos extendidos y palmas en el suelo y puntas de los pies como segundo apoyo."
			" El cuerpo debe quedar en línea recta desde talones a cabeza, para lo cual, es importante mantener el abdomen contraído y no quebrar la cintura, y los brazos deben estar alineados con los hombros."
			" Comenzaremos el movimiento llevando la rodilla izquierda hacia el codo izquierdo por debajo del cuerpo y justo cuando regresamos la pierna a la posición inicial realizamos el movimiento con la rodilla derecha que debe dirigirse hacia el codo derecho.");
			printf("\n %s : https://youtu.be/1J4hRICVjRo \n", decirVideoYoutube);
			break;
			
		case 26:
			printf("%d . ", seleccion);
			printf("Debemos colocar los pies a la altura de los hombros y mantener la espalda recta, similar a una sentadilla. Luego, damos un salto y al aterrizar flexionamos las piernas intentando tocar el suelo con la punta de los dedos");
			printf("\n %s : https://youtu.be/C54LoE13DUo \n", decirVideoYoutube);
			break;
			
		case 27:
			printf("%d . ", seleccion);
			printf("Nos posicionaremos en posición de flexión de brazos, con las manos apoyadas en el suelo y las puntas de los pies también."
			" Los brazos estarán extendidos y elevaremos un poco más allá de la horizontal la cadera antes de comenzar el movimiento, llevando el pie de un lado a la mano del lado contrario."
			" Regresamos a la posición inicial y repetimos el gesto con la pierna del otro lado, de forma alternada y rápidamente para lo cual necesitaremos cambiar de piernas mediante un pequeño salto");
			printf("\n %s : https://youtu.be/3j4EKfpajYU \n", decirVideoYoutube);
			break;
		
		case 28:
			printf("%d . ", seleccion);
			printf("Para iniciar el ejercicio nos colocaremos de pie, con las piernas separadas del ancho de las caderas para después, flexionar la cadera y rodillas para realizar una sentadilla mientras llevamos los brazos hacia atrás que nos ayudarán en el impulso."
			" Desde allí, debemos saltar con un gran impulso hacia arriba y adelante, con ambas piernas juntas, intentando con el salto desplazarnos lo más posible."
			" Amortiguaremos la caída llevando los brazos hacia adelante para estabilizar el cuerpo y realizando una sentadilla profunda");
			printf("\n %s : https://youtu.be/MwiI72uFzNI \n", decirVideoYoutube);
			break;
		
		case 29:
			printf("%d . ", seleccion);
			printf("Para comenzar este ejercicio debemos colocarnos con las rodillas flexionadas, el torso levemente inclinado hacia adelante pero con la espalda recta, y los pies separados ligeramente entre sí. Desde allí comenzamos el movimiento saltando hacia el lado izquierdo."
			" Aterrizamos con la pierna izquierda, siempre con la rodilla flexionada, y pasamos la pierna derecha por detrás, colocando el pie por atrás de la pierna de apoyo."
			" Ni bien toque el pie derecho el suelo o antes de que éste apoye, saltamos a la derecha y repetimos el movimiento de forma alternada con una y otra pierna.");
			printf("\n %s : https://youtu.be/4RuxhVJ4-pg \n", decirVideoYoutube);
			break;
		
		case 30:
			printf("%d . ", seleccion);
			printf("Las scissosr lunge o jumping lunge no es más que la ejecución zancadas realizadas de forma alterna mediante saltos entre cada una de ellas. Para comenzar el ejercicio, debemos adelantar una pierna con el torso recto y erguido."
			" La pierna que queda atrás debe rozar el suelo con la rodilla, mientras que la que adelantamos debe flexionarse de forma tal que pies y rodilla queden alineados."
			" Desde esa posición e intentando conservar el tronco erguido, comenzamos dando un salto para pasar la pierna que estaba a atrás a ocupar la posición de la adelantada y repetimos siempre dando un salto para alternar entre una zancada y otra ");
			printf("\n %s : https://youtu.be/jdUOoK27dYc \n", decirVideoYoutube);
			break;
				
		
		default:
			printf("Opciíon inválida, intente nuevamente\n");
			ingresoEjercicio(); 
			break;
	}
	
	
	
	
}


void abrirVideoYoutube (int video)
{
	switch (video) {
		case 1:
			system("START https://www.youtube.com/watch?v=e_EKkqoHxns");
			break;
			
		case 2:
			system("START https://www.youtube.com/watch?v=OIs5xo_nhRs ");
			break;
			
		case 3:
			system("START https://youtu.be/s8Ft6xyN5fw");
			break;
			
		case 4:
			system("START https://www.youtube.com/watch?v=uZWjFe4fufA");
			break;
			
		case 5:
			system("START https://www.youtube.com/watch?v=jETy1PJtRPE");
			break;
			
		case 6:
			system("START https://youtu.be/I-3r4cl4ahA");
			break;
			
		case 7:
			system("START https://youtu.be/2yAWjVCT1VQ");
			break;
			
		case 8:
			system("START https://www.youtube.com/watch?v=Xyd_fa5zoEU");
			break;
			
		case 9:
			system("START https://www.youtube.com/watch?v=ASdvN_XEl_c");
			break;
			
		case 10:
			system("START https://youtu.be/ASdvN_XEl_c?t=118");
			break;
			
		case 11:
			system("START https://youtu.be/TxVzpBB83ek");
			break;
			
		case 12:
			system("START https://youtu.be/JB2oyawG9KI");
			break;
			
		case 13:
			system("START https://youtu.be/yMUH54Ld6Xc");
			break;
			
		case 14:
			system("START https://youtu.be/VoHnFoltddg");
			break;
			
		case 15:
			system("START https://youtu.be/jXgjanzu6pc");
			break;
			
		case 16:
			system("START https://youtu.be/aclHkVaku9U");
			break;
			
		case 17:
			system("START https://youtu.be/sqDGkIBYPAk");
			break;
			
		case 18:
			system("START https://youtu.be/DjxQrgLsty4");
			break;
			
		case 19:
			system("START https://youtu.be/4LOLArRJu7A");
			break;
			
		case 20:
			system("START https://youtu.be/YzYSjkqmqL4");
			break;
			
		case 21:
			system("START https://youtu.be/OlEY-vSzHoI");
			break;
			
		case 22:
			system("START https://youtu.be/SJ1Xuz9D-ZQ");
			break;
			
		case 23:
			system("START https://youtu.be/TX60BcsO_wE");
			break;
			
		case 24:
			system("START https://youtu.be/v95Rn7kaq3o ");
			break;
			
		case 25:
			system("START https://youtu.be/1J4hRICVjRo");
			break;
			
		case 26:
			system("START https://youtu.be/C54LoE13DUo");
			break;
			
		case 27:
			system("START https://youtu.be/3j4EKfpajYU");
			break;
			
		case 28:
			system("START https://youtu.be/MwiI72uFzNI");
			break;
			
		case 29:
			system("START https://youtu.be/4RuxhVJ4-pg");
			break;
			
		case 30:
			system("START https://youtu.be/jdUOoK27dYc");
			break;
			
			
			
			
		default:
			printf("Ha ocurrido un error inesperado :(");
			menuDeNavegacion_Catalogo(video);
			break;
		
			
	}
}


