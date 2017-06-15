#include <stdio.h>
#include <stdlib.h>

float base,altura,lado,area,perimetro;

main()
{
	printf ("Base=");
	scanf ("%f",&base);
	printf ("Altura=");
	scanf ("%f", &altura);
	printf ("Lado=");
	scanf ("%f", &lado);
	printf ("\n");
	
	perimetro=lado+lado+lado;
	area=(base*altura)/2;
	
	printf ("El perimetro es: %.2f",perimetro);
	printf ("\n");
	printf ("El area es: %.2f", area );
	
}
