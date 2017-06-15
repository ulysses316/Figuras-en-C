#include <stdio.h>
#include <stdlib.h>

float area,perimetro,circunferencia,base,altura,lado,DM,dm,pi,radio,diametro,BM,bm;
int opcion;

main()
{
	printf ("1....Triangulo\n");
	printf ("2....Cuadrado\n");
	printf ("3....Rectangulo\n");
	printf ("4....Rombo\n");
	printf ("5....Trapecio\n");
	printf ("6....Circulo\n\n");
	printf ("Eligue una figura: ");
	scanf ("%d",&opcion);
	printf ("\n\n");
	
	switch(opcion){
		   case 1: 
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
	       break;
	       
	       case 2:
	       	printf ("Lado=");
	        scanf ("%f", &lado);
	        printf ("\n");
	
          	area=lado*lado;
         	perimetro=lado*4;
 	
        	printf ("El perimetro es: %.2f",perimetro);
	        printf ("\n");
        	printf ("El area es: %.2f", area );
        	break;
        	
        	case 3:
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
            break;
            
            case 4:
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
	        break;
	        
	        case 5:
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
          	break;
          	
          	case 6:
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
          	break;
	}
	getch();
	return (0);
}
