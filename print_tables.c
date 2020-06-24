/*PROGRAM TO PRINT TABLE OF ANY NUMBER UPTO USER-CHOICE*/
#include<stdio.h>
void main (){
	int i=1,n,l,t;
	printf ("enter table number: ");
	scanf ("%d",&n);
	printf ("enter length of table: ");
	scanf ("%d",&l);
	do {
	t=n*i;
	printf ("%d ",t);
	i++;
	}while (i<=l);
}
