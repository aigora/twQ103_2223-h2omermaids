#include<stdio.h>
#include<stdio.h>
	 typedef struct {
		char nombre[50];
		char apellido[50];
		char DNI[9];
	}registro;
	
	void registrarse();


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
    		registrarse();
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
	
	void registrarse(){
	struct registro m;
   		FILE *usuarios;

   printf("Ingrese su nombre:\n");
   scanf("%s", m.nombre);

   printf("Ingrese su apellido:\n ");
   scanf("%s", m.apellido);

   printf("Ingrese su DNI:\n");
   scanf("%s", m.DNI);

   usuarios = fopen("usuarios.txt", "w");
   if(ususarios==NULL{
   printf("Error al abrir el fichero.\n");
   exit(1);
   })
   fprintf(usuarios, "%s %s %s\n", x.nombre, x.apellido, x.DNI);

   fclose(usuarios);

   printf("\nLos datos de la persona se han guardado");	
	}
	
return 0;
}
	
	
	




