#include<stdio.h>
#include<math.h>

int main(){
	int num;
	
	printf("Input any integer: ");
	int check = scanf("%d", &num);
	
	switch(check == 1){
		case 1:
			switch(num > 0){
				case 1:
					printf("The integer is a positive number");
					break;
				default:
					switch (num == 0){
						case 1:
							printf("The integer is zero");
							break;
						default:
							printf("The integer is a negative number");
						break;
					}
					break;
			}
			break;
		default:
			printf("The inputed data is invalid");
			break;
	}
	
	return 0;
}
