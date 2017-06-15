#include <stdio.h>
#include <stdlib.h>

float lado,area,perimetro;

main()
{
	printf ("Lado=");
	scanf ("%f", &lado);
	printf ("\n");
	
	area=lado*lado;
	perimetro=lado*4;
	
	printf ("El perimetro es: %.2f",perimetro);
	printf ("\n");
	printf ("El area es: %.2f", area );
	
}
