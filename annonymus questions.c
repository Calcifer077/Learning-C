//program to check whether the number is prime or not.
#include<stdio.h>

int main(){
	int n;
	printf("ENter any number");
	scanf("%d", &n);
	int i =1;
	int count = 0;
	for(i=1;i<=n;++i){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		printf("%d is a prime number", n);
	}
	else{
		printf("%d is not a prime number", n);
	}
	return 0;
}
......>
//to print prime numbers between particular interval.
#include<stdio.h>

int main(){
	int n1,n2;
	printf("Enter the range between you want to check: ");
	scanf("%d%d", &n1,&n2);
	
	int i,j, count = 0;
	for(i = n1; i<=n2;i++){
		count = 0;
		for(j=n1;j<=n2;j++){
			if(i%j==0){
				count++;
			}
		}
		if(count==2){
			printf("%d \n", i);
		}
	}
	
	return 0;
}
......>
//binary search
#include<stdio.h>

int main(){
	int n;
	printf("ENter teh size of the array:");
	scanf("%d", &n);
	int a[n];
	printf("ENter array elements in sorted order: ");
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	printf("Enter the element you want to search:  ");
	int s;
	scanf("%d", &s);
	int low, high,mid;
	low = 0;
	high = n-1;
	mid = (low + high)/2;
	if(a[mid]==s){
		printf("Element found at %d", mid + 1);
		break;
	}
	else if(a[mid]>s){
		high =  mid - 1;
	}
	else if(a[mid] < s){
		low =  mid + 1;
	}
	else if(low > high){
		printf("Element not found.");
	}
	return 0;
}
........>
//bubble sort
#include<stdio.h>

int main(){
	int arr[100];
	printf("Enter number ofarray elements: ");
	int n;
	scanf("%d", &n);
	printf("enter %d elements: ", n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	int j, swap;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j] > arr[j+1]){
			swap = arr[j];
			arr[j] = arr[j+1];	
			arr[j+1] = swap;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d", arr[i]);
	}
	return 0;
}
........>
//selection sort
#include<stdio.h>

int main(){
	int arr[100];
	printf("Enter number ofarray elements: ");
	int n;
	scanf("%d", &n);
	printf("enter %d elements: ", n);
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	int min,j,temp;
	for(i=0;i<n-1;i++){
		min = i;
		for(j=i+1;j<n;j++){
			if(arr[min]>arr[j]){
				min =  j;
			}
			if(min != i){
				temp = arr[i];
				arr[i] = arr[min];
				arr[min] = temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d", arr[i]);
	}
	return 0;
}
........>
