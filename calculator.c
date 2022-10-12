#include<stdio.h>

int main() {
	char c;
	printf("enter your choice : \n");
	scanf("%c", &c);
	
	int a,b;
	switch(c){
		case('+'):
			printf("Enter the two operands : \n");
			scanf("%d%d", &a,&b);
			printf("sum is : %d", a+b);
			break;
		case('-'):
			printf("Enter two operands : \n");
			scanf("%d%d", &a,&b);
			printf("Subtraction is : %d", a-b);
			break;
		case('*'):
			printf("enter two operands : \n");
			scanf("%d%d", &a,&b);
			printf("Product is : %d", a *b);
			break;
		case('/'):
			printf("enter two operands : \n");
			scanf("%d%d", &a,&b);
			printf("Division is : %d", a/b);
			break;
		case('%'):
			printf("Enter two operands : \n");
			scanf("%d%d", &a,&b);
			printf("remainder is : %d", a%b);
			break;
		default:
			printf("Sorry i cant understand :(");
	}
	return 0;
}
