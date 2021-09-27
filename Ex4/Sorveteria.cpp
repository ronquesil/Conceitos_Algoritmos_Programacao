# include  <iostream>
# include  <stdlib.h>
# include  <stdio.h>
# include  <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int i;
	
	do{
		printf("\n Digite um número do sabor: \n");
		
		printf("\t (1) ...flocos \n");
		printf("\t (2) ...morango \n");
		printf("\t (3) ...leite condesado \n");
		
		scanf("%d", &i);;
		
	}while((i<1) || (i>3));
	
	switch(i){
		
		case 1:
			printf("\t\t Você escolheu flocos");
			break;
			
		case 2:
			printf("\t\t Você escolheu morango");
			break;
		
		case 3:
			printf("\t\t Você escolheu leite condesado \n");
			break;
	}
	return 0;
}
