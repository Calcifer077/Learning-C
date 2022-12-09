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
#include<stdio.h>

int odd(int a[], int n);

int main(){
	int n;
	printf("enter the number of elements in your array: ");
	scanf("%d", &n);
	int a[n];
	printf("enter the elements of your array: ");
	int i;
	for(i=0;i<n;i++){
		printf("_%d_:", i+1);
		scanf("%d", &a[i]);
	}
	int c;
	c = odd(a,n);
	printf("THe number of odd elements are %d", c);
	return 0;
}
int odd(int a[], int n){
	int i=0, count =0;
	for(i=0;i<n;i++){
		if(a[i]%2!=0){
			count++;
		}
	}
	return count;
}
