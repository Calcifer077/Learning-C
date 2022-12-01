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
