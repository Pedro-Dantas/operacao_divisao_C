#include <stdio.h>
#include <stdlib.h>

//Estudo em C, basta trocar o sinal para testar outras operaçoes 

int main(int argc, char *argv[]) {

	float num1;
	float num2;
	float oper;

	printf("\nOPERACAO DE DIVISAO\n");

	printf("\nDigite um numero real: ");
	scanf("%f", &num1);

	printf("Digite outro numero real: ");
	scanf("%f", &num2);

	//caso o segundo numero seja 0
	if (!num2) {
		printf("\nInfinito.\n");
		return 0;
	}
	
	oper=num1/num2;

	printf("\nO resultado da operacao e: %f.2f\n", oper);

	return 0;
}
