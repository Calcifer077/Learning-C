//taking input from the user using array only.
#include<stdio.h>

int main(){
	int marks[3];// while printing values donot use more value than assigned.
	printf("Enter phy : ");
	scanf("%d", &marks[0]);
	
	printf("Enter chem : ");
	scanf("%d", &marks[1]);
	
	printf("Enter maths: ");
	scanf("%d", &marks[2]);
	
	printf("phy = %d, chem = %d, maths = %d", marks[0], marks[1], marks[2]);
	
	
	
	return 0;
}
........>
//taking input from the user usnig arrays and loops:
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
//taking input from the user using array and pointers:
#include<stdio.h>

int main(){
	int index[5];
	int i;
	
	int *ptr = &index[0];
	for(i=0;i<5;i++){
		printf("%d index : ", i);
		scanf("%d", (ptr + i));
	}	
	
	for(i=0;i<5;i++){
		printf("%d index = %d\n", i, *(ptr + i));
	}
	return 0;
}
...............>
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
//finding the greatest of numbers using arrays:||kind of same below.
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
#include<stdio.h>

int main(){
	int i,n;
	int arr[10];
	printf("Enter the number of elements in your array: ");
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		printf("Enter element no._%d_:", i+1);
		scanf("%d", &arr[i]);
	}
	int s;
	printf("Enter the element you want to search: ");
	scanf("%d", &s);
	
	for(i=0;i<n;i++){
		if(arr[i]==s){
			printf("%d found at %d", s,i+1);
			break;
		}
	}
	return 0;
}
.........>
//multiplication of array:
#include<stdio.h>

int main(){
	int a[10][10], b[10][10], c[10][10];
	int m1,n1,m2,n2;
	int i,j,s,k;
	printf("Enter the number of rows and columns for first matrix: ");
	scanf("%d%d", &m1,&n1);
	
	printf("Enter the number of rowws and columns for the second matrix: ");
	scanf("%d%d", &m2,&n2);
	
	if(n1!=m2){
		printf("these matrix cant be multiplied. ");
	}
	if(n1==m2){
		printf("Enter elements for the matrix 1: ");
		for(i=0;i<m1;i++){
			for(j=0;j<n1;j++){
				scanf("%d", &a[i][j]);
			}
		}
		printf("Enter elements for the matrix 2: ");
		for(i=0;i<m2;i++){
			for(j=0;j<n2;j++){
				scanf("%d", &b[i][j]);
			}
		}
		for(i=0;i<m1;i++){
			for(j=0;j<n2;j++){
				s = 0;
				for(k=0;k<n1;k++){
					s = s + (a[i][k]*b[k][j]);
					c[i][j]=s;
				}
			}
		}
		printf("product of matrix is: \n");
		for(i=0;i<m1;i++){
			for(j=0;j<n2;j++){
				printf("%d \t", c[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
.........>
//Write a C program to print all negative elements in an array.
#include<Stdio.h>

int main(){
	int a[10];
	printf("ENter the elements of the array: \n");
	int i;
	for(i=0;i<10;i++){
		printf("Element _%d_",i+1);
		scanf("%d", &a[i]);
	}
	for(i=0;i<10;i++){
		if(a[i]<0){
			printf("%d", a[i]);
		}
		else{
			continue;
		}
	}
	return 0;
}
......>
//Write a C program to find sum of all array elements. 
#include<Stdio.h>

int main(){
	int a[100];
	int n;
	printf("Enter the elements of your array: ");
	scanf("%d", &n);
	printf("ENter the elements of the array: \n");
	int i, sum = 0;
	for(i=0;i<n;i++){
		printf("Element _%d_",i+1);
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++){
		sum = sum + a[i];
	}
	printf("sum is %d", sum);
	return 0;
}
.........>
//Write a C program to find maximum and minimum element in an array.
#include<Stdio.h>

int main(){
	int a[100];
	int n;
	printf("Enter the elements of your array: ");
	scanf("%d", &n);
	printf("ENter the elements of the array: \n");
	int i, sum = 0;
	for(i=0;i<n;i++){
		printf("Element _%d_",i+1);
		scanf("%d", &a[i]);
	}
	int max = a[0];
	int min = a[0];
	for(i=1;i<n;i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	for(i=1;i<n;i++){
		if(a[i] < min){
			min = a[i];
		}
	}
	printf("Max = %d \n", max);
	printf("Min = %d \n", min);
	return 0;
}
........>
//adding two matrixes
#include<Stdio.h>

int main(){
	int a[100][100];
	int b[100][100];
	int sum[100][100];
	int m1,m2,n1,n2;
	printf("enter the rows and columns in your first matrix: ");
	scanf("%d%d", &m1,&m2);
	printf("enter the elements in your first  matrix:\n");
	int i,j;
	for(i=0;i<m1;i++){
		for(j=0;j<m2;j++){
			printf("_%d_%d_:", i+1,j+1);
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("enter the rows and columns in our second matrix: ");
	scanf("%d%d", &n1, &n2);
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			printf("_%d_%d_:", i+1,j+1);
			scanf("%d", &b[i][j]);
		}
	}
	for(i=0;i<m1;i++){
		for(j=0;j<m2;j++){
			sum[i][j] = a[i][j]+b[i][j];
			printf(" %d ", sum[i][j]);
		}
		printf("\n");
	}
	
	return 0;	
}
.........>
//sum of the elements of the diagonal only.
#include<Stdio.h>

int main(){
	int a[100][100];
	int b[100][100];
	int sum[100][100];
	int n = 3;
	int i,j;
	printf("Enter the elements in your first matrix:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("_%d_%d_:", i+1,j+1);
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter the elements in your second matrix:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("_%d_%d_:", i+1,j+1);
			scanf("%d", &b[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				sum[i][j] = a[i][j] + b[i][j];
				printf(" %d ", sum[i][j]);
			}
			printf("\n");
		}
	}
	return 0;	
}
.........>
