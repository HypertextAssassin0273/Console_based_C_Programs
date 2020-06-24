/*GUESS THE NUMBER GAME*/
#include<stdio.h>
#include<time.h>
int random();
void main (){
	printf ("!!!GUESS THE NUMBER!!!\n");
	system("pause");
	int x=0,n,i,no_of_tries=1;
	char c='c';
label:
	system ("cls");
	x=random();	
	printf("I have a number b/w 1-1000. Can you guess my number?");
	while(1){
	printf("\nPlease type your guess: ");
	scanf("%d",&n);	
	if (n==x){
	fflush(stdin);
	printf("\nExcellent!You guessed the number in %d tries!Would you like to play again (Y/N)?",no_of_tries);
	scanf("%c",&c);	
	if(c=='y'||c=='Y')
	goto label;
	break;
	}
	else if (n>x)
	printf("\nToo high.Try again");
	else if (n<x) 
	printf("\nToo low.Try again");
	no_of_tries++;
	}
}
int random(){
	srand(time(NULL));
	return (rand()%1000+1);
}
