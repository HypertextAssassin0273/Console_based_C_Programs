/*PROGRAM TO REVERSE THE SENTENCE IN A STRING*/
#include<stdio.h>
#include<string.h>
#define SIZE 30
void reverse_sentence(char *arr,int size);
void main(){
	char arr[SIZE];
	printf("Enter a Sentence: ");
	scanf("%[^\n]",arr);
	reverse_sentence(arr,SIZE);
	printf("Sentence Reversed: %s\n",arr);
}
void reverse_sentence(char *arr,int size){
	char temp_arr[size];
	temp_arr[0]='\0'; //i.e. to make sure the garbage value in not concatenated in the string
	strrev(arr);
	char *token=strtok(arr," ");
	while(token!=NULL){ //i.e. spliting the reversed string into sub-strings
	strrev(token);
	strcat(temp_arr," "); //i.e. adding spaces
	strcat(temp_arr,token);
	token=strtok(NULL," ");
	}
	int i; char temp;
	for(i=0;1;i++){ //i.e. removing initial space
		temp=temp_arr[i+1];
		temp_arr[i]=temp_arr[i+1];
		temp_arr[i+1]=temp;
		if (temp=='\0')
		break;
	}
	strcpy(arr,temp_arr);
}
