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
//finding the greatest of numbers using arrays:
#include<stdio.h>

int main(){
	int i;
	int a[100];
	int n;
	printf("Enter a number upto which this program will run(1 to 10): ");
	scanf("%d", &n);
	
	for(i=1;i<n;++i){
		printf("Enter number_%d: ",i);
		scanf("%d", &a[i]);
	}
	for(i=1;i<n;++i){
		if(a[0] < a[i]){
			a[0]=a[i];
		}
	}
	printf("The largst number is %d", a[0]);
	
	return 0;
}
..........>
//to search for a particular number in an array:
