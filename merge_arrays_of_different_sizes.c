/*PROGRAM TO MERGE TWO LINEAR ARRAYS OF DIFFERENT SIZES INO SINGLE SORTED & NON-DUPLICATE ARRAY*/
#include<stdio.h>
#include<stdlib.h>
void merge_arrays(double *arr1,double *arr2,int size1,int size2,double *arr);
void discard_duplicate_in_arr(double *arr,int *size);
void bubble_sort(double *arr,int size);
void main(){
	int i;
	double arr1[]={-10.5,-1.8,3.5,6.3,7.2},arr2[]={-1.8,3.1,6.3};
	int size1=sizeof(arr1)/sizeof(arr1[0]),size2=sizeof(arr2)/sizeof(arr2[0]),size=size1+size2; 
	double *arr=malloc(size*sizeof(double));
	printf("\n1ST ARRAY:-\n");
	for(i=0;i<size1;i++)
	printf("%.2f , ",arr1[i]);
	printf("\n2ND ARRAY:-\n");
	for(i=0;i<size2;i++)
	printf("%.2f , ",arr2[i]);
	merge_arrays(arr1,arr2,size1,size2,arr);
	bubble_sort(arr,size);
	discard_duplicate_in_arr(arr,&size);	
	printf("\n\nMERGED ARRAY:-\n");
	for(i=0;i<size;i++)
	printf("%.2f , ",arr[i]);
	printf("\n");
	free(arr);
}
void merge_arrays(double *arr1,double *arr2,int size1,int size2,double *arr){
	int i,size=0;
	for(i=0;i<size1;i++){
		arr[size]=arr1[i];
		size++;
	}
	for(i=0;i<size2;i++){
		arr[size]=arr2[i];
		size++;
	}
}
void bubble_sort(double *arr,int size){
	int i,j;
	for(i=0;i<size-1;i++)
		for(j=0;j<size-1-i;j++)
			if(arr[j]>arr[j+1]){ //i.e. sort in ascending order
			double temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			}
}
void discard_duplicate_in_arr(double *arr,int *size){
	int i,j,k;
	for(i=0;i<*size;i++)
	for(j=i+1;j<*size;){
		if (arr[i]==arr[j]){
		for (k=j;k<*size;k++)
		arr[k]=arr[k+1]; //i.e. discarding the duplicate value
		(*size)--;
		}
		else
		j++;
	}
	realloc(arr,sizeof(double)*(*size));
}
