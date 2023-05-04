#include<stdio.h>
#include<stdlib.h>
#include<string.h>
	
	void registrar();
	void inicio();
	void a_datos();
	void a_datosnew();
	//void media();
	
		typedef struct {
    char fuente[50];
    int conductividad, turbidez, coliformes;
    float ph, precipitaciones, temperatura, tanto_sal;
} Datos;

typedef struct datos {
 	char fuentes [100];
 	float pH;
 	int conductividad;
 	int turbidez;
 	int coliformes;
 	float temperatura;
 	float precipitaciones;
 	float tanto_en_sal;
 }datos;

float media (struct datos* d, int, int);
//float moda (struct datos* d, int, int);
float mediana (struct datos* d, int, int);
float varianza (struct datos* d, int, int);
float maximo (struct datos* d, int, int);
float minimo (struct datos* d, int, int); 
	 
int main(){
	
	int opcion1;
	char aux, nombre_fichero[100];
    FILE *fentrada, *fsalida;
    datos d[25]; 
   	char nada[100];
	int i, z;
    
   	
	printf("Bienvenido al buscador ...\n");
	
	  printf("        ..\n");
    printf("      ...... \n");
    printf("    .......... \n");
    printf("  ..............\n");
    printf(" ......ANDREA......\n");
    printf(".......MARIA........\n");
    printf("....MARINA BIELSA....\n");
    printf(".....MARINA GARCIA....\n");
    printf(".....................\n");
    printf(" ....................\n");
    printf(" ....................\n");
    printf(" ....................\n");
    printf(" ................\n");
    printf("   ............\n");
    printf("        ...\n");
    
    printf("Elige entre una de estas opciones:\n");
    printf("1. Registrarte\n");
    printf("2. Iniciar sesion\n");
    printf("3.Comenzar sin registrarse\n");
    printf("4. Salir\n");
    scanf("%d", &opcion1);

    switch (opcion1) {
    	case 1:
    		registrar()	;
    	case 2:
    		inicio();
    		break;
    	case 3:
		break;	
    	case 4:
    		printf("Hasta pronto\n");
    		break;
    	default:
    		printf("Opcion invalida. Intente de nuevo.\n");
    		break;
		}

	int opcion2;
	printf("Has iniciado sesion correctamente\n");
    printf("Elige entre una de estas opciones:\n");
    printf("1. Agregar datos\n");
    printf("2. Consultar datos\n");
    printf("3. Analizar datos\n");
    printf("4. Comparacion de datos\n");
    printf("5. Salir\n");
    scanf("%d", &opcion2);
    
    int opcion3;
	int opcion4; 
	int opcion5;
	
    switch (opcion2) {
    	case 1:
    		printf("Elija una opcion de la siguientes para agregar datos\n");
    		printf("1. Agregar datos a un fichero nuevo\n");
    		printf("2. Agregar datos a un fichero existente\n");
    		scanf("%d", &opcion3);
    		switch(opcion3){
    			case 1:
    				a_datosnew();
    				break;
    			case 2:
    				a_datos();
			}
    		break;
    	case 2:
    		do{
    			printf("Introduzca el barrio a consultar (acabado en .txt). \n");
    			scanf("%s", nombre_fichero);
				fentrada = fopen(nombre_fichero, "r");
				if(fentrada==NULL){
					printf("Este barrio no esta registrado.\n");
				}
			}while(fentrada==NULL);
        	
			int columna;
		    printf("Elija entre estas opciones lo que quiere consultar:\n");
			printf("1. Todos los datos\n");
			printf("2. El pH\n");
			printf("3. La conductividad\n");
			printf("4. La turbidez\n");
			printf("5. Los coliformes\n");
			printf("6. La temperatura\n");
			printf("7. Las precipitaciones\n");
			printf("8. El porcentaje de sal en agua\n");
			printf("9. Potabilidad\n");
			scanf("%d", &opcion4);
			switch(opcion4){
				case 1:
				while(aux!= EOF){
					aux=fgetc(fentrada);
					printf("%c",aux);
				}
				printf("\n");
				fclose(fentrada);
				system("pause");
				break;
    		    case 2:
    		    	fentrada=fopen(nombre_fichero, "r");
    		    columna==2;	
  			     while (aux!=EOF) {
  			     	aux=fgetc(fentrada);
  			     	printf("%c",aux);
				   }
 			    printf("\n");
		     	fclose(fentrada);
		     	system("pause");
   			     break;
				case 3:
    		    columna==3;	
  			     while (aux!=EOF) {
  			     	aux=fgetc(fentrada);
  			     	printf("%c",aux);
				   }
 			    printf("\n");
		     	fclose(fentrada);
		     	system("pause");
   			     break;
         	   case 4:
    		    columna==4;	
  			     while (aux!=EOF) {
  			     	aux=fgetc(fentrada);
  			     	printf("%c",aux);
				   }
 			    printf("\n");
		     	fclose(fentrada);
		     	system("pause");
   			     break;
            	case 5:
    		    columna==5;	
  			     while (aux!=EOF) {
  			     	aux=fgetc(fentrada);
  			     	printf("%c",aux);
				   }
 			    printf("\n");
		     	fclose(fentrada);
		     	system("pause");
   			     break;
				case 6:
    		    columna==6;	
  			     while (aux!=EOF) {
  			     	aux=fgetc(fentrada);
  			     	printf("%c",aux);
				   }
 			    printf("\n");
		     	fclose(fentrada);
		     	system("pause");
   			     break;
				case 7:
    		    columna==7;	
  			     while (aux!=EOF) {
  			     	aux=fgetc(fentrada);
  			     	printf("%c",aux);
				   }
 			    printf("\n");
		     	fclose(fentrada);
		     	system("pause");
   			     break;
			    case 8:
    		    columna==8;	
  			     while (aux!=EOF) {
  			     	aux=fgetc(fentrada);
  			     	printf("%c",aux);
				   }
 			    printf("\n");
		     	fclose(fentrada);
		     	system("pause");
   			     break;
			  /* case 9:
			    printf("Para que el agua sea potable, debemos analizar la media del pH y que este se encuentre entre el 6,5 y 9,5\n");
			   if(media(pH)<6.5||media(pH)>9.5){
			    printf("Tras analizar este barrio podemos observar que el agua de este barrio no es potable");
				}
				else{
				 printf("Tras analizar este barrio podemos observar que el agua de este barrio es potable");
				}
			    break;
				default:
    		     printf("Opcion invalida. Intente de nuevo.\n");
    	     	 break;*/
	           	}
	           	break;
     case 3:
     	do{
    		printf("Introduzca el barrio a consultar (acabado en .txt). \n");
    		scanf("%s", nombre_fichero);
			fentrada = fopen(nombre_fichero, "r");
			if(fentrada==NULL){
			printf("Este barrio no esta registrado.\n");
			}
		}while(fentrada==NULL);
		
		datos d[25]; 
     	char nada[100];
    	int z;
    	int dim=0;
		i=0;
		
     	//Quitar los titulos del fichero
     	for(z=0; z<8; z++){
		    fscanf(fentrada, "%s, ", nada);	
		}
		
        //Convertir datos a struct
		while(fscanf(fentrada, " %s %f %f %f %f %f %f %f", d[i].fuentes, &d[i].pH, &d[i].conductividad, &d[i].turbidez, 
		&d[i].coliformes, &d[i].temperatura, &d[i].precipitaciones, &d[i].tanto_en_sal) != EOF ) {
		     //printf("Calculando...\n");
		     i++;
		}
		dim = i;
    	fclose(fentrada);
       	(fsalida);
     	
    		printf("Elija que quiere analizar:\n");
    		printf("1.Media\n");
    		printf("2.Moda\n");
    		printf("3.Mediana\n");
    		printf("4.Varianza\n");
    		printf("5.Valor maximo\n");
    		printf("6.Valor minimo\n");
    		scanf("%d",&opcion5);
    		
    		int opcion6;
    		
    		switch(opcion5) {
    			case 1:
    				printf("Elija que caracteristica quiere analizar:\n");
    	        	printf("1.pH\n");
            		printf("2.Conductividad\n");
            		printf("3.Turbidez\n");
            		printf("4.Coliformes\n");
            		printf("5.Temperatura\n");
            		printf("6. Precipitanciones \n");
            		printf("7. Porcentaje de sal \n");
            		printf("8. Todos \n");
    	        	scanf("%d", &opcion6);
    	        	if (opcion6 < 8 && opcion6 > 0) {
    	        		printf("Resultado de la media: %.2f\n", media(d, dim, opcion6));
					} else if (opcion6 == 8) {
						printf("Resultado de la media del pH: %.2f\n", media(d, dim, 1));
						printf("Resultado de la media de la conductividad: %.2f\n", media(d, dim, 2));
						printf("Resultado de la media de la turbidez: %.2f\n", media(d, dim, 3));
						printf("Resultado de la media de coliformes: %.2f\n", media(d, dim, 4));
						printf("Resultado de la media de la temperatura: %.2f\n", media(d, dim, 5));
						printf("Resultado de la media de las precipitaciones: %.2f\n", media(d, dim, 6));
						printf("Resultado de la media del porcentaje de sal: %.2f\n", media(d, dim, 7));
					}
    				break;
    			case 2:/*
					printf("Elija que caracteristica quiere analizar:\n");
    	        	printf("1.pH\n");
            		printf("2.Conductividad\n");
            		printf("3.Turbidez\n");
            		printf("4.Coliformes\n");
            		printf("5.Temperatura\n");
            		printf("6. Precipitanciones \n");
            		printf("7. Porcentaje de sal \n");
            		printf("8. Todos \n");
    	        	scanf("%d", &opcion6);
    	        	if (opcion6 < 8 && opcion6 > 0) {
    	        		printf("Resultado de la moda: %.2f\n", media(d, dim, opcion6));
					} else if (opcion6 == 8) {
						printf("Resultado de la moda del pH: %.2f\n", moda(d, dim, 1));
						printf("Resultado de la moda de la conductividad: %.2f\n", moda(d, dim, 2));
						printf("Resultado de la moda de la turbidez: %.2f\n", moda(d, dim, 3));
						printf("Resultado de la moda de coliformes: %.2f\n", moda(d, dim, 4));
						printf("Resultado de la moda de la temperatura: %.2f\n", moda(d, dim, 5));
						printf("Resultado de la moda de las precipitaciones: %.2f\n", moda(d, dim, 6));
						printf("Resultado de la moda del porcentaje de sal: %.2f\n", moda(d, dim, 7));
					}	*/		
    				break;
    			case 3:
    				printf("Elija que caracteristica quiere analizar:\n");
    	        	printf("1.pH\n");
            		printf("2.Conductividad\n");
            		printf("3.Turbidez\n");
            		printf("4.Coliformes\n");
            		printf("5.Temperatura\n");
            		printf("6. Precipitanciones \n");
            		printf("7. Porcentaje de sal \n");
            		printf("8. Todos \n");
    	        	scanf("%d", &opcion6);
    	        	if (opcion6 < 8 && opcion6 > 0) {
    	        		printf("Resultado de la mediana: %.2f\n", mediana(d, dim, opcion6));
					} else if (opcion6 == 8) {
						printf("Resultado de la mediana del pH: %.2f\n", mediana(d, dim, 1));
						printf("Resultado de la mediana de la conductividad: %.2f\n", mediana(d, dim, 2));
						printf("Resultado de la mediana de la turbidez: %.2f\n", mediana(d, dim, 3));
						printf("Resultado de la mediana de coliformes: %.2f\n", mediana(d, dim, 4));
						printf("Resultado de la mediana de la temperatura: %.2f\n", mediana(d, dim, 5));
						printf("Resultado de la mediana de las precipitaciones: %.2f\n", mediana(d, dim, 6));
						printf("Resultado de la mediana del porcentaje de sal: %.2f\n", mediana(d, dim, 7));
					}
    				break;
    			case 4:
    				printf("Elija que caracteristica quiere analizar:\n");
    	        	printf("1.pH\n");
            		printf("2.Conductividad\n");
            		printf("3.Turbidez\n");
            		printf("4.Coliformes\n");
            		printf("5.Temperatura\n");
            		printf("6. Precipitanciones \n");
            		printf("7. Porcentaje de sal \n");
            		printf("8. Todos \n");
    	        	scanf("%d", &opcion6);
    	        	if (opcion6 < 8 && opcion6 > 0) {
    	        		printf("Resultado de la varianza: %.2f\n", varianza(d, dim, opcion6));
					} else if (opcion6 == 8) {
						printf("Resultado de la varianza del pH: %.2f\n", varianza(d, dim, 1));
						printf("Resultado de la varianza de la conductividad: %.2f\n", varianza(d, dim, 2));
						printf("Resultado de la varianza de la turbidez: %.2f\n", varianza(d, dim, 3));
						printf("Resultado de la varianza de coliformes: %.2f\n", varianza(d, dim, 4));
						printf("Resultado de la varianza de la temperatura: %.2f\n", varianza(d, dim, 5));
						printf("Resultado de la varianza de las precipitaciones: %.2f\n", varianza(d, dim, 6));
						printf("Resultado de la varianza del porcentaje de sal: %.2f\n", varianza(d, dim, 7));
					}
    				break;
    			case 5:
    				printf("Elija que caracteristica quiere analizar:\n");
    	        	printf("1.pH\n");
            		printf("2.Conductividad\n");
            		printf("3.Turbidez\n");
            		printf("4.Coliformes\n");
            		printf("5.Temperatura\n");
            		printf("6. Precipitanciones \n");
            		printf("7. Porcentaje de sal \n");
            		printf("8. Todos \n");
    	        	scanf("%d", &opcion6);
    	        	if (opcion6 < 8 && opcion6 > 0) {
    	        		printf("Resultado de el maximo: %.2f\n", maximo(d, dim, opcion6));
					} else if (opcion6 == 8) {
						printf("Resultado de el maximo del pH: %.2f\n", maximo(d, dim, 1));
						printf("Resultado de el maximo de la conductividad: %.2f\n", maximo(d, dim, 2));
						printf("Resultado de el maximo de la turbidez: %.2f\n", maximo(d, dim, 3));
						printf("Resultado de el maximo de coliformes: %.2f\n", maximo(d, dim, 4));
						printf("Resultado de el maximo de la temperatura: %.2f\n", maximo(d, dim, 5));
						printf("Resultado de el maximo de las precipitaciones: %.2f\n", maximo(d, dim, 6));
						printf("Resultado de el maximo del porcentaje de sal: %.2f\n", maximo(d, dim, 7));
					}	
    				break;
    			case 6:	
    			    printf("Elija que caracteristica quiere analizar:\n");
    	        	printf("1.pH\n");
            		printf("2.Conductividad\n");
            		printf("3.Turbidez\n");
            		printf("4.Coliformes\n");
            		printf("5.Temperatura\n");
            		printf("6. Precipitanciones \n");
            		printf("7. Porcentaje de sal \n");
            		printf("8. Todos \n");
    	        	scanf("%d", &opcion6);
    	        	if (opcion6 < 8 && opcion6 > 0) {
    	        		printf("Resultado de el minimo: %.2f\n", minimo(d, dim, opcion6));
					} else if (opcion6 == 8) {
						printf("Resultado de el minimo del pH: %.2f\n", minimo(d, dim, 1));
						printf("Resultado de el minimo de la conductividad: %.2f\n", minimo(d, dim, 2));
						printf("Resultado de el minimo de la turbidez: %.2f\n", minimo(d, dim, 3));
						printf("Resultado de el minimo de coliformes: %.2f\n", minimo(d, dim, 4));
						printf("Resultado de el minimo de la temperatura: %.2f\n", minimo(d, dim, 5));
						printf("Resultado de el minimo de las precipitaciones: %.2f\n", minimo(d, dim, 6));
						printf("Resultado de el minimo del porcentaje de sal: %.2f\n", minimo(d, dim, 7));
					}
    				break;
				default:
    		     printf("Opcion invalida. Intente de nuevo.\n");
    	     	 break;
	           	}	
		  	break;	
    	case 4:
			printf("A continuacion podras elegir entre que barrios comparar");
			break;
    	case 5:
    		printf("Hasta pronto\n");
    		break;
    	default:
    		printf("Opcion invalida\n");
    		break;
	}
	return 0;
	}
	
	void registrar(){
	typedef struct {
		char nombre[100];
		char apellido[100];
		char DNI[9];
		char codigo_clave[5];
	} Registro;
	
		Registro registro ;
   		FILE *usuarios;
   		
	fflush(stdin);		
    printf("Ingrese su nombre:\n");
	gets(registro.nombre);
   
    printf("Ingrese su apellido:\n ");
   	gets(registro.apellido);
   
    printf("Ingrese su DNI(sin la letra):\n");
   	gets(registro.DNI);
   	
	printf("Ingrese una clave de 4 digitos:\n");
	gets(registro.codigo_clave);
   	
    usuarios = fopen("usuarios.txt", "a");
   
    fprintf(usuarios, "%s %s %s %s\n", registro.nombre, registro.apellido, registro.DNI, registro.codigo_clave);
	fclose(usuarios);

   printf("\nSus datos han sido guardados\n");	
	}
	

