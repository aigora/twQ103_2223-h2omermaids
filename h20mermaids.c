#include<stdio.h>
#include<stdlib.h>
#include<string.h>
	
	void registrar();
	void inicio();
	void a_datos();
	 
int main(){
	
	int opcion1;
	char aux, nombre_fichero[100];
    FILE *fentrada, *fsalida;
	
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
    printf("3. Salir\n");
    scanf("%d", &opcion1);

    switch (opcion1) {
    	case 1:
    		registrar()	;
    	case 2:
    		inicio();
    		break;
    		
    	case 3:
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
    printf("4. Salir\n");
    scanf("%d", &opcion2);
    
    int opcion3;

    switch (opcion2) {
    	case 1:
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
			int opcion4;
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
    		    	fentrada=fopen(ph_Lavapies, "r");
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
			   case 9:
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
    	     	 break;
	           	}
	           	break;
     case 3:
    		int opcion5;
    		printf("Elija que quiere analizar:\n");
    		printf("1.Media\n");
    		printf("2.Moda\n");
    		printf("3.Mediana\n");
    		printf("4.Variaza\n");
    		printf("5.Valor maximo\n");
    		printf("6.Valor minimo\n");
    		printf("7. Deseo comparar entre dos barrios\n");
    		scanf("%d",&opcion5);
    		switch(opcion5) {
    			case 1:
    				break;
    			case 2:
    				break;
    			case 3:
    				break;
    			case 4:
    				break;
    			case 5:
    				break;
    			case 6:
    				break;
    			case 7:
    				
    				break;
				default:
    		     printf("Opcion invalida. Intente de nuevo.\n");
    	     	 break;
	           	}*/		
		  	break;	
    			
    	case 4:
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
   
    printf("Ingrese su DNI(sin la letra):\n");
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
     do{ 
    
	 printf("DNI o clave de acceso incorrectos.\n");
     printf("Ingrese su DNI(sin la letra):\n");
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
	}while(encontrado == 1);

    fclose(usuarios);
}

void a_datos(){
	typedef struct {
		char nombre[50];
		float ph, conductividad, turbidez, coliformes;
		float  temperatura, tanto_sal, potabilidad;
	} Datos;
		char nombre_fichero[100];
		Datos a ;
   		FILE *fp;
   	
   		
    printf("Introduzca el barrio en el que deseas agregar datos (acabado en .txt): \n");
    scanf("%s", nombre_fichero);
    
    fp= fopen(nombre_fichero, "a");
    
   	printf("Ingrese el nombre de la fuente:\n");
   	scanf("%s", a.nombre);
    
	printf("Ingrese el ph de la fuente:\n");
   	scanf("%f", &a.ph);
  
   	printf("Ingrese la conductividad de la fuente:\n ");
    scanf("%f", &a.conductividad);
  	
  	printf("Ingrese la turbidez de la fuente:\n ");
    scanf("%f", &a.turbidez);
    
    printf("Ingrese los coliformes de la fuente:\n ");
    scanf("%f", &a.coliformes);
    
   	printf("Ingrese la temperatura del agua de la fuente:\n ");
    scanf("%f", &a.temperatura);
	
	printf("Ingrese el porcentaje de sal del agua de la fuente:\n ");
    scanf("%f", &a.tanto_sal);
    
	printf("Ingrese la potabilidad de la fuente:\n ");
    scanf("%f", &a.potabilidad);
 
    fprintf(fp, "%s %f %f %f %f %f %f\n", a.nombre, a.ph, a.conductividad, a.turbidez, a.temperatura, a.tanto_sal, a.potabilidad);
    printf("Los datos se han agregado correctamente al archivo.\n");
	fclose(fp);

   printf("\nSus datos han sido guardados\n");	
}	

void a_datosnew(){
	typedef struct {
		char nombre[50];
		float ph, conductividad, turbidez, coliformes;
		float  temperatura, tanto_sal;
	} Datos;
		char nombre_fichero[100];
		Datos n ;
   		FILE *fuentes;
		printf("Ingrese el nombre de la fuente:\n");
   	scanf("%s", n.nombre);
    
	printf("Ingrese el ph de la fuente:\n");
   	scanf("%f", &n.ph);
  
   	printf("Ingrese la conductividad de la fuente:\n ");
    scanf("%f", &n.conductividad);
  	
  	printf("Ingrese la turbidez de la fuente:\n ");
    scanf("%f", &n.turbidez);
    
    printf("Ingrese los coliformes de la fuente:\n ");
    scanf("%f", &n.coliformes);
    
   	printf("Ingrese la temperatura del agua de la fuente:\n ");
    scanf("%f", &n.temperatura);
	
	printf("Ingrese el porcentaje de sal del agua de la fuente:\n ");
    scanf("%f", &n.tanto_sal);
	
    fuentes = fopen("fuentes.txt", "a");
    fprintf(fuentes, "%s\t %.2f\t %.2f\t %.2f\t %.2f\t %.2f\n", n.nombre, n.ph, n.conductividad, n.turbidez, n.temperatura, n.tanto_sal);
    printf("Los datos se han agregado correctamente al archivo.\n");
	fclose(fuentes);
	printf("\nSus datos han sido guardados\n");	
	}	


	
	




