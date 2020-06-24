#include<stdio.h>
int factorial (int i,int f,int n);
void main(){
	int i=1,f=1,n;
	printf("Enter number 'n' to find it's factorial (i.e n!): ");
	scanf("%d",&n);
	printf("Your Result is: %d",factorial(i,f,n));
	}	
int factorial (int i,int f,int n){
	if (n==0)
	return 1;
	f*=i;
	i++;
	if (i<=n)
	f=factorial (i,f,n);
	return f;
}
