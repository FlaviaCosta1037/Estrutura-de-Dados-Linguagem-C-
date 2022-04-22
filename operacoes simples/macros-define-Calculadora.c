#include <stdio.h>
#include <locale.h>

//Estrutura da Macro: #define(espa�o)NOME(x,y)(espa�o)(x + y)
#define SOMA(a,b) (a + b)
#define SUBTRACAO(a,b) (a - b)
#define MULTIPLICACAO(a,b) (a * b)
#define DIVISAO(a,b) (a / b)

//Programa calculadora
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Portuguese");
	int a,b,opcao;
	int escolha;
	
	printf("Valor de A: ");
	scanf("%d", &a);
	printf("Valor de B: ");
	scanf("%d", &b);
	printf("Informe a opera��o aritim�tica desejada:\n1 - Soma\n2 - Subtra��o\n3 - Multiplica��o\n4 - Divis�o ");
	scanf("%d", &opcao);

	while(escolha != 2){
		
	switch(opcao)
	{
	case 1:
		printf("%d + %d = %d\n", a , b, SOMA(a,b));	
		break;
	case 2:
		printf("%d - %d = %d\n", a , b, SUBTRACAO(a,b));	
		break;
	case 3: 
		printf("%d * %d = %d\n", a , b, MULTIPLICACAO(a,b));	
		break;
	case 4: 
		printf("%d / %d = %d\n", a , b, DIVISAO(a,b));
		break;	
	default:
		printf("Op��o inv�lida, tente novamente!\n");
		break;
	}
	printf("Deseja realizar outro c�lculo?\n1 - Sim\n2- N�o\n");
	scanf("%d", &escolha);
	
	if(escolha == 2){
		break;
	}
	
	printf("Valor de A: ");
	scanf("%d", &a);
	printf("Valor de B: ");
	scanf("%d", &b);
	
	printf("Informe a opera��o aritim�tica desejada:\n1 - Soma\n2 - Subtra��o\n3 - Multiplica��o\n4 - Divis�o ");
	scanf("%d", &opcao);

	}		
	return 0;
}
	


