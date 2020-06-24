#include<stdio.h>
void main(){
int size,i,j,max;
printf("Enter Size Of An Array :");
scanf("%d",&size);
int arr[size];
printf("Enter %d Numbers: ",size);
for(i=0;i<size;i++)
scanf("%d",&arr[i]);
for(i=0;i<size-1;i++)
	for(j=0;j<size-1-i;j++)
	if(arr[j]>arr[j+1]){
	int temp=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=temp;
	}
//printf("sorted: ");	
//for(i=0;i<size;i++)
printf("%d ",arr[i]);
max=arr[i-2];
printf("The Second Largest Number Is %d",max);
}
