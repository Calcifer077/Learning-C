#include<stdio.h>

int main(){
	int a[5];
	
	int *ptr = &a[0];
	int i;
	for(i=0;i<5;i++){
		printf("%d index: ",i+1);
		scanf("%d", (ptr + i));
	}
	for(i=0;i<5;i++){
		printf("%d index = %d \n", i+1, *(ptr+i));
	}
	return 0;
}
..........>
#include<stdio.h>

void printnum(int arr[], int n);
//void printnum(int *arr, int n); can also be used
int main(){
	int arr[]= {1,2,3,4,5,6};
	printnum(arr,6);
	return 0;
}
void printnum(int arr[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d \t", arr[i]);
	}
	printf("\n");
}
.........>
