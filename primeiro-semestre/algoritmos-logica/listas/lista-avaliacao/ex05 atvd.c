#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Portuguese");

	int athleteAge;
	
	printf("Digite a sua idade: ");
	scanf("%d", &athleteAge);
	
	if(athleteAge >= 10 && athleteAge <= 14) {
		printf("Voce se enxaixa na categoria: Infantil. \n");
	} else if(athleteAge >= 15 && athleteAge <= 17) {
		printf("Voce se enxaixa na categoria: Juvenil. \n");
	} else if(athleteAge >= 18 && athleteAge <= 25) {
		printf("Voce se enxaixa na categoria: Adulto. \n");
	} else {
		printf("O valor fornecido não se encaixa em nenhuma das categorias: Infantil, Juvenil ou Adulto \n");
	}
	system("PAUSE");
}
