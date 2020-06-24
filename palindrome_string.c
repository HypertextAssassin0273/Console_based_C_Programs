/*PROGRAM TO CHECK IF THE GIVEN STRING IS A PALINDROME OR NOT*/
#include<stdio.h>
#include<string.h>
void main(){
    char a[100],b[100];
    printf("Enter the string: ");
    gets(a);
    strcpy(b,a);//i.e copying input string
    strrev(b);//i.e. reversing the string
    if (!strcmp(a,b))//i.e. comparing both strings
    printf("The string is a palindrome\n");
    else
    printf("The string is not a palindrome\n");
}
