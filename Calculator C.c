#include <stdio.h>
#include <locale.h>


int main() 
{
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, resultado;
	int op, a;
	
	for(a=0; a < 1;){
		
	printf("Escolha sua opera��o digitando um dos n�meros abaixo:\n\n1: Adi��o\n2: Subtra��o\n3: Divis�o\n4: Multiplica��o\n5: Sair\n\n");
	scanf("%d", &op);
	
	switch(op){
		case 1:
			
		printf("\n\nDigite um valor: ");
		scanf("%f", &n1);
		printf("\nDigite outro valor: ", n2);
		scanf("%f", &n2);
			
		resultado = n1 + n2;
		
		printf("\n\nA soma entre %.2f e %.2f �: %.2f\n\n", n1, n2, resultado);
		break;
		
		case 2:
			
		printf("\n\nDigite um valor: ");
		scanf("%f", &n1);
		printf("\nDigite outro valor: ", n2);
		scanf("%f", &n2);	
			
		resultado = n1 - n2;
		
		printf("\n\nA subtra��o entre %.2f e %.2f �: %.2f\n\n", n1, n2, resultado);
		
		break;
		
		case 3:
					
		printf("\n\nDigite um valor: ");
		scanf("%f", &n1);
		printf("\nDigite outro valor: ", n2);
		scanf("%f", &n2);			
			
		resultado = n1 / n2;
		
		printf("\n\nA divis�o entre %.2f e %.2f �: %.2f\n\n", n1, n2, resultado);
		
		break;
		
		case 4:
					
		printf("\n\nDigite um valor: ");
		scanf("%f", &n1);
		printf("\nDigite outro valor: ", n2);
		scanf("%f", &n2);			
			
		resultado = n1 * n2;
		
		printf("\n\nA multiplica��o entre %.2f e %.2f �: %.2f\n\n", n1, n2, resultado);
		
		break;
		
		case 5:
			
		a = 1;
		
		break;
		
		default:
			printf("\n\nOp��o inv�lida\n\n");
	
		}
		
system("pause");
system("cls");
		
	}
	
}
