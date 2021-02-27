#include<stdio.h>
#include<math.h>

int main(){
	int num, separate;
	
	printf("Input any integer: ");
	
	
	if (scanf("%d", &num) == 1){
		printf("Revised for %d is ", num);
		
		int newnum = num;
		while (newnum > 0){
			separate = num % 10;
			newnum = num /= 10;
			printf("%d", separate);
		}
	} else {
		printf("The inputed data is invalid.");
	}
	
	return 0;
}
