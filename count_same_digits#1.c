/*PRORAM TO COUNT SAME DIGITS IN A NUMBER*/
#include<stdio.h>
void main(){
	long long num;
	int count=0,num_to_find;
	printf ("Enter a +ve integer: ");
	scanf ("%ld",&num);
	printf ("Enter the number which u want to count: ");
	scanf ("%d",&num_to_find);
	while (num!=0){
	if (num%10==num_to_find)
	count++;
	num/=10;
	}
	printf ("Number of %d's: %d\n",num_to_find,count);
}