void inicio() {
    typedef struct {
        char nombre[100];
        char apellido[100];
        char DNI[20];
        char codigo_clave[10];
    } Ingreso;
    Ingreso ingreso;

    fflush(stdin);
   
    printf("Ingrese su DNI (sin la letra):\n");
    fflush(stdin);
    fgets(ingreso.DNI, 20, stdin);
    ingreso.DNI[strcspn(ingreso.DNI, "\n")] = '\0';

    printf("Ingrese una clave de 4 digitos:\n");
    fflush(stdin);
    fgets(ingreso.codigo_clave, 10, stdin);
    ingreso.codigo_clave[strcspn(ingreso.codigo_clave, "\n")] = '\0';

    FILE* usuarios = fopen("usuarios.txt", "r");
    
   if (usuarios == NULL) {
        printf("Error al abrir el fichero\n");
        return;
    }

    char linea[100];
    int encontrado = 0;
    while (fgets(linea, 100, usuarios) != NULL) {

        char nombre[100], apellido[100], DNI[9], codigo_clave[5];
        if (sscanf(linea, "%s %s %s %s", nombre, apellido, DNI, codigo_clave) != 4) {
            continue;
        }

        if (strcmp(ingreso.DNI, DNI) == 0 && strcmp(ingreso.codigo_clave, codigo_clave) == 0) {
            encontrado = 1;
            printf("Bienvenido, %s %s.\n", nombre, apellido);
            break;
        }
    }

    if (encontrado != 1) {
        printf("DNI o clave de acceso incorrectos.\n");
    }

    fclose(usuarios);
      
}
void a_datos(){
	 char nombre_fichero[100];
	 int j, n2;
		Datos a_datos[100] ;
   		FILE *fichero;


   printf("Introduzca el barrio en el que deseas agregar datos (acabado en .txt): \n");
    scanf("%s", nombre_fichero);
    
    fichero= fopen(nombre_fichero, "a");

    if(fichero == NULL){
        printf("Error al abrir el fichero.\n");
        return;
    }

    printf("Ingrese el número de fuentes que desea agregar:\n");
    scanf("%d", &n2);

    for(j = 0; j < n2; j++){
        printf("Ingrese el nombre de la fuente:\n");
        scanf("%s", a_datos[j].fuente);

        do {
            printf("Ingrese el pH de la fuente:\n");
            scanf("%f", &a_datos[j].ph);
        } while(a_datos[j].ph < 0);

        do {
            printf("Ingrese la conductividad de la fuente:\n ");
            scanf("%d", &a_datos[j].conductividad);
        } while(a_datos[j].conductividad < 0);

        do {
            printf("Ingrese la turbidez de la fuente:\n ");
            scanf("%d", &a_datos[j].turbidez);
        } while(a_datos[j].turbidez < 0);

        do {
            printf("Ingrese los coliformes de la fuente:\n ");
            scanf("%d", &a_datos[j].coliformes);
        } while(a_datos[j].coliformes < 0);

        printf("Ingrese la temperatura del agua de la fuente:\n ");
        scanf("%f", &a_datos[j].temperatura);

        do {
            printf("Ingrese las precipitaciones del agua de la fuente:\n ");
            scanf("%f", &a_datos[j].precipitaciones);
        } while(a_datos[j].precipitaciones < 0);

        do {
            printf("Ingrese el porcentaje de sal del agua de la fuente:\n ");
            scanf("%f", &a_datos[j].tanto_sal);
        } while(a_datos[j].tanto_sal < 0);

        // Escribir los datos en el archivo
        fprintf(fichero, "%s\t%.2f\t%d\t%d\t%d\t%.2f\t%.2f\t%.2f\n", a_datos[j].fuente, a_datos[j].ph, a_datos[j].conductividad, a_datos[j].turbidez, 
		a_datos[j].coliformes,a_datos[j].temperatura, a_datos[j].precipitaciones, a_datos[j].tanto_sal);
    }

    // Cerrar el archivo
    fclose(fichero);

    // Leer los datos del archivo y almacenarlos en el vector de estructuras
    fichero = fopen(nombre_fichero, "r");
    if(fichero == NULL){
        printf("Error al abrir el fichero.\n");
        return;
    }

    for(j = 0; j < n2; j++){
        fscanf(fichero, "%s%f%d%d%d%f%f%f", a_datos[j].fuente, &a_datos[j].ph, &a_datos[j].conductividad, &a_datos[j].turbidez, 
		&a_datos[j].coliformes, &a_datos[j].temperatura, &a_datos[j].precipitaciones, &a_datos[j].tanto_sal);
	
		}
			printf("Los datos se han agregado correctamente al archivo.\n");
	fclose(fichero);

   printf("\nSus datos han sido guardados\n");	
	}
	

