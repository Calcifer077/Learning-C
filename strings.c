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
