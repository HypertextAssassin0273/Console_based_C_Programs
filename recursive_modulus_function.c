/*PROGRAM TO FIND MODULUS OF TWO +VE INTEGERS, USING RECURSIVE APPROACH*/
#include<stdio.h>
#include<stdlib.h>
int count=0;
int recursive_mod(int num,int den);
void main(){
	int a,b;
	printf("Enter any two positve integers to find modulus/remainder:-\n");
	scanf("%d %d",&a,&b);
	printf("Result: %d",recursive_mod(a,b));
}
//Note: No. of steps to get answer (through subtraction) for any expression is equivalent to the answer of expression,
//i.e 123/10=12.3, steps/recursive call to get answer is also "12"
//Note: Possible recursive function calling in "Stack" (on this computer) is "43177 times".Beyond that,storage allocation error occurs.
int recursive_mod(int num,int den){     	
	count++;
	if (count==43178){
	printf("Error!No space left in Stack for program!!");
	exit(1);
	}
	else if ((num==0&&den==0)||den==0){  //Note: 0/0=undefined,1/0=infinity
	printf("!Math Error!\n");
	return 0;
	}
    else if (num<den) //Note: It also covers the case "0/1=0"
	return num;
    else{
	num-=den;
    if(num>=den)
    num=(recursive_mod(num,den));
	return num;
	}
}
