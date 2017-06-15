#include <stdio.h>
#include <stdlib.h>

float lado,DM,dm,area,perimetro;

main()
{
	printf ("Lado=");
	scanf ("%f", &lado);
	printf ("Diagonal mayor=");
	scanf ("%f", &DM);
	printf ("Diagonal menor=");
	scanf ("%f", &dm);
	printf ("\n");
	
	area=DM*dm;
	perimetro=lado*4;
	
	printf ("El perimetro es: %.2f",perimetro);
	printf ("\n");
	printf ("El area es: %.2f", area );
}
