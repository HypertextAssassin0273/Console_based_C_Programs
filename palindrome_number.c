/*PROGRAM TO FIND REVERSE NUMBER OF AN INTEGER NUMBER.
IT ALSO VERIFIES THAT WHETHER THE NUMBER IS A PALINDROME OR NOT*/
#include<stdio.h>
void main(){
	fflush (stdin);
	int n,num=0,r=0,rev=0;
	printf ("enter the number: ");
	scanf ("%d",&n);
	num=n;
	do {
	r=n%10;
	rev=rev*10+r;
	n/=10;
	}while (n!=0);
	printf ("\noriginal number: %d",num);
	printf ("\nReverse order: %d",rev);
	if (num==rev)
	printf ("\nNote: your number is a palindrome");
	else
	printf ("\nNote: your number is not a palindrome");
}
