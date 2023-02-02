#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    
	int vet[10], i, soma=0;
	
	printf("Digite 10 números: \n");
    for(i=0;i<=9;i++) {
		scanf("%i", &vet[i]);
		soma= soma + vet[i];
		}
	for(i=0;i<=9;i++) {
		printf("%i\t", vet[i]);
	}
    printf("\nTotal= %d\n", soma);

    return 0;
}
