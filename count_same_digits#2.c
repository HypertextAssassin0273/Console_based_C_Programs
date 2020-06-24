/*PROGRAM WHICH COUNTS A GIVEN NUMBER IN A GIVEN INTEGER VALUE*/
//Note: it counts 3 times the given number if it's consecutively present twice in row
#include<stdio.h>
int count_number_in_int_value(long long n,int number);
void main(){
	long long n,number;
	printf("Enter a number which u want to find in the integer string: ");
	scanf("%d",&number);
	printf("Enter a long integer value: ");
	scanf("%lld",&n);
	printf("Number of %d's: %d",number,count_number_in_int_value(n,number));
	}
int count_number_in_int_value(long long n,int number){
	int count=0,z=0;
	for (;n>0;n/=10){
	if (n%10==number&&z==1){ //i.e. counts 3 times the given number if it's consecutively present twice in row
	count+=2;
	}
	else if (n%10==number){ //i.e. counts the given number that is present in row
	count++;
	z=1;
	}
	else
	z=0;
	}
	return count;
}
