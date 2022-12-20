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
