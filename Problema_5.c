 #include <stdio.h>
 #include <math.h>

int main(){
	printf("Queremos allar el area y el perimetro de un circulo : \n");
	printf("Pi se tomara como 3.1416 \n");
	float a = 3.1416;
	
	float b;
	printf("Introduce valor del radio: ");
	scanf("%f",&b);
	printf("\n");
	
	printf("Perimetro del circulo: %.2f\n", 2*a*b);
	printf("\n");
	
	printf("Area del circulo: %.2f\n", a*pow(b,2));
	printf("\n");

	printf("Fin del programa");
	printf("\n");
	printf("\n");
	
}