void a_datosnew(){
	
    int i, n;
    Datos a_datosnew[100]; // vector de estructuras para almacenar los datos
    char nombre_fichero[100];
    FILE *fichero; // puntero de archivo
    
    printf("Ingrese el nombre del nuevo fichero (formato barrio.txt):\n");
    scanf("%s", nombre_fichero); 
  
    fichero = fopen(nombre_fichero, "w");
    if(fichero == NULL){
        printf("Error al abrir el fichero.\n");
        return;
    }

    printf("Ingrese el número de fuentes que desea agregar:\n");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Ingrese el nombre de la fuente:\n");
        scanf("%s", a_datosnew[i].fuente);

        do {
            printf("Ingrese el pH de la fuente:\n");
            scanf("%f", &a_datosnew[i].ph);
        } while(a_datosnew[i].ph < 0);

        do {
            printf("Ingrese la conductividad de la fuente:\n ");
            scanf("%d", &a_datosnew[i].conductividad);
        } while(a_datosnew[i].conductividad < 0);

        do {
            printf("Ingrese la turbidez de la fuente:\n ");
            scanf("%d", &a_datosnew[i].turbidez);
        } while(a_datosnew[i].turbidez < 0);

        do {
            printf("Ingrese los coliformes de la fuente:\n ");
            scanf("%d", &a_datosnew[i].coliformes);
        } while(a_datosnew[i].coliformes < 0);

        printf("Ingrese la temperatura del agua de la fuente:\n ");
        scanf("%f", &a_datosnew[i].temperatura);

        do {
            printf("Ingrese las precipitaciones del agua de la fuente:\n ");
            scanf("%f", &a_datosnew[i].precipitaciones);
        } while(a_datosnew[i].precipitaciones < 0);

        do {
            printf("Ingrese el porcentaje de sal del agua de la fuente:\n ");
            scanf("%f", &a_datosnew[i].tanto_sal);
        } while(a_datosnew[i].tanto_sal < 0);

        // Escribir los datos en el archivo
        fprintf(fichero, "%s\t%.2f\t%d\t%d\t%d\t%.2f\t%.2f\t%.2f\n", a_datosnew[i].fuente, a_datosnew[i].ph, a_datosnew[i].conductividad, a_datosnew[i].turbidez, 
		a_datosnew[i].coliformes,a_datosnew[i].temperatura, a_datosnew[i].precipitaciones, a_datosnew[i].tanto_sal);
    }

    // Cerrar el archivo
    fclose(fichero);

    // Leer los datos del archivo y almacenarlos en el vector de estructuras
    fichero = fopen(nombre_fichero, "r");
    if(fichero == NULL){
        printf("Error al abrir el fichero.\n");
        return;
    }

    for(i = 0; i < n; i++){
        fscanf(fichero, "%s%f%d%d%d%f%f%f", a_datosnew[i].fuente, &a_datosnew[i].ph, &a_datosnew[i].conductividad, &a_datosnew[i].turbidez, 
		&a_datosnew[i].coliformes, &a_datosnew[i].temperatura, &a_datosnew[i].precipitaciones, &a_datosnew[i].tanto_sal);
	
		}
		
		printf("Los datos se han agregado correctamente al archivo.\n");
	fclose(fichero);

   printf("\nSus datos han sido guardados\n");	
	}
	
	/*	void media(){
				FILE *fichero;
    char linea[1000];
    float contador = 0;
    float num = 0;
    float suma = 0;
    float media = 0;
	char nombre_fichero[100];
	
   printf("Introduzca el barrio en el que deseas realizar la media (acabado en .txt): \n");
    scanf("%s", nombre_fichero);
    fichero = fopen(nombre_fichero,"r");

    if(fichero==NULL){
   		printf("Error al abrir el fichero, \n");
   		return;
	}
    //Ignorar la primera linea 
    if (fgets(linea, 1000, fichero) == NULL) {
        printf( "El fichero esta vacio.\n" );
        return;
    }
	
	 while (fgets(linea, 1000, fichero)) {

        // Dividir la linea en palabras 
        char *palabra = strtok(linea, "\t");

        // Seleccionar la segunda palabra(media
        palabra = strtok(NULL, " ");
        palabra = strtok(palabra, "\t");

        
            Comprobamos que la palabra no es nula ni el final de la linea
            En caso de no serlo, pasamos la palabra a float(eso es lo que hace la funcion atof) y sumamos
        
        if (palabra != NULL && palabra[0] != '\0') {
            num = atof(palabra);
            suma += num;
        }

        // printf("%s\n",palabra);
        contador = contador + 1;
        
        // Salimos del bucle una vez llegado al final del fichero
        if(feof(fichero)){
            break;
        }
    }

    // Calculamos la media e imprimimos por pantalla el resultado
    media = suma/contador;
    printf("La media del phes: %f\n", media);

    // Cerramos el fichero
    fclose(fichero);

		} */
		
		

