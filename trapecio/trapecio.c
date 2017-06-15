#include <stdio.h>
#include <stdlib.h>

float BM,bm,altura,lado,area,perimetro;

main()
{
	printf ("Lado=");
	scanf ("%f", &lado);
	printf ("Base mayor=");
	scanf ("%f", &BM);
	printf ("Base menor=");
	scanf ("%f", &bm);
	printf ("altura=");
	scanf ("%f", &altura);
	printf ("\n");
	
	area=altura*(BM*bm)/2;
	perimetro=BM+bm+lado+lado;
	
	printf ("El perimetro es: %.2f",perimetro);
	printf ("\n");
	printf ("El area es: %.2f", area );
	
}
