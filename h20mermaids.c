#include<stdio.h>
#include<stdlib.h>

	void registrar();
	 void inicio();
	 
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
    
    switch (opcion2) {
    	case 1:
    		
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
	} Registro;
	
		Registro m ;
   		FILE *usuarios;

   printf("Ingrese su nombre:\n");
   scanf("%s", m.nombre);

   printf("Ingrese su apellido:\n ");
   scanf("%s", m.apellido);

   gets(m.apellido);
   printf("Ingrese su DNI:\n");
   scanf("%s", m.DNI);

 	FILE* usuarios =fopen("usuarios.txt", "r")	;
	if (usuarios == NULL){
		printf("Error al abrir el fichero\n");
		return;
	}
	
	
	
}
	

	
	
	




