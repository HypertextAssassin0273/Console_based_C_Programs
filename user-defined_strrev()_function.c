#include<stdio.h>
char *__cdecl string_reverse(char *arr);
void main(){
	char arr[50];
	printf("Enter Any String :");
	gets(arr);
	string_reverse(arr);
    puts(arr);
    getch();
}
char *__cdecl string_reverse(char *arr){
	int i,j; char temp;
	for(j=0;arr[j];j++);
	for(i=0;i<j/2;i++){ 
	temp=arr[i]; 
	arr[i]=arr[j-1-i];
	arr[j-1-i]=temp;
    }
}
