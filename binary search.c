#include<stdio.h>

int main(){
	int i;
	int a[10];
	
	for(i=0;i<7;i++){
		printf("Enter an sorted array: ");
		scanf("%d", &a[i]);
	}
	int l = 6;
	int f = 0;
	int flag = 0;
	int s;
	printf("Enter the element you want to serch :");
	scanf("%d", &s);
	int m;
	while(f<=l){
		m = (f + l)/2;
		if(s == a[m]){
			printf("Element found at %d", m+1);
			flag = 1;
			break;
		}
		else if(s > a[m]){
			f = m + 1;
		}
		else{
			l = m - 1;
		}
	}
	return 0; 
}
