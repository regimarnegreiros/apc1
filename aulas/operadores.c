#include <stdio.h>
#include <math.h>

int main() {
	int soma = 10 + 2;
	int diferenca = soma - 2;
	int multiplicacao = 10 * soma;
	int divisao = (int) soma / 2.0f;
	int resto = soma % 2;
	
	printf("%i\n", soma);
	printf("%i\n", soma++);
	printf("%i\n", soma);
	printf("%i\n", ++soma);
	
	printf("%i\n", --soma);
	
	return 0;
}
