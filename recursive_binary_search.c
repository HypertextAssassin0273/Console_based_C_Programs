/*PROGRAM TO FIND A NUMBER IN A SORTED ARRAY, USING RECURSIVE BINARY SEARCH*/
//Note: This binary search function works only for sorted arrays.So,we have used sort function first
#include<stdio.h>
#define size 9
int i,j;
void display_arr(int arr[]);
int* sort_arr(int arr[]);
int input_search_key();
int recursive_binary_search(int search_key,int lower_value,int upper_value,int arr[]);
void display_result(int check_result);
void main(){
	int arr[size]={111,3,6,54,9,8,7,4,2}; //i.e. un-sorted array
	display_result(recursive_binary_search(input_search_key(),0,size-1,sort_arr(arr))); //i.e. function calling precedence->from right to left
}
void display_arr(int arr[]){
	for(i=0;i<size;i++)
	printf("%d ",arr[i]);
	printf("\n");
}
int* sort_arr(int arr[]){
	printf("Un-sorted array: ");
	display_arr(arr);
	for(i=0;i<size-1;i++){
		for(j=0;j<size-i-1;j++){
			if(arr[j]>arr[j+1]){
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			}
		}
	}
	printf("Sorted array:    ");
	display_arr(arr);
	return arr;
}
int input_search_key(){
	int key;
	printf("\nPlease enter the key value to search in sorted list: ");
	scanf("%d",&key);
	return key;
}
//Note: This function returns the index no. of required value in the array
int recursive_binary_search(int search_key,int lower_value,int upper_value,int arr[]){
	if(upper_value>=lower_value){
	int mid_value=(lower_value+upper_value)/2;
	if(arr[mid_value]==search_key)
	return mid_value;
	else if(arr[mid_value]>search_key)	
	return recursive_binary_search(search_key,lower_value,mid_value-1,arr);
	else if(arr[mid_value]<search_key)
	return recursive_binary_search(search_key,mid_value+1,upper_value,arr);
	}
	else 
	return -1;
}
void display_result(int check_result){
	if(check_result==-1)
	printf("\nStatus: Not found\n");
	else
	printf("\nStatus: Present at position no.%d \n",check_result+1);
}
