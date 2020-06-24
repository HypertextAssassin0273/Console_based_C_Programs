/*ACCESSING 2D ARRAY IN DIFFERENT WAYS*/
#include<stdio.h>
void main(){
	int i,j,a[3][3]={6,2,5,0,1,3,4,9,8};
	int *p;
	p=a[0]; //i.e. a[0]
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	printf("%d(%d) ",a[i][j],&a[i][j]);
	printf("\n%d",a[1]); 
	/*Note: &a[0],&a[n] / a[o],a[n] / a,a+n / *a,*(a+n)-> address of elements in array. 
	Here, elements hold addresses of sub-arrays (i.e. rows of 2D array) */
	printf("\n%d",*(*(a+1)+2)); 
	//Note: printing value of array elements using de-referencing operator
	printf("\n%d",*(a[1]+2)); 
	//Note: *(*(a+1)+2) = *(a[1]+2) , both are same
	printf("\n%d",&a[1]+1);  
	//Note: a[1]+1 != &a[1]+1
	printf("\n%d",p[7]);
	//Note: This pointer is pointing the array as 1D array
}

