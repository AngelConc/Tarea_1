 #include <stdio.h>
 #include <math.h>

int main(){
	printf("Supongase que se quiere encontrar las raices del polinomio con forma ax^2 + bx + c = 0: \n");
	
	float a;
	printf("Introduce valor de a: ");
	scanf("%f",&a);
	
	float b;
	printf("Introduce valor de b: ");
	scanf("%f",&b);
	
	float c;
	printf("Introduce valor de c: ");
	scanf("%f",&c);
	
	printf("El valor de x1 seria: %.2f\n", -(b) + (sqrt(pow(b,2)-(4*a*c)))/2*a);
	printf("\n");
	
	printf("El valor de x1 seria: %.2f\n", -(b) - (sqrt(pow(b,2)-(4*a*c)))/2*a);
	printf("\n");

	printf("Fin del programa");
	printf("\n");
	printf("\n");
	
}
