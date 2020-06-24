#include<stdio.h>
void swap(char **str1,char **str2){
	char *temp=*str1;
	*str1=*str2;
	*str2=temp;
}
void main(){
char *str1="Hello";
char *str2="World";
swap(&str1,&str2);
printf("String # 1 Is %s\nString # 2 Is %s",str1,str2);
}
