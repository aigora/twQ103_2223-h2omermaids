#include<stdio.h>
#include<stdlib.h>

	void registrar();
	 void inicio();
	 
int main(){
	
	int opcion1;
	
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
	printf("Haz iniciado sesion correctamente\n");
    printf("Elige entre una de estas opciones:\n");
    printf("1. Agregar datos\n");
    printf("2. Consultar datos\n");
    printf("3. Salir\n");
    scanf("%d", &opcion2);
    
    switch (opcion2) {
    	case 1:
    		
    		break;
    	case 2:
    		
    		break;
    		
    	case 3:
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
	} Registro;
	
		Registro m ;
   		FILE *usuarios;

   printf("Ingrese su nombre:\n");
   scanf("%s", m.nombre);

   printf("Ingrese su apellido:\n ");
   scanf("%s", m.apellido);

   printf("Ingrese su DNI:\n");
   scanf("%s", m.DNI);

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

   printf("Ingrese su apellido:\n ");
   scanf("%s", a.apellido);

   printf("Ingrese su DNI:\n");
   scanf("%s", a.DNI);

	FILE* ususarios =fopen("usuarios.txt", "r")	;
	if (usuarios == NULL){
		printf("Error al abrir el fichero\n");
		return;
	}
	
	
	
	
	
	}
	
	
	




