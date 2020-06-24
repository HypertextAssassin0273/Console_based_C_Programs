/*PROGRAM TO FIND FACTORIAL OF A GIVEN NUMBER*/
#include<stdio.h>
void main(){
	int i,n,f;
	printf ("Enter the number for which u want to find factorial: ");
	scanf ("%d",&n);
	if (n>=1){
	i=1;	
	while (i<=n){
	f=f*i;
	i++;
	}
	printf ("your result is: %d",f);
	}
	else if (n==0)
	printf ("your result is: 1");
	else
	printf ("invalid input"); 
}
