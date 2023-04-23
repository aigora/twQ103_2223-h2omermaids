#include<stdio.h>
#include<stdlib.h>

	void registrar();
	//void inicio();
	void a_datos();
	 
int main(){
	
	int opcion1;
	char aux, nombre_fichero[100];
    FILE *fentrada, *fsalida, *usuarios;
	
	printf("Bienvenido al buscador ...\n");
    printf("Elige entre una de estas opciones:\n");
    printf("1. Registrarte\n");
    printf("2. Iniciar sesion\n");
    printf("3. Salir\n");
    scanf("%d", &opcion1);

    switch (opcion1) {
    	case 1:
    		registrar()	;
    		break;
    	case 2:
    		//inicio();
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
    
    switch (opcion2) {
    	case 1:
    		a_datos();
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
			while(aux!= EOF){
				aux=fgetc(fentrada);
				printf("%c",aux);
			}
			printf("\n");
			fclose(fentrada);
			system("pause");
   
    		break;
    	case 3:
    		
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
		char nombre[50];
		char apellido[50];
		char DNI[9];
		char codigo_clave[5];
	} Registro;
	
		Registro m ;
   		FILE *usuarios;
    
	printf("Ingrese su nombre:\n");
	fflush(stdin);
   	gets(m.nombre);
  
   	printf("Ingrese su apellido:\n ");
  	gets(m.apellido);
  	
   	printf("Ingrese su DNI:\n");
   	scanf("%s", m.DNI);
   	
   	printf("Ingrese una clave de 4 digitos:\n");
   	scanf("%s",m.codigo_clave);
    usuarios = fopen("usuarios.txt", "a");
   
    fprintf(usuarios, "%s %s %s %s\n", m.nombre, m.apellido, m.DNI, m.codigo_clave);
	fclose(usuarios);

   printf("\nSus datos han sido guardados\n");	
	}
	
/*
void inicio(){
	typedef struct {
		char nombre[50];
		char apellido[50];
		char DNI[9];
	} Registro;
	
		Registro m ;
   		FILE *usuarios;

   printf("Ingrese su nombre:\n");
   scanf("%s", m.nombre);
   printf("Ingrese su apellido:\n ");
<<<<<<< Updated upstream
   scanf("%s", m.apellido);

=======
>>>>>>> Stashed changes
   gets(m.apellido);
   printf("Ingrese su DNI:\n");
   scanf("%s", m.DNI);

<<<<<<< Updated upstream
 	FILE*usuarios =fopen("usuarios.txt", "r");
=======
   usuarios = fopen("usuarios.txt", "a");
   
   fprintf(usuarios, "%s %s %s\n", m.nombre, m.apellido, m.DNI);
	fclose(usuarios);

   printf("\nSus datos han sido guardados\n");	
	}
	

	void inicio(){
		typedef struct {
		char nombre[50];
		char apellido[50];
		char DNI[9];
	} Ingreso;
	
	Ingreso a;
	printf("Ingrese su nombre:\n");
    scanf("%s", a.nombre);

    printf("Ingrese su apellido:\n");
    gets(a.apellido);
	printf("Ingrese su DNI:\n");
    scanf("%s", a.DNI);

<<<<<<< HEAD
   printf("Ingrese su DNI:\n");
   scanf("%s", a.DNI);

	FILE* ususarios =fopen("usuarios.txt", "r")	;
=======
 	FILE* usuarios =fopen("usuarios.txt", "r")	;
>>>>>>> 982656f4a5938a457d962b027608c30d781a1259
>>>>>>> Stashed changes
	if (usuarios == NULL){
		printf("Error al abrir el fichero\n");
		return;
	}
}*/
void a_datos(){
	typedef struct {
		char nombre[50];
		float ph, conductividad, turbidez, coliformes;
		float  temperatura, tanto_sal, potabilidad;
	} Datos;
		char nombre_fichero[100];
		Datos a ;
   		FILE *fp;
   	
   		
    printf("Introduzca el barrio a consultar (acabado en .txt). \n");
    scanf("%s", nombre_fichero);
    
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
    
    fp= fopen("nombre_fichero.txt", "a");
 
    fprintf(fp, "%f %f %f %f %f %f\n", a.ph, a.conductividad, a.turbidez, a.temperatura, a.tanto_sal, a.potabilidad);
    printf("Los datos se han agregado correctamente al archivo.\n");
	fclose(fp);

   printf("\nSus datos han sido guardados\n");	
}	

	
	
	




