//taking input from the user usnig arrays:
#include<stdio.h>

int main(){
	int i;
	int a[i];
	
	for(i=0;i<5;++i){
		printf(">");
		scanf("%d", &a[i]);
	}
	for(i=0;i<5;++i){
		printf("%d", a[i]);
	}
	return 0;
}
............>
//Finding average of the inputted numbers:
#include<stdio.h>

int main(){
	int i;
	int a[i];
	int sum = 0;
	
	for(i=0;i<5;++i){
		printf(">");
		scanf("%d", &a[i]);
	}
	printf("Inputted are the following: ");
	for(i=0;i<5;++i){
		printf("%d \n", a[i]);
		sum = sum + a[i];
	}
	printf("Sum of the inputted arrays is %d \n", sum);
	printf("Average of the inputted arrays is %d", sum/i);
	return 0;
}
............>
