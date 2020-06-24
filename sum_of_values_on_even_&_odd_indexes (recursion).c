/*PROGRAM TO FIND SUM OF VALUES ON EVEN & ODD INDEXES (INDIVIDUALLY) IN GIVEN ARRAY, USING RECURSION*/
#include<stdio.h>
int sum_of_products_on_even_indexes(int arr[],int size,int i,int result);
int sum_of_products_on_odd_indexes(int arr[],int size,int i,int result);
void main(){
	int i,product_price[]={50,42,89,110,1120,89,76,54,123,444},size=sizeof(product_price)/sizeof(product_price[0]);
	printf("array elements: ");
	for(i=0;i<size;i++)
	printf("%d ",product_price[i]);
	printf("\nsize of array=%d",size);
	printf("\neven indexes sum=%d",sum_of_products_on_even_indexes(product_price,size,0,0));
	printf("\nodd indexes sum=%d",sum_of_products_on_odd_indexes(product_price,size,0,0));
}
int sum_of_products_on_even_indexes(int arr[],int size,int i,int result){//50+42+110+1120+76+54+444=1896
	if (!(arr[i]%2))
	result+=arr[i];
	if (size>i+1)
	result=sum_of_products_on_even_indexes(arr,size,i+1,result);
	return result;
}
int sum_of_products_on_odd_indexes(int arr[],int size,int i,int result){
	if (arr[i]%2)
	result+=arr[i];
	if (size>i+1)
	result=sum_of_products_on_odd_indexes(arr,size,i+1,result);//89+89+123=301
	return result;
}
