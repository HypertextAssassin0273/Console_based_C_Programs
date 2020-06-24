/*PROGRAM TO SORT 1D ARRAY OF ANY SIZE, USING 'BUBBLE SORT' THROUGH 'CALL BY REFERENCE' WITH 'CONST'*/
#include<stdio.h>
void bubble_sort(int *const ptr,int size);
int main(){
	int i,arr[]={23,-55,40,9,13,8,38,-4,1,66};
	int size=sizeof(arr)/sizeof(arr[0]); //i.e. calculating allocated size of arr
//	printf("%d",size);
//	for (i=0;arr[i];i++); //i.e. calculating elements inside arr
//	printf("\n%d",i);
	printf("UNSORTED ARRAY:-\n");
	for(i=0;i<size;i++)
	printf("%2d ",arr[i]);
	bubble_sort(arr,size);
	printf("\n\nSORTED ARRAY:-\n");
	for(i=0;i<size;i++)
	printf("%2d ",arr[i]);
	printf("\n");
}
void bubble_sort(int *const ptr,int size){ //sizeOTE: const-> restricts the local ptr to be pointed towards another address inside this function
	int i,j;
//	ptr=&i; //i.e. gives error cuz of using 'const'
	for(i=0;i<size-1;i++)
	for(j=0;j<size-1-i;j++)
	if(ptr[j]>ptr[j+1]){
	int temp=ptr[j];
	ptr[j]=ptr[j+1];
	ptr[j+1]=temp;
	}
}
