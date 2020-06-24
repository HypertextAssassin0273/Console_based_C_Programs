/*PROGRAM TO FIND MAXIMUM & MINIMUM VALUE IN A GIVEN LIST, USING RECURSIVE APPROACH*/
#include<stdio.h>
int max_value(int N[],int size);
int min_value(int N[],int size);
void main(){
	int size=10,N[]={1,4,9,-6,4,-12,3,18,-3};
	printf("max is %d and min is %d",max_value(N,size),min_value(N,size));
}
int max_value(int N[],int size){
	static int max=0,i=0,X=1;
	if (X){
	max=N[i];
	X=0;
	}
	if (i==size)
	return max;
	i++;
	if (N[i]>N[i+1]&&N[i]>max)
	max=N[i];
	max_value(N,9);
}
int min_value(int N[],int size){
	static int min=0,i=0,X=1;
	if (X){
	min=N[i];
	X=0;
	}
	if (i==size)
	return min;
	i++;
	if (N[i]<N[i+1]&&N[i]<min)
	min=N[i];
	min_value(N,9);
}
