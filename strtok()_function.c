/*PROGRAM TO UTILIZE strtok() FUNCTION WITH A DIFFERNT APPROACH 
i.e. passing array of conditions as 2nd argument in strtok()*/

//Input: takes a paragraph from user which includes full-stops,commas,hyphens,semicolons,exclamation marks. 
//Output: Counts the total words in the paragraph using strtok() while excluding all punctuations.
#include<string.h>
#include<stdio.h>
#define paragraph_size 80
#define condition_arr_size 10
void main(){
   char str[paragraph_size]="This is - myWorld - Full of Programming 123.56 ; int,int";
   char s[condition_arr_size]={' ','.',';','-',','};
   char *token;
   int count=0;
   token=strtok(str,s); //i.e. gets the first token
   printf("First token %s\n",token);
   while(token!=NULL){ //i.e. other tokens
   	printf("%s\n",token);
   	token=strtok(NULL,s);
   	count++;
   }
   printf("Number of Words %d\n",count);
}
