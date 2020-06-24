#include<stdio.h>
void main(){
	int i;
	char arr[][10]={"asad","ahmed","khan"};
	for (i=0;arr[i][0]!='\0';i++);
	printf("No. of Strings in list: %d ",i);
}
