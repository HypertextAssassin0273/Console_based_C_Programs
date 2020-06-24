/*PROGRAM TO PRINT PERFECT NUMBERS UPTO 'N' NUMBERS (DEPENDING ON MACHINE/SYSTEM CAPABILITY)*/
#include<stdio.h>
int perfect(int n);
void main (){
	int i,n=1;
	printf("PERFECT NUMBERS:-");
	for(i=0;i<1000;i++){
	perfect(n);
	n++;
	}
}
int perfect(int n){   
	int x=1,y=0,z=0;
	while(n!=x){  
	if (n%x==0) //Logic:0->divisible,1->not divisible; 28%1=0,28%2=0,28%3=1,...,28%27=1; (1 to n-1)
	y+=x;
	x++;
	}
	x=1;
	if (y==n){  //Note: If sum of divisible factors of a number matches it's respective no.,then it is perfect 
	printf("\n%d=",n);	
	while(n!=x){
	if (n%x==0){
	if (z==1)
	printf("+");
	printf("%d",x);
	}
	z=1;
	x++;
	}
	return 1;  //Note if anyone wants to use simply to check whether it is perfect or not! 
	}
	else
	return 0;
}
