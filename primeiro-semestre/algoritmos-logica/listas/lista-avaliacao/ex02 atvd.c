#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Portuguese");
	
	float grade, lowestGrade, highestGrade;
	float totalUnderAverage = 0;
	float totalAboveAverage = 0;
	int i;
	int iUnderAverage = 0;
	int iAboveAverage = 0;
	printf("Digite suas notas: \n");
	
	for(i = 1; i<=10; i++) {
		printf("Nota %d: ", i);
		scanf("%f", &grade);
		if(i == 1) {
			lowestGrade = grade;
		}
		
		if(grade > highestGrade) {
			highestGrade = grade;
		}
		
		if(lowestGrade > grade) {
			lowestGrade = grade;
		}
		
		if(grade >= 6 && grade <= 10) {
			totalAboveAverage = totalAboveAverage + grade;
			iAboveAverage += 1;
		}
		else if (grade >= 0 && grade < 6) {
			totalUnderAverage = totalUnderAverage + grade;
			iUnderAverage += 1;
		}
	}
	totalUnderAverage= totalUnderAverage / iUnderAverage;
	totalAboveAverage= totalAboveAverage / iAboveAverage;

	printf("A menor nota é: %.2f \n", lowestGrade);
	printf("A maior nota é: %.2f \n", highestGrade);
	
	printf("A soma da média das menores notas é de: %.2f \n", totalUnderAverage);
	printf("A soma da média das maiores notas é de: %.2f \n", totalAboveAverage);

	system("PAUSE");
}