float media(struct datos* d, int dim, int t) {
	int i;
	float resultado = 0;
	float media;
	for(i=0; i<dim; i++) {
		switch (t) {
			case 1:
				resultado += d[i].pH;
				break;
			case 2:
				resultado += d[i].conductividad;
				break;
			case 3:
				resultado += d[i].turbidez;
				break;
			case 4:
				resultado += d[i].coliformes;
				break;
			case 5:
				resultado += d[i].temperatura;
				break;
			case 6:
				resultado += d[i].precipitaciones;
				break;
			case 7:
				resultado += d[i].tanto_en_sal;
				break;
		}	
	}
    media = (resultado/dim);
	return media;
}

/*
float moda (struct datos* d, int dim) {
	int frecuencia=0;
	int i=0, cont=1;
	float moda;
	while(i<dim) {
		if(d[i].pH==d[i+1].pH)
		{
			cont++;
			i++;
		}else{
			if(cont>(frecuencia))
			{
				moda=d[i].pH;
				*frecuencia=cont;
				cont=1;
				i++;
			}else {
				cont=1;
				i++;
			}
		}
	}
	return(moda); 
}*/

float mediana (struct datos* d, int dim, int t) {
	int i, j;
	float aux = 0, mediana =0;
	int a, b;
	a = (dim/2)-1/2;
    b = (dim/2)+1/2;
	for(i = 0; i < dim; i++){
    for(j = 0; j < dim; j++){
    	switch (t) {
			case 1:
				if(d[j].pH > d[j + 1].pH){
                    aux = d[j].pH;
                    d[j].pH = d[j + 1].pH;
                    d[j + 1].pH = aux;
                }
                if (dim % 2 == 0) {
                	mediana = ((d[a].pH)+(d[b].pH))/2;
            	} else {
	 	            mediana = d[dim/2].pH;
	            }
				break;
			case 2:
				if(d[j].conductividad> d[j + 1].conductividad){
                    aux = d[j].conductividad;
                    d[j].conductividad = d[j + 1].conductividad;
                    d[j + 1].conductividad = aux;
                }
                if (dim % 2 == 0) {
                	mediana = ((d[a].conductividad)+(d[b].conductividad))/2;
            	} else {
	 	            mediana = d[dim/2].conductividad;
	            }
				break;
			case 3:
				if(d[j].turbidez > d[j + 1].turbidez){
                     aux = d[j].turbidez;
                     d[j].turbidez = d[j + 1].turbidez;
                     d[j + 1].turbidez = aux;
                }
                if (dim % 2 == 0) {
                	mediana = ((d[a].turbidez)+(d[b].turbidez))/2;
            	} else {
	 	            mediana = d[dim/2].turbidez;
	            }
				break;
			case 4:
				if(d[j].coliformes > d[j + 1].coliformes){
                     aux = d[j].coliformes;
                     d[j].coliformes = d[j + 1].coliformes;
                     d[j + 1].coliformes = aux;
                }
                if (dim % 2 == 0) {
                	mediana = ((d[a].coliformes)+(d[b].coliformes))/2;
            	} else {
	 	            mediana = d[dim/2].coliformes;
	            }
				break;
			case 5:
  				if(d[j].temperatura > d[j + 1].temperatura){
                     aux = d[j].temperatura;
                     d[j].temperatura = d[j + 1].temperatura;
                     d[j + 1].temperatura = aux;
                }
                if (dim % 2 == 0) {
                	mediana = ((d[a].temperatura)+(d[b].temperatura))/2;
            	} else {
	 	            mediana = d[dim/2].temperatura;
	            }
				break;
			case 6:
				if(d[j].precipitaciones > d[j + 1].precipitaciones){
                     aux = d[j].precipitaciones;
                     d[j].precipitaciones = d[j + 1].precipitaciones;
                     d[j + 1].precipitaciones = aux;
                }
                if (dim % 2 == 0) {
                	mediana = ((d[a].precipitaciones)+(d[b].precipitaciones))/2;
            	} else {
	 	            mediana = d[dim/2].precipitaciones;
	            }
				break;
			case 7:
	 			if(d[j].tanto_en_sal > d[j + 1].tanto_en_sal){
                     aux = d[j].tanto_en_sal;
                     d[j].tanto_en_sal = d[j + 1].tanto_en_sal;
                     d[j + 1].tanto_en_sal = aux;
                }
                if (dim % 2 == 0) {
                	mediana = ((d[a].tanto_en_sal)+(d[b].tanto_en_sal))/2;
            	} else {
	 	            mediana = d[dim/2].tanto_en_sal;
	            }
				break;
		}		
    }
    }
return mediana;
}

