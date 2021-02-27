#include<stdio.h>
#include<math.h>

int main(){
	float num1, num2, div;
	int quotient;
	
	printf("Input any 2 integer: ");
	scanf("%f %f", &num1, &num2);
	
	quotient = (int)num1 % (int)num2;
	
	printf("ADD = %.0f \n", num1 + num2);
	printf("MUL = %.0f \n", num1 * num2);
	if (quotient != 0){
		printf("DIV = %.1f\n", num1 / num2);
	} else {
		printf("DIV = %.0f \n", num1 / num2);
	}
	printf("SUB = %.0f \n", num1 - num2);
	
	return 0;
}
