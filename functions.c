//creating a basic function to print area of the rectangle.
#include<stdio.h>

int area(int a,int b);
int main(){
	int a,b;
	printf("Enter the value of length and breadth :");;
	scanf("%d%d", &a,&b);
	
	printf("The area of the rectangle is %d", area(a,b));
	return 0;
}
int area(int a,int b){
	return a*b;
}
....>
