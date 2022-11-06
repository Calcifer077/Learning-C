#include<stdio.h>

int main(){
	int i,j;
	for(i =1;i<=5;i++){
		for(j = 1; j<=5;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
#forms a square of stars
..............>
#include<stdio.h>

int main(){
	int i,j;
	for(i =1;i<=5;i++){
		for(j = 1; j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
#forms a triangle sith one element in the first row the incresing one by one.
.................>
#include<stdio.h>

int main(){
	int i,j;
	for(i = 1;i<=5;i++){
		for(j = 5; j>=i;j--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
#forms a triangle with 5 stars at top and then decreasing one by one.
..................>
#include<stdio.h>

int main(){
	int i, j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
#forms a square of numbers fromm 1 to 5.
..............>
#include<stdio.h>

int main(){
	int i, j;
	for(i=5;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}
#forms a triangle in which frist row contains 1 to 5 and then the next row contains one less element and so on.
...............>
#include<stdio.h>

int main(){
	int i,j;
	for(i=1;i<=2;i++){
		printf("\n");
		for(j=1;j<=5;j++){
			if(j==2){
				continue;
			}
			if(j==5){
				continue;
			}
			printf("%d", j);
		}
		if(i==2){
			continue;
		}
		if(i==5){
			continue;
		}
	}
	return 0;
}
#prints a rectagnle of 134 in the first row and 134 in the second row.
