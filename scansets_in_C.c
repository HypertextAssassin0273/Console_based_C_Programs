/*PROGRAM FOR USING SCANSETS IN C*/
//Note: Here,only two combinations are used for scansets.There are multiple combinations in which a string can be read through scansets.
#include<stdio.h>
#include<string.h>
void main(){
	char str[100];
	/*Example#1*/
	printf("Enter a string: ");
	scanf("%[A-Z]s",str); //Note: Here,only those strings will be read which starts in a continuous form in capital letters from A-Z.In this way,you can set different ranges through this format.
	printf("You entered: %s\n",str);
	/*Example#2*/
	strcpy(str,"\0");
	fflush(stdin);
	printf("Enter a string: ");
	scanf("%[^o,\n]s",str); //Note: Here,if you pair '^' character with any other character,then you can discard rest of the string from the position of that specific character
	printf("You entered: %s\n",str);
}
