/* A PROGRAM WHICH COUNTS NO. OF STEPS TO FIND PRODUCT OF DIGITS IN A GIVEN NUMBER, UPTO SINGLE DIGIT*/
#include<stdio.h>
void main(){
	int num=578,fact=1,b=1,a,x=0,temp=num;
	while(temp>9){
		printf("Value: %d\n",temp);
		while(temp>0){
			temp/=10;
			fact*=10;
		}
		//printf("Fact is %d \n",fact);
		printf("Digits:  ");
		while(fact>1){
			fact/=10;
			a=num/fact;
			printf("%d   ",a);
			num%=fact;
			b*=a;
		}
		num=temp=b;
		printf("Product: %d \n",b);
		fact=b=1;
		x++;
	}
	printf("\nNo. of Steps: %d",x);
}
