/*PROGRAM FOR USER DEFINED STRING COPY FUNCTION*/
#include<stdio.h>
//#include<string.h>
char* __cdecl STRCPY(char * __restrict__ dest,const char *const __restrict__ source);
void main(){
	int n;
	printf("ENTER SIZE OF STRING: ");
	scanf("%d",&n);
	char arr[n],arr2[n];
	fflush(stdin);
	printf("INPUT ANY STRING: ");
	scanf("%[^\n]",&arr);
	printf("\nRETURNED VALUE: %s",STRCPY(arr2,arr));
//	printf("\nYOUR STRING: %s",strcpy(arr2,arr));
	printf("\nCOPIED STRING:-\nFROM\narr: %s\nTO\narr2: %s",arr,arr2);
}
char* __cdecl STRCPY(char * __restrict__ dest,const char *const __restrict__ source){
	int i;
	for(i=0;source[i]!='\0';i++)
		dest[i]=source[i];
	dest[i]='\0';
	return dest;
}
