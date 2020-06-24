/*PROGRAM TO FIND SUM OF DIGITS, USING RECURSIVE APPROACH*/
#include<stdio.h>
int sum_of_digits(int N);
void main(){
	int N;
	printf("Input any number to find sum of digits: ");
	scanf("%d",&N);
	printf("The Sum of digits of %d = %d",N,sum_of_digits(N));
}
int sum_of_digits(int N){
	if (!N>0)
	return 0;
	return N%10+sum_of_digits(N/10);
}
