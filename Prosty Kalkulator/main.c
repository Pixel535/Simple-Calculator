#include <stdio.h>

int main()
{
	char z;
	float l1, l2, wynik;
	printf("Prosty kalkulator");
	printf("\nWprowadz liczbe, znak dzialania {+,-,*,/}, liczbe:\n");
	scanf("%f %c %f",&l1,&z,&l2);

	switch(z)
	{
		case '+':
			wynik = l1 + l2;
			printf("\nSuma = %.2f", wynik);
			break;
		case '-':
			wynik = l1 - l2;
			printf("\nRoznica = %.2f",wynik);
			break;
		case '*':
			wynik = l1 * l2;
			printf("\nIloczyn = %.2f",wynik);
			break;
		case '/':
			if (l2==0.0)
			{
				printf("\nNie dziel przez zero!");
				break;
			}
				else
				{
					wynik = l1 / l2;
					printf("\nIloraz = %.2f",wynik);
				}
				break;
		default :
			printf("\nNiedozwolony znak dzialania!");
	}
	return 0;
}
