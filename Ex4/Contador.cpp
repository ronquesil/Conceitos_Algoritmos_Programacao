#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int contador;
	
	printf("\n Digite um valor:");
	scanf("%d", &contador);
	
	for(contador; contador >=1; contador--)
	{
		printf("%d", contador);
	}
	return 0;
}
