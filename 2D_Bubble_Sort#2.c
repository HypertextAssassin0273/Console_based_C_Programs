/*PROGRAM TO SORT 2D ARRAY IN A WAY THAT EACH ROW IS LINEARLY SORTED, USING BUBBLE SORT*/
#include<stdio.h>
// Note: u can change size,only if colomn==row
#define colomn 3
#define row 3
int i,j,k;
void bubble_sort(int (*ptr)[colomn]);
void display_bubble_sort(int arr[][colomn]);
void main(){
	int arr[row][colomn]={6,3,1,5,9,8,7,4,2};
	printf("\nOriginal:-\n\n");
	display_bubble_sort(arr);
	bubble_sort(arr);
	printf("\nSorted:-\n\n");
	display_bubble_sort(arr);
}
void bubble_sort(int (*ptr)[colomn]){
	for(k=0;k<colomn;k++){
   		for (i=0;i<row;i++){
    		for (j=i+1;j<row;j++){
       			if(ptr[k][i]>ptr[k][j]){
        		int temp=ptr[k][i];
           		ptr[k][i]=ptr[k][j];
           		ptr[k][j]=temp;
       			}	
     		}
		} 
	}
}
void display_bubble_sort(int arr[][colomn]){
	for(i=0;i<row;i++){
		for(j=0;j<colomn;j++)
			printf("%3d ",arr[i][j]);
		printf("\n");
	}
}
