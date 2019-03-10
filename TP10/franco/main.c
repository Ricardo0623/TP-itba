#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "dice.h"
#include "stringequal.h" //1 si igual, 0 si distinto
#include "stoi.h"
#include "verify.h"
#define CANTDEARG 8

char *error (int errorCode);

int main (int argc, char *argv[]) {
	//printf("Cantidad de argumentos: %d \n",argc);
	int i;
	char extension[4]; //areglo para la extension del ultimo argumento

	if ((argc!=CANTDEARG) && (argc!=(CANTDEARG-1))) { //si la cantidad de argumentos no es la deseada se termina el programa
		printf("Input error: %s \n",error(1));
		return 0;
	}

	if ( !( stringequal("-cantidad",argv[1]) ) ) { //comprobamos la primer opcion
		printf("\nInput error: %s \n",error(2)); printf("-------------------------\n"); }

	if ( !( stringequal("-tiradas",argv[3]) ) ) { //comprobamos la segunda opcion
		printf("\nInput error: %s \n",error(3)); printf("-------------------------\n"); }

	if ( !( stringequal("-caras",argv[5]) ) ) { //comprobamos la tercera opcion
		printf("\nInput error: %s \n",error(4)); printf("-------------------------\n"); }

	int lastLetter = wordlength(argv[7])-1; //contamos cuantas letras tiene la ultima palabra
	for (i=0;i<4;i++) {
		extension[3-i] = *(argv[7]+ (lastLetter-i)); //llenamos el arreglo con la extension del ultimo argumento
	}
	extension[4]=0; //forzamos terminador de palabra

	if((*argv[7])=='\0') { 
		}
	else if ( !( stringequal(".txt",extension) ) ) { //comprobamos la validez de la extension del ultimo argumento
		printf("\nInput error: %s \n",error(5)); printf("-------------------------\n"); }
        
	if((verify(argv[2])==1) || (verify(argv[4])==1) || (verify(argv[6])==1))
 	printf("\nInput error: %s \n",error(6)); printf("-------------------------\n");

	
	int cantidad=stoi(argv[2]);
        int tiradas=stoi(argv[4]);
        int caras=stoi(argv[6]);
	char *nombre_archivo;
	if((*argv[7])=='\0')  
	{
	nombre_archivo=NULL;
	}
	else {
	nombre_archivo=(argv[7]); //de lo contrario se pasa el nombre del archivo
	}
        dice(cantidad,tiradas,caras,nombre_archivo);
}

char *error (int errorCode) {
	switch (errorCode) {
		case 1: return ("CANTIDAD DE ARGUMENTOS NO VALIDA"); break;
		case 2: return ("PRIMERA OPCION NO VALIDA, USE -cantidad \n  ->SINTAXIS CORRECTA: -cantidad xx - tiradas yy -caras zz salida.txt"); break;
		case 3: return ("SEGUNDA OPCION NO VALIDA, USE -tiradas \n  ->SINTAXIS CORRECTA: -cantidad xx - tiradas yy -caras zz salida.txt"); break;
		case 4: return ("SEGUNDA OPCION NO VALIDA, USE -caras \n  ->SINTAXIS CORRECTA: -cantidad xx - tiradas yy -caras zz salida.txt"); break;
		case 5: return ("EXTENSION DEL ULTIMO ARG NO VALIDA, USE .txt \n  ->SINTAXIS CORRECTA: -cantidad xx - tiradas yy -caras zz salida.txt"); break;
		case 6: return ("NÚMERO NO VÁLIDO\n  ->SINTAXIS CORRECTA: -cantidad xx - tiradas yy -caras zz salida.txt");
		break;
		default: return 0; break;
    }
}
 
