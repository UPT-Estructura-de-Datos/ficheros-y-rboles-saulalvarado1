#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	FILE* ptFichero;
	char fin[]="fin";
	char frase[60];
	
	ptFichero = fopen("registroDeUsuario.txt", "wt");
	printf(" PROGRAMA para ESCRIBIR FRASES. \nCuando quiera salir,""escriba la palabra fin.\n\n");

	do
	{
		puts("\nEscriba una FRASE:\n(o fin). \n");
		gets(frase);
		if (strcmp(frase, fin) == 0)
			break;
		fprintf(ptFichero, "%\n", frase);
		
	}
	while(strcmp(frase,fin)!= 0);
	
	fclose(ptFichero);
	return 0;
}
