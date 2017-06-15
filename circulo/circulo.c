#include <stdio.h>
#include <stdlib.h>

float pi,radio,diametro,area,circunferencia;

main()
{
	printf ("Radio=");
	scanf ("%f", &radio);
	printf ("Diametro=");
	scanf ("%f", &diametro);
	printf ("\n");
	
	pi=3.141592;
	area=pi*pow(radio,2);
	circunferencia=pi*diametro;
	
	printf ("La circunferencia es: %.2f",circunferencia);
	printf ("\n");
	printf ("El area es: %.2f", area );
	
}
