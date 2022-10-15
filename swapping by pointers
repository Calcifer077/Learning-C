#include<stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main(){
		int a = 3, b= 5;
		swap(a,b); // it doeant cahnge the end result
		_swap(&a,&b); //  it does. & is important as it print the values of that particular location.
		printf("a = %d & b = %d", a ,b);
		
		return 0;
}
// call by reference
void _swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

// call by value
void swap(int a, int b){
	int t = a;
	a = b;
	b = t;
	printf("a = %d & b = %d \n", a,b); 
}
