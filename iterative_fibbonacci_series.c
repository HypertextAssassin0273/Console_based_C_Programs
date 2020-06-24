/*PROGRAM TO FIND FIBBONACCI SERIES FOR A GIVEN NUMBER*/
#include<stdio.h>
void main(){
	fflush (stdin);
	int N,i,a=-1,b=1,c;
	printf ("enter the number for which u want fibonacci series: ");
	scanf ("%d",&N);
	for (i=1;i<=N;i++){
		c=a+b;
		printf ("%d ",c);
		a=b;
		b=c;
	}
}
