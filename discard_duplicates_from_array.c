/*PROGRAM TO DISCARD DUPLICATE VALUES FROM ARRAY*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Size 20
double* new_arr();
void storing_random_values(double *arr);
int reduce_arr(double *arr,int size);
void display_arr(double arr[],int size);
void main(){
	double *arr=new_arr();
	storing_random_values(arr);
	printf("Random & Duplicate Values:-\n");
	display_arr(arr,Size);
	printf("\n\nRandom & Non-Duplicate Values in Reduced Array:-\n");
	display_arr(arr,reduce_arr(arr,Size));
	free(arr);
}
double* new_arr(){
	double *arr=(double*)calloc(Size,sizeof(double));
	return arr;
}
void storing_random_values(double *arr){
	int i;
	srand(time(NULL));
	for(i=0;i<Size;i++)
		arr[i]+=(-11.3);
//		arr[i]=rand()%20+1;
}
int reduce_arr(double *arr,int size){
	int i,j,k;
	for(i=0;i<size;i++)
	for(j=i+1;j<size;){
		if (arr[i]==arr[j]){
		for (k=j;k<size;k++)
		arr[k]=arr[k+1]; //i.e. discarding the duplicate value
		size--;
		}
		else
		j++;
	}
	realloc(arr,sizeof(double)*size);
	return size;
}
void display_arr(double arr[],int size){
	int i;
	for(i=0;i<size;i++)
		printf("%.2f ",arr[i]);
}
