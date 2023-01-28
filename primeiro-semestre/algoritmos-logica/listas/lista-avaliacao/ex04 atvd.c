#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Portuguese");

	int wallHeight;
	int days = 0;
	int wallBuilded = 6;
	
	printf("Qual o tamanho do muro que deverá ser erguido? ");
	scanf("%d", &wallHeight);
	
	for(wallBuilded; wallBuilded<=wallHeight; wallBuilded += 6) {
		days = days + 1;
		printf("%d dia = %d construído\n", days, wallBuilded);
	}

	printf("Serão necesários %d dias para que o muro atinja a altura desejada. \n", days);
	system("PAUSE");
}
