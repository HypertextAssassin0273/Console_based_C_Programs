/*PRORAM TO COUNT SAME DIGITS IN A NUMBER*/
#include<stdio.h>
void main(){
	int num,count=0;
	printf ("Enter a +ve integer: ");
	scanf ("%d",&num);
	while (num!=0){
	num/=10;
	count++;
	}
	printf ("No. of digits: %d\n",count);
}