float varianza (struct datos* d, int dim, int t) {
	int i; 
	float resultado = 0;
	for (i=0; i<dim; i++) {
		switch (t) {
			case 1:
				resultado += (d[i].pH-media(d, dim,1))*(d[i].pH-media(d, dim,1));
				break;
			case 2:
				resultado += (d[i].conductividad-media(d, dim, 2))*(d[i].conductividad-media(d, dim, 2));
				break;
			case 3:
				resultado += (d[i].turbidez-media(d, dim, 3))*(d[i].turbidez-media(d, dim, 3));
				break;
			case 4:
				resultado += (d[i].coliformes-media(d, dim, 4))*(d[i].coliformes-media(d, dim, 4));
				break;
			case 5:
				resultado += (d[i].temperatura-media(d, dim,5))*(d[i].temperatura-media(d, dim, 5));
				break;
			case 6:
				resultado += (d[i].precipitaciones-media(d, dim, 6))*(d[i].precipitaciones-media(d, dim, 6));
				break;
			case 7:
				resultado += (d[i].tanto_en_sal-media(d, dim, 7))*(d[i].tanto_en_sal-media(d, dim, 7));
				break;
		}
	}
	return (resultado/dim);
}

float maximo(struct datos* d, int dim, int t) {
    int i;
    float maximo = 0;
    for (i = 1; i < dim; i++) {
    	switch (t) {
			case 1:
				maximo = d[0].pH;
                if (d[i].pH> maximo) {
                    maximo = d[i].pH;
                }
				break;
			case 2:
				maximo = d[0].conductividad;
                if (d[i].pH> maximo) {
                    maximo = d[i].conductividad;
                }
				break;
			case 3:
				maximo = d[0].turbidez;
                if (d[i].turbidez> maximo) {
                    maximo = d[i].turbidez;
                }
				break;
			case 4:
				maximo = d[0].coliformes;
                if (d[i].coliformes> maximo) {
                    maximo = d[i].coliformes;
                }
				break;
			case 5:
				maximo = d[0].temperatura;
                if (d[i].temperatura> maximo) {
                    maximo = d[i].temperatura;
                }
				break;
			case 6:
				maximo = d[0].precipitaciones;
                if (d[i].precipitaciones> maximo) {
                    maximo = d[i].precipitaciones;
                }
				break;
			case 7:
				maximo = d[0].tanto_en_sal;
                if (d[i].tanto_en_sal> maximo) {
                    maximo = d[i].tanto_en_sal;
                }
				break;
		}	
    }
    return maximo;
}

