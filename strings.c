//taking inputs in strings using gets.
#include<stdio.h>

int main(){
	char a[10];
	printf("Enter an string:");
	gets(a);
	printf("You entered %s", a); 
	return 0;
}
........>
// using puts function in c to get the output.
#include<string.h>

int main(){
	char a[10];
	printf("Enter your name: ");
	scanf("%s", &a);
	
	puts(a);
	return 0;
}
......>
#include<string.h>

int main(){
	char a[10] = "HELLO";
	
	printf("THe given string is %s", a);
	return 0;
}
........>
#include<string.h>

int main(){
	char a[10] = {'h','e','l','l','o','\0'};
	
	printf("THe given string is %s", a);
	return 0;
}
.........>
//using different functions on strings
//strrev- it basically inverses the string
#include<stdio.h>
#include<string.h>

int main(){
	char a[100];
	printf("Enter a string: ");
	scanf("%s", &a);
	
	printf("The Reverse of the string is %s", strrev(a));
	return 0;
}
.......>
//strlen- it tells the length of the string.
#include<stdio.h>
#include<string.h>

int main(){
	char a[100];
	printf("Enter a string: ");
	scanf("%s", &a);
	
	printf("THe length of the given string is %d", strlen(a));
	return 0;
}
.........>
//strcat -  this function addes one string to the last of another string.
//the target variable will be the one that is written in the first place.
#include<stdio.h>
#include<string.h>

int main(){
	char a[100];
	printf("Enter a string: ");
	scanf("%s", &a);
	
	char b[100];
	printf("Enter another string: ");
	scanf("%s", &b);
	printf("after concatenation the srings will be\n %s \n", strcat(a, b));
	printf("%s \n", a);
	
	return 0;
}
//strcpy- it copies one string to the other.
#include<stdio.h>
#include<string.h>

int main(){
	char a[100];
	printf("Enter a string: ");
	scanf("%s", &a);
	
	char b[100];
	printf("Enter another string: ");
	scanf("%s", &b);
	printf("after copying the srings will be\n %s \n", strcpy(b,a));
	printf("%s \n", a);
	
	return 0;
}
........>
