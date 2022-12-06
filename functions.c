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
//creating the same upper program using different types of functions:
//Function with no arguments and no return values
//Function with no arguments and one return value
//Function with arguments and no return values
//Function with arguments and one return value
.........>
//Function with no arguments and no return values
#include<stdio.h>

void area();

int main(){
	area();//as we saw here we didn't give any arguments here.
	return 0;
}
void area(){
	int a,b,c;
	printf("Enter the side of the rectangle:\n");
	scanf("%d%d", &a,&b);
	c = a*b;
	printf("Area of the square is %d", c);
}
..........>
//Function with no arguments and one return value
#include<stdio.h>

int area();//we didnt give any arguments here.

int main(){
	int c;
	c = area();
	printf("The area of the rectagle is %d", c);
	return 0;
}

int area(){
	int a,b,c;
	printf("Enter the side of the rectangle: ");
	scanf("%d%d", &a,&b);
	c = a*b;
	return c;//here we returned value for area.
}
.........>
//Function with arguments and no return values
#include<stdio.h>

void area(int a, int b);

int main(){
	int a,b;
	printf("ENter the sides of the rectangle: ");
	scanf("%d%d", &a,&b);
	area(a,b);
	return 0;
}

void area(int a, int b){
	int c;
	c = a*b;
	printf("The area of the rectangle is %d", c);
}
..........>
//Function with arguments and one return value
#include<stdio.h>

int area(int a, int b);

int main(){
	int a,b;
	printf("ENter the sides of the rectangle: ");
	scanf("%d%d", &a,&b);
	area(a,b);
	printf("area of the rectangle is %d", area(a,b));
	return 0;
}

int area(int a, int b){
	int c;
	c = a*b;
	return c;
}
.......>
