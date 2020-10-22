 #include <stdio.h>

int main(){
	printf("Establece valores para a y b: \n");
	
	float a;
	printf("Introduce valor a: ");
	scanf("%f",&a);
	
	float b;
	printf("Introduce valor b: ");
	scanf("%f",&b);
	
	if(a<b){
		printf("El valor b es mayor al valor a.\n");
	}
	
	if(a>b){
		printf("El valor a es mayor al valor b. \n");
	}
	
	printf("Fin del programa");
	printf("\n");
	printf("\n");
	

	
}
