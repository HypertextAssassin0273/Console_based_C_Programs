#include<stdio.h>
void main(){
	int i,arr[15]={23,-55,40,9,13,8,38,-4,1,66}; //i.e. 10
	for (i=0;arr[i];i++); //Note: Calculates the no. of elements inside arr of char,float,int data-type without knowing the size
	printf("No. of elements in array: %d",i);
}
