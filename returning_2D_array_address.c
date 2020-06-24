/*IN THIS PROGRAM,WE CAN LEARN TO RETURN THE ADDRESS OF 2D ARRAY FROM A FUNCTION*/
//Note: Here, 2D Array is static, u can also dynamically allocate this array in this program
#include<stdio.h>
#define N 3
int i,j,k=0;
typedef (*double_ptr_to_arr)[N]; //i.e. defining return type for 2D array
double_ptr_to_arr input_matrix(int arr[][N]);
void display_matrix(int arr[][N]);
double_ptr_to_arr multiply_matrices(int arr1[][N],int arr2[][N]);
void main(){
	int arr1[N][N],arr2[N][N],(*ptr1)[N]=arr1,(*ptr2)[N]=arr2;
	display_matrix(input_matrix(ptr1));
	display_matrix(input_matrix(ptr2));
	display_matrix(multiply_matrices(ptr1,ptr2));
	/*Alternate*/
//	int (*ptr3)[N]=multiply_matrices(ptr1,ptr2);
//	display_resultant_matrix(ptr3);
}
double_ptr_to_arr input_matrix(int arr[][N]){
	printf("\nInput elements in matrix#%d:\n",++k);
	for(i=0;i<N;i++)
		for(j=0;j<N;j++){
			printf("element-[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	printf("\nMatrix#%d is:\n",k);	
	return arr;
}
void display_matrix(int arr[][N]){
	for(i=0;i<N;i++){
		for(j=0;j<N;j++)
			printf("%3d ",arr[i][j]);
		printf("\n");
	}
}
double_ptr_to_arr multiply_matrices(int arr1[][N],int arr2[][N]){
	static int arr3[N][N]={0};
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			for(k=0;k<N;k++)
				arr3[i][j]+=arr1[i][k]*arr2[k][j];
	printf("\nResultant matrix is:\n");
	return arr3;
}
