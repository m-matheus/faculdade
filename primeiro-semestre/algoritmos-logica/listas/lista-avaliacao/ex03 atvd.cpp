#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <math.h>

main()
{
setlocale(LC_ALL, "Portuguese");

int ano, num=2018, idade=-1;

printf("Qual o ano do seu nascimento? ");
scanf("%d", &ano);

do
{
	printf("%d ", num);
	num--;
	idade++;
}
while (num>=ano);
printf("\n\n");
printf("A sua idade é: %d\n\n", idade);

system("Pause");
return(0);
}

