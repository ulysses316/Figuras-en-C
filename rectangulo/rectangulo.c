#include <stdio.h>
#include <stdlib.h>

float area,perimetro,base,altura;

main()
{

printf ("Base=");
scanf ("%f", &base);
printf ("Altura=");
scanf ("%f", &altura);
printf ("\n");

area=base*altura;
perimetro=base+base+altura+altura;

printf ("El perimetro es: %.2f",perimetro);
printf ("\n");
printf ("El area es: %.2f", area );

}
