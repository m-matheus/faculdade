#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <conio.h>


main()
{
setlocale(LC_ALL, "Portuguese");

int tam, qntd, tot;

printf("Digite o tamanho da camiseta (P- 1, M- 2 ou G- 3): \n");
scanf("%d", &tam);

switch(tam) {
	case 1:
		tam = 'P';
		printf("Digite a quantidade de camisetas vendidas: \n");
		scanf("%d", &qntd);
		tot = qntd * 15;
		printf("Valor total de vendas: R$ %d\n", tot);
		break;
	case 2:
		tam = 'M';
		printf("Digite a quantidade de camisetas vendidas: \n");
		scanf("%d", &qntd);
		tot = qntd * 18;
		printf("Valor total de vendas: R$ %d\n", tot);
		break;
	case 3:
		tam = 'G';
		printf("Digite a quantidade de camisetas vendidas: \n");
		scanf("%d", &qntd);
		tot = qntd * 22;
		printf("Valor total de vendas: R$ %d\n", tot);
		break;
	default:
		printf("Por favorm digie uma das opções válidas.");
}
system("Pause");
return(0);
}

