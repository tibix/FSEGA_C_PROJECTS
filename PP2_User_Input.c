#include <stdio.h>

int main(){

	char raspuns;
	char nume[30];
	char prenume[30];
	float inaltime;
	int virsta;
	double salariu;

	// colecteaza numele
	printf("Completeaza numele tau: ");
	scanf("%s", nume);

	// colecteaza prenumele
	printf("Introdu prenumele tau: ");
	scanf("%s", prenume);

	// colecteaza virsta
	printf("Introdu virsta curenta (partea intreaga): ");
	scanf("%d", &virsta);

	// colecteaza inaltimea
	printf("Introdu inaltimea (m.cm): ");
	scanf("%f", &inaltime);

	//colecteaza salariul
	printf("Introdu salariul lunar (cu maxim doua zecimale): ");
	scanf("%lf", &salariu);

	// prezinta datale in terminal:
	printf("\nMultumim ca ai completat acest formular!\n");
	printf("Te rugam sa verifici corectitudinea datelor:\n");
	printf("\tNume     : %s\n", nume);
	printf("\tPrenume  : %s\n", prenume);
	printf("\tVirsta   : %d\n", virsta);
	printf("\tInaltime : %.2f\n", inaltime);
	printf("\tSalariu  : %.2lf\n", salariu);
	printf("\n");

	printf("Sunt corecte infromatiile? D (DA) sau N (NU): ");
	scanf(" %c", &raspuns);

	switch(raspuns){

		case 'D':
			printf("Datele au fost salvate cu succes!\n");
			break;

		case 'N':
			printf("Eroare de sistem! Te rugam sa incerci mai tarziu!\n");
			break;

		default:
			printf("Raspuns invalid! Te rugam sa incerci mai tarziu!\n");
	}

	return 0;
}
