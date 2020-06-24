/*PROGRAM TO SORT 2D ARRAY OF ANY SIZE IN LINEAR WAY, USING BUBBLE SORT*/
#include<stdio.h>
//Note: Here,size can be of any format like, colomn>row or colomn==row or colomn<row
#define colomn 4
#define row 3
#define size colomn*row
int i,j;
void bubble_sort(int *ptr);
void display_bubble_sort(int arr[][colomn]);
void main(){
    int arr[row][colomn]={1,3,6,5,9,8,7,4,2,11,78,9};
    //Note: u can use commas (,) to seperate commands in the whole function.But,u have to put atleast one terminator-sign (;) at the end
	printf("\nOriginal:-\n\n"),display_bubble_sort(arr);
    bubble_sort(*arr);
    printf("\nSorted:-\n\n"),display_bubble_sort(arr);
}
void bubble_sort(int *ptr){
    for(i=0;i<size;i++){
        for (j=0;j<(size-1);j++){
            if (ptr[j]>ptr[j+1]){
            int temp=ptr[j+1];
            ptr[j+1]=ptr[j];
            ptr[j]=temp;
            }
        }
    }
}
void display_bubble_sort(int arr[][colomn]){
	for(i=0;i<row;i++){
		for(j=0;j<colomn;j++)
			printf("%2d ",arr[i][j]);
		printf("\n");
	}
}
