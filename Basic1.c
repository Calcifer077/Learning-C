#include<stdio.h>

int main(){
	int a = 1, b = 2, c = 3;
	printf("%d \n", a);
	a = b+c;
	
	printf("%d \n", a);
	
	printf("%d", 3%2);
	printf("%d", -3%2);
	return 0;
}

..............>
#include<stdio.h>

int main(){
	printf("sum of 2 & 3 is : %d", 2+3); // if we were to use float format specfier answer would be 0.
	printf("sum of 2.0 & 3 is : %f", 2.0 + 3); // if we were to use integer format specifier answer wold be 0.
	printf("sum of 2.0 & 3.0 is : %f", 2.0 + 3.0); // if we were to ude integer specifir answer would be 0.
	return 0;
}

// relational operators
#include<stdio.h>

int main(){
	int a =4, b = 3; 
	printf("1.=%d \n", a==b); //0
	printf("2.=%d \n", a<b); //0
	printf("3.=%d \n", a>b); //1
	printf("4.=%d \n", a>a); //0
	printf("5.=%d \n", b<b); //0
	printf("6.=%d \n", a<=a); //1
	printf("7.=%d \n", a>=a); //1
	printf("8.=%d \n", a>=b); //1
	printf("9.=%d \n", a<=b); //0
	printf("10.=%d \n", a!=b); //1
	printf("11.=%d \n", b!=a); //1
	
	
	return 0;
}
//logical operators
#include<stdio.h>

int main(){
	int a =3, b = 4, c=5; 
	printf("1.=%d \n", a<b && a<c); //1
	printf("2.=%d \n", a<b && c<b); //0
	printf("3.=%d \n", a>b && a<c);//0
	printf("4.=%d \n", a>c && b>c);//0
	printf("5.=%d \n", a==b && c==c);//0
	printf("6.=%d \n", !(a<b && b<c));//0
	printf("7.=%d \n", !(a>b && b>c));//1
	printf("8.=%d \n", !(a<b || b<c));//0
	printf("9.=%d \n", !(a>b || b>c));//11	
	return 0;
}
//assignmet operators
#include<stdio.h>

int main(){
	int a = 10;
	a += 10;
	printf("1.= %d \n", a);//20
	a -=10;
	printf("2.= %d \n", a);//10
	a *=10;
	printf("3.= %d \n", a);//100
	a /=10;
	printf("4.= %d \n", a);//10
	a %=10;
	printf("1.= %d \n", a);//0
	return 0;
}
