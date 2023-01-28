#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Portuguese");

	int productCode , quantity, type, totalQuantity, perecivel, naoPerecivel, congelado;
	float productValue, perecivelTotalValue, naoPerecivelTotalValue, congeladoTotalValue;
	int i;
	
	do {
		printf("Digite o código do produto: ");
		scanf("%d", &productCode);
		
		i=0;
		do{
			if(i > 0) {
				printf("A quantidade deve ser maior que zero e menor que 100. Tente novamente \n");
			}
			printf("Digite a quantidade: ");
			scanf("%d", &quantity);
		}while(quantity < 0 || quantity > 100);
		
				i= 0;
		 	do {
		 		if(i > 0) {
		 			printf("o valor digitado é menor que zero. Tente novamente \n");
				 }
		 		printf("Digite o valor do produto: ");
		 		scanf("%f", &productValue);
		 		
			}while(productValue < 0);
			
		printf("Esolha o tipo do produto: \n1 - Perecível\n2 - Não Perecível\n3 - Congelado \n");
		scanf("%d", &type);
		
		switch(type) {
			case 1:
				perecivel += quantity;
				perecivelTotalValue = productValue * quantity;
			break;
			case 2:
				naoPerecivel += quantity;
				naoPerecivelTotalValue = productValue * quantity;
			break;
			case 3: 
				congelado += quantity;
			break;
			default:
				printf("Valor digitado não encontrado. Tente novamente \n");	
			break;
			
		}
		

		totalQuantity += 1;
	}while(productCode != 0);
	
	printf("Produtos cadastrados %d \n", totalQuantity);
	printf("Valor de produtos pereciveis R$ %.2f \n", perecivelTotalValue);
	printf("Valor de produtos pereciveis R$ %.2f \n", naoPerecivelTotalValue);
	
		
	system("PAUSE");
}