float minimo(struct datos* d, int dim, int t) {
    int i;
    float minimo = 0;
    for (i = 1; i < dim; i++) {
    	switch (t) {
			case 1:
				minimo = d[0].pH;
                if (d[i].pH < minimo) {
                    minimo = d[i].pH;
                }
				break;
			case 2:
			    minimo = d[0].conductividad;
                if (d[i].conductividad < minimo) {
                    minimo = d[i].conductividad;
                }
				break;
			case 3:
				minimo = d[0].turbidez;
                if (d[i].turbidez < minimo) {
                    minimo = d[i].turbidez;
                }
				break;
			case 4:
				minimo = d[0].coliformes;
                if (d[i].coliformes < minimo) {
                    minimo = d[i].coliformes;
                }
				break;
			case 5:
				minimo = d[0].temperatura;
                if (d[i].temperatura < minimo) {
                    minimo = d[i].temperatura;
                }
				break;
			case 6:
				minimo = d[0].precipitaciones;
                if (d[i].precipitaciones < minimo) {
                    minimo = d[i].precipitaciones;
                }
				break;
			case 7:
				minimo = d[0].tanto_en_sal;
                if (d[i].tanto_en_sal < minimo) {
                    minimo = d[i].tanto_en_sal;
                }
				break;
		}
    }
    return minimo;
}

	
	




