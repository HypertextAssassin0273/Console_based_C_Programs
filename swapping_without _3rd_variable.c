/*PROGRAM TO SWAP TWO VALUES, USING TWO VARIABLES ONLY*/
#include<stdio.h>
void main(){
    int a,b;
	/*Arithmetic Method*/
    printf("Enter two numbers (arithmetic): ");
    scanf("%d %d",&a,&b);  //i.e. consider two numbers as 4 and 5
    a=a+b;  //i.e. a = 4 + 5 = 9
    b=a-b;  //i.e. b = 9 - 5 = 4
    a=a-b;  //i.e. a = 9 - 4 = 5
    printf("Numbers after swapping: %d %d",a,b);       
	/*Bit-wise Method*/    
    printf("\n\nEnter two numbers (bit-wise): ");
    scanf("%d %d",&a,&b); //consider two numbers as 4 and 5
    a=a^b;  //i.e. a(1)->001 = a(4)->100 ^ (5)->101
    b=a^b;	//i.e. b(4)->100 = a(1)->001 ^ b(5)->101
    a=a^b;	//i.e. a(5)->101 = a(1)->001 ^ b(4)->100
    printf("Numbers after swaping: %d %d",a,b);
}
