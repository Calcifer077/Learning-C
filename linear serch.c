#include<stdio.h>

int main(){
	int a[10];
	int i;
	for(i=0;i<6;i++){
		printf("Enter _%d_ element: ", i+1);
		scanf("%d", &a[i]);
	}
	int s;
	printf("Enter the element you want to serach: ");
	scanf("%d", &s);
	
	for(i=0;i<6;i++){
		if(a[i]==s){
			printf("Enter element found at %d \n", i+1);
		}
	}
	return 0;
}
