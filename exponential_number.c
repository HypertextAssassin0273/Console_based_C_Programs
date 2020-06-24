/*PROGRAM TO CALCULATE EXPONENTIAL NUMBER*/
#include<stdio.h>
int integer_power(int base,int exponent);
void main (){
	int base,exponent;
	printf("Enter Base value: ");
	scanf("%d",&base);
	while (1){	
	printf("Enter Exponent value (Note: exponent>0): ");
	scanf("%d",&exponent);
	if (exponent>0)
	break;
	}
	printf("Result: %d",integer_power(base,exponent));
}
int integer_power(int base,int exponent){
	int i,result=1;
	for (i=0;i<exponent;i++)
	result*=base;
	return result;
}

