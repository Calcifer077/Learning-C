//using switch statement to execute all of the functions done on strings.c
#include<stdio.h>
#include<string.h>

int main(){
	int z;
	printf("Enter\n'1.'string length.\n'2.'Reversing a string.\n'3.'String Concantation.\n'4.'String copy.\n'5.'String Upper case\n'6.'String lower case.\n'7.'");
	scanf("%d", &z);
	char a[100];
	char b[100];
	int i =0;
	printf("Enter a string: ");
	scanf("%s", &a);
	switch(z){
		case 1:
			printf("The length of the inputted string is :%d", strlen(a));
			break;
		case 2:
			printf("Inputted string is %s", a);
			printf("The reverse of the inputted string is %s", strrev(a));
			break;
		case 3:
			printf("Enter another string: ");
			scanf("%s", &b);
			printf("after concatenation the string will be: \n");
			printf("%s \n", strcat(a,b));
			break;
		case 4:
			printf("Enter another string: ");
			scanf("%s", &b);
			printf("After copying the second string will be = %s \n", strcpy(b,a));
			printf("First string = %s \n", a);
			break;
		case 5:
			while(a[i] != '\0'){
				putchar(toupper(a[i]));
				++i;
			}
			break; 
		case 6:
			while(a[i]='\0'){
				putchar(tolower(a[i]));
				++i;
			}
			break;
		case 7:
			printf("Enter another string: ");
			scanf("%s", &b);
			printf("> %d \n", strcmp(a,b));
		default:
			printf("Nothing found.\n");
	}
	return 0;
}
........>
