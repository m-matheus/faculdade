#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    
	int num[10], num2[10], i;
	
	printf("Digite 10 n�meros: \n");
    for(i=0;i<=9;i++)
    	scanf("%i", &num[i]);
	for(i=0;i<=9;i++) {
		num2[i] = num[i] * num[i];
		printf("O n�mero digitado � %d e o seu quadrado � %d\n", num[i], num2[i]);
	}
    

    return 0;
}
