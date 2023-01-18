//Pointer are declared by using '*' in front of the variable name.
//They store the value of memory address of other variabe.
//It points to the same data type same as its own. Like int pointer will print memory address of only int type.
//TO print the memory address we use '&' in front of the variable name.

//From google>
int myAge = 43;     // An int variable
int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

// Output the value of myAge (43)
printf("%d\n", myAge);

// Output the memory address of myAge (0x7ffe5367e044)
printf("%p\n", &myAge);

// Output the memory address of myAge with the pointer (0x7ffe5367e044)
printf("%p\n", ptr);
.........>
#include<stdio.h>

int main(){
	int age = 10;
	int *ptr = &age;
	printf("age = %d \n", age); //prints the value of age
	printf("&age = %d  \n", &age); //prints the memory address of age
	printf("ptr = %d \n", ptr); //prints the memory address of age
	printf("*ptr = %d  \n", *ptr); //pritns the value of age
	return 0;
}
