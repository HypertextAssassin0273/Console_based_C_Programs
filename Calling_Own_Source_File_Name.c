/*PROGRAM TO FIND SOURCE FILE NAME,FUNCTION NAME & LINE NUMBER (FROM WHERE IT'S INVOKED)*/
#include<stdio.h>
#include<string.h>
void new_func(char actual_name[]);
void main(int argc,char *argv[]){
	int i,j,name_size=strlen(argv[0]);
	char source_file_name[name_size],actual_name[20];
	strcpy(source_file_name,argv[0]);
	for(i=56,j=0;i<name_size-4;i++,j++)
	actual_name[j]=source_file_name[i];
	printf("Actual Name of File: %s",actual_name);
	printf("\nExecutable Names of File:-\nExe File Name: %s\nSource File Name: %s",source_file_name,__FILE__);
    printf("\n\nThis is %s() from %s,line %d",__FUNCTION__,actual_name,__LINE__);
    new_func(actual_name);
}
void new_func(char actual_name[]){
    printf("\nThis is %s() from %s,line %d\n",__FUNCTION__,actual_name,__LINE__);
}
