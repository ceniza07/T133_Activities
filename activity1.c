#include <stdio.h>
#include <math.h>

int main(){
	int age;
	char name;
	
	printf("Name: ");
	scanf("%[^\n]s", &name);
	printf("Age: ");
	
	if (scanf("%d", &age) == 1){
		if (age >=18){
			printf("You are eligible for voting.");
		} else {
			printf("You are not eligible for voting.");
		}
	} else{
		printf("Invalid Age, Please Try Again.");
	}
	
	return 0;
}
