#include <stdio.h>

int main(){
	int lower,upper,step;
	float celsius,fahr;

	lower = 0;
	upper = 100;
	step = 10;

	celsius = lower;

	printf("Celsius\t\tFahrenheit\n");

	while(celsius <= upper) {
		fahr = (celsius+32.0) / (5.0/9.0);
		printf("%-3.0f\t\t%4.0f\n", celsius, fahr);
		celsius += step;
	}

	return 0;
}
