//Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure.
//Unlike an array, a structure can contain many different data types (int, float, char, etc.).
//In the below program we inputted information if two people usnig structures and printed them.
#include<stdio.h>
#include<string.h>
struct student{
	char name[50];
	int rollno;
	int age;
}s1;

int main(){
	strcpy(s1.name,"Mahesh");
	s1.rollno = 1;
	s1.age = 18;
	printf("name 1 = %s \nrollno1 = %d \nage1 = %d\n", s1.name, s1.rollno, s1.age);	
	
	strcpy(s1.name, "ABC");
	s1.rollno = 2;
	s1.age = 20;
	printf("name 2 = %s \nrollno2 = %d \nage2 = %d \n", s1.name, s1.rollno, s1.age);
	return 0;
}
.......>
//dong the above thing using pointers
#include<stdio.h>
#include<string.h>
struct student{
	char name[50];
	int rollno;
	int age;
}s1;

int main(){
	struct student *p = &s1;
	strcpy(p->name,"Mahesh");
	p->rollno = 1;
	p->age = 18;
	printf("name 1 = %s \nrollno1 = %d \nage1 = %d\n", p->name, p->rollno, p->age);	
	
	strcpy(p->name, "ABC");
	p->rollno = 2;
	p->age = 20;
	printf("name 2 = %s \nrollno2 = %d \nage2 = %d \n", p->name, p->rollno, p->age);
	return 0;
}
........>
//taking inputs of 5 students and printing it
#include<stdio.h>
#include<string.h>
struct student{
	char name[50];
	int rollno;
	int age;
}s[5];

int main(){
	int i;
	printf("Enter information of the student: \n");
	
	for(i=0;i<5;i++){
		printf("Enter name of student_%d_:",i+1);
		scanf("%s", s[i].name);
		printf("ENter roll no_%d_:", i+1);
		scanf("%d", &s[i].rollno);
		printf("Enter age _%d_:", i+1);
		scanf("%d", &s[i].age);
	}
	for(i=0;i<5;i++){
		printf("Student %d name : %s \n",i+1, s[i].name);
		printf("Student %d roll no : %d \n",i+1, s[i].rollno);
		printf("Student %d age : %d \n",i+1, s[i].age);
	}
	return 0;
}
......>
//usnig nested structures
#include<stdio.h>
#include<string.h>

struct address{
	char city[50];
	int pin;
	char phone[50];
};
struct employ{
	char name[50];
	struct address a;
};
int main(){
	struct employ e;
	printf("Enter the name of the employ: ");
	scanf("%s", e.name);
	printf("Enter the city of the employ: ");
	scanf("%s", e.a.city);
	printf("enter the pin of the employ:  ");
	scanf("%d", &e.a.pin);
	printf("Enter the phone of the employ: ");
	scanf("%s", e.a.phone);
	
	printf("Name of the employ %s \n", e.name);
	printf("City of the employ %s \n", e.a.city);
	printf("Pin of the employ %d \n", e.a.pin);
	printf("phone of the employ %s \n", e.a.phone);
	return 0;
}
..........>
//nested structures and loops.
#include<stdio.h>
#include<string.h>

struct address{
	char city[50];
	int pin;
	char phone[50];
};
struct employ{
	char name[50];
	struct address a[5];
};
int main(){
	struct employ e[5];
	int i;
	for(i=0;i<3;i++){
		printf("Enter the name of %d employ: ", i+1);
		scanf("%s", e[i].name);
		printf("Enter the city of %d employ: ", i+1);
		scanf("%s", e[i].a[i].city);
		printf("enter the pin of %d employ:  ", i+1);
		scanf("%d", &e[i].a[i].pin);
		printf("Enter the phone of %d employ: ", i+1);
		scanf("%s", e[i].a[i].phone);
	}
	for(i=0;i<3;i++){
		printf("Name of %d employ %s \n", i+1, e[i].name);
		printf("City of %d employ %s \n", i+1, e[i].a[i].city);
		printf("Pin of %d employ %d \n", i+1, e[i].a[i].pin);
		printf("phone of %d employ %s \n", i+1, e[i].a[i].phone);	
	}
	return 0;
}
......>
//using functions and structures
#include<stdio.h>
#include<string.h>
struct student{
	char name[50];
	int age;
	int rollno;
}e;
void funct(struct student e);
int main(){
	//'struct student e' can also be used here in place of above after the closing of the structure.
	funct(e);
	return 0;
}
void funct(struct student e){
	printf("Enter name of the student : ");
	scanf("%s", e.name);
	printf("Enter age of the student : ");
	scanf("%d", &e.age);
	printf("Enter rollno of the student : ");
	scanf("%d", &e.rollno);
	printf("NAme of the student is : %s \n", e.name);
	printf("Age of the student is : %d \n", e.age);
	printf("Rollno of the student is : %d \n", e.rollno);
}
........>
//using functions pointers and struuctures.
#include<stdio.h>
#include<string.h>
struct student{
	char name[50];
	int age;
	int rollno;
}e;
void funct(struct student *e);
int main(){
	funct(&e);
	return 0;
}
void funct(struct student *e){
	printf("Enter name of the student : ");
	scanf("%s", e->name);
	printf("Enter age of the student : ");
	scanf("%d", &e->age);
	printf("Enter rollno of the student : ");
	scanf("%d", &e->rollno);
	printf("NAme of the student is : %s \n", e->name);
	printf("Age of the student is : %d \n", e->age);
	printf("Rollno of the student is : %d \n", e->rollno);
}
........>
