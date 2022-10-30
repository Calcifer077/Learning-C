#include<stdio.h>

int main(){
	int age;
	printf("ENter your age : ");
	scanf("%d", &age);
	
	if(age>=18){
		printf("you are eligible for voting.");
	}if(age<18){
		printf("You are not eligible for voting.");
	}
	return 0;
}
.................>
#include<stdio.h>

int main(){
	int age;
	printf("ENter your age : ");
	scanf("%d", &age);
	
	if(age>=18){
		printf("you are eligible for voting.");
	}else{
		printf("You are not eligible for voting.");
	}
	return 0;
}
.................>
#include<stdio.h>

int main(){
	int a;
	printf("Enter a number : ");
	scanf("%d", &a);
	
	if(a%2==0){
		printf("you entered a even number.");
	}else{
		printf("you entered a odd number.");
	}
	return 0;
}
.................>
#include<stdio.h>

int main(){
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	
	if(age >=18){
		printf("You are an adult. ");
	}else if(age >12 && age <18){
		printf("YOU are an teenager. ");
	}else{
		printf("YOu are a child.");
	}
	return 0;
}
.................>
#include<stdio.h>

int main(){
	int a;
	printf("Enter any  number: ");
	scanf("%d", &a);
	
	int b =7;
	
	a == b ? printf("you are lucky \n") : printf("you are not lucky \n");
	
	return 0;
}
.................>
