#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Portuguese");

	float grades[5], lowestGrade, highestGrade, gradesAboveAverage;
	float totalGrades = 0;
	float totalGradesAverage = 0;
	int i = 1;
	
	for(i; i<=5; i++) {
		printf("Nota %d: ", i);
		scanf("%f", &grades[i]);
		totalGrades += grades[i];
		
		if(i == 1) {
			lowestGrade = grades[i];
		}
		
		if(lowestGrade > grades[i]) {
			lowestGrade = grades[i];
		}
		
		if(highestGrade < grades[i]) {
			highestGrade = grades[i];
		}
	}
	
	totalGradesAverage = totalGrades / 5;

	i=1;
	for(i; i<=5; i++) {
		if(grades[i] > totalGradesAverage) {
			gradesAboveAverage += 1;
		}
	}
	
	printf("A maior nota �: %.f \n", highestGrade);
	printf("A menor nota �: %.f \n", lowestGrade);
	printf("M�dia das notas: %.f \n", totalGradesAverage);
	printf("Quantidade de notas acima da m�dia %.f \n", gradesAboveAverage);

	system("PAUSE");
}
