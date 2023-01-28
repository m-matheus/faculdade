#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Portuguese");

	float marioSalary = 1500;
	float rodrigoSalary = 1100;
	int anos = 0;
	
	while(marioSalary > rodrigoSalary) {
		anos += 1;
		marioSalary = marioSalary + marioSalary * 0.1;
		rodrigoSalary = rodrigoSalary + rodrigoSalary * 0.2;
		
		printf("%d - Salário de Mario = R$ %.2f \n", anos, marioSalary);
		printf("%d - Salário de Rodrigo = R$ %.2f \n", anos, rodrigoSalary);
		printf("\n");
	}
	
	printf("Serão necessários %d anos para que Rodrigo ultrapasse o salário de Mario \n", anos);

	system("PAUSE");
}
