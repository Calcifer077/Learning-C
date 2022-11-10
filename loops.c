//takong input fro the user until the user enter 0:
#include<stdio.h>

int main(){
	int i;
	
	for(i = 1;;i++){
		printf("Enter a number: ");
		scanf("%d", &i);
		if(i == 0){
      printf("You have exitted the loop.");
			break;
		}
	}
	return 0;
}
.........>
//taking input from the user until the user enters a odd number:
#include<stdio.h>

int main(){
	int i;
	
	for(i = 1;;i++){
		printf("Enter a number: ");
		scanf("%d", &i);
		if(i %2 != 0){
			printf("You have exitted the loop.");
			break;
		}
		
	}
	return 0;
}
........>
//to print the numbers from 1 to 50 without printing odd numbers:
#include<stdio.h>

int main(){
	int i;
	for(i=1;i<=50;i++){
		if(i%2!=0){
			continue;
		}
		printf("%d \n",i);
	}
	return 0;
}
...........>
