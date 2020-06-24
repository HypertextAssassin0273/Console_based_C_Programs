/*FOR SAME SIZE SQUARE MATRICES*/
#include<stdio.h>
#include<stdlib.h>
int** new_dynamic_matrix(int N);
void initialize_matrix(int N,int **matrix);
void input_matrix(int N,int **matrix);
void copy_matrix(int N,int **matrix1,int **matrix2);
void add_matrices(int N,int **matrix1,int **matrix2,int **matrix3);
void subtract_matrices(int N,int **matrix1,int **matrix2,int **matrix3);
void multiply_matrices(int N,int **matrix1,int **matrix2,int **matrix3);
void transpose_matrix(int N,int **matrix1,int **matrix2);
int sum_of_right_diagonals_of_matrix(int N,int **matrix1);
int sum_of_left_diagonals_of_matrix(int N,int **matrix1);
void sum_of_rows_and_columns(int N,int **matrix1,int **matrix2);
int identity_matrix(int N,int **matrix1);
void lower_triangular_matrix(int N,int **matrix1);
void upper_triangular_matrix(int N,int **matrix1);
void display_matrix(int N,int **matrix);
void free_matrix(int N,int **matrix);
void main(){
	int N;
	while(1){
	system("cls");
	fflush(stdin);
	printf("Input the size of the square matrix (max: 4): ");
	scanf("%d",&N);
	if(N>0&&N<5&&N!=32761)
	break;
	}
	int **matrix1=new_dynamic_matrix(N),**matrix2=new_dynamic_matrix(N),**matrix3=new_dynamic_matrix(N),**matrix1_copy=new_dynamic_matrix(N),**matrix2_copy=new_dynamic_matrix(N);
	printf("\nInput elements in matrix 'A':\n");
	input_matrix(N,matrix1);
	copy_matrix(N,matrix1,matrix1_copy);
	printf("\nInput elements in matrix 'B':\n");
	input_matrix(N,matrix2);
	copy_matrix(N,matrix2,matrix2_copy);
	printf("\nThe first matrix is:\n");
	display_matrix(N,matrix1);
	printf("\nThe second matrix is:\n");
	display_matrix(N,matrix2);
	printf("\nThe Subtraction of two matrix is:\n");
	initialize_matrix(N,matrix3);
	subtract_matrices(N,matrix1,matrix2,matrix3);
	display_matrix(N,matrix3);
	printf("\nThe Addition of two matrix is:\n");
	initialize_matrix(N,matrix3);
	add_matrices(N,matrix1,matrix2,matrix3);
	display_matrix(N,matrix3);
	printf("\nThe Multiplication of two matrix is:\n");
	initialize_matrix(N,matrix3);
	multiply_matrices(N,matrix1,matrix2,matrix3);
	display_matrix(N,matrix3);
	printf("\nThe Transpose of a matrix 'A' is:\n");
	initialize_matrix(N,matrix3);
	transpose_matrix(N,matrix1,matrix3);
	display_matrix(N,matrix3);
	printf("\nThe Transpose of a matrix 'B' is:\n");
	initialize_matrix(N,matrix3);
	transpose_matrix(N,matrix2,matrix3);
	display_matrix(N,matrix3);
	printf("\nAddition of Right Diagonal elements of matrix 'A' is: ");
	printf("%d\n",sum_of_right_diagonals_of_matrix(N,matrix1));
	printf("\nAddition of Right Diagonal elements of matrix 'B' is: ");
	printf("%d\n",sum_of_right_diagonals_of_matrix(N,matrix2));
	printf("\nAddition of Left Diagonal elements of matrix 'A' is: ");
	printf("%d\n",sum_of_left_diagonals_of_matrix(N,matrix1));
	printf("\nAddition of Left Diagonal elements of matrix 'B' is: ");
	printf("%d\n",sum_of_left_diagonals_of_matrix(N,matrix2));
	printf("\nThe sum of rows & columns of the matrix 'A' is:\n");
	free_matrix(N,matrix3);
	matrix3=new_dynamic_matrix(++N);
	initialize_matrix(N,matrix3);
	sum_of_rows_and_columns(N,matrix1,matrix3);
	display_matrix(N,matrix3);
	printf("\nThe sum of rows & columns of the matrix 'B' is:\n");
	initialize_matrix(N,matrix3);
	sum_of_rows_and_columns(N,matrix2,matrix3);
	display_matrix(N,matrix3);
	free_matrix(N,matrix3);
	printf("\nMatrix 'A' ");
	identity_matrix(--N,matrix1);
	printf("\nMatrix 'B' ");
	identity_matrix(N,matrix2);
	printf("\nLower Triangular form of matrix 'A' is:\n");
	lower_triangular_matrix(N,matrix1);
	display_matrix(N,matrix1);
	printf("\nLower Triangular form of matrix 'B' is:\n");
	lower_triangular_matrix(N,matrix2);
	display_matrix(N,matrix2);
	free_matrix(N,matrix1);
	free_matrix(N,matrix2);
	printf("\nUpper Triangular form of matrix 'A' is:\n");
	upper_triangular_matrix(N,matrix1_copy);
	display_matrix(N,matrix1_copy);
	printf("\nUpper Triangular form of matrix 'B' is:\n");
	upper_triangular_matrix(N,matrix2_copy);
	display_matrix(N,matrix2_copy);
	free_matrix(N,matrix1_copy);
	free_matrix(N,matrix2_copy);
}
int** new_dynamic_matrix(int N){
	int i,**ptr=malloc(N*sizeof(int*));
	for (i=0;i<N;i++)
		ptr[i]=malloc(N*sizeof(int)); 
	return ptr;
}
void initialize_matrix(int N,int **matrix){
	int i,j;
	for(j=0;j<N;j++)
		for(i=0;i<N;i++)
			matrix[i][j]=0;
}
void input_matrix(int N,int **matrix){
	int i,j;
	for(j=0;j<N;j++)
		for(i=0;i<N;i++){
			printf("element-[%d][%d]: ",j,i);
			scanf("%d",&matrix[j][i]);
		}
}
void copy_matrix(int N,int **matrix1,int **matrix2){
	int i,j;
	for(j=0;j<N;j++)
		for(i=0;i<N;i++)
			matrix2[j][i]=matrix1[j][i];
}
void add_matrices(int N,int **matrix1,int **matrix2,int **matrix3){
	int i,j;
	for(j=0;j<N;j++)
		for(i=0;i<N;i++)	
			matrix3[j][i]=matrix1[j][i]+matrix2[j][i];	
}
void multiply_matrices(int N,int **matrix1,int **matrix2,int **matrix3){
	int i,j,k;
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			for(k=0;k<N;k++)
				matrix3[i][j]+=matrix1[i][k]*matrix2[k][j];
}
void subtract_matrices(int N,int **matrix1,int **matrix2,int **matrix3){
	int i,j;
	for(j=0;j<N;j++)
		for(i=0;i<N;i++)
			matrix3[j][i]=matrix1[j][i]-matrix2[j][i];
}
void transpose_matrix(int N,int **matrix1,int **matrix2){
	int i,j;
	for(j=0;j<N;j++)
		for(i=0;i<N;i++)
			matrix2[i][j]=matrix1[j][i];
}
int sum_of_right_diagonals_of_matrix(int N,int **matrix1){
	int i,j,temp_sum=0;
	for(i=0,j=N-1;i<N&&j>-1;i++,j--)
		temp_sum+=matrix1[i][j];	
	return temp_sum;
}
int sum_of_left_diagonals_of_matrix(int N,int **matrix1){
	int i,temp_sum=0;
	for(i=0;i<N;i++)
		temp_sum+=matrix1[i][i];
	return temp_sum;
}
void sum_of_rows_and_columns(int N,int **matrix1,int **matrix2){
	int i,j;
	for(i=0;i<N-1;i++)	
		for(j=0;j<N-1;j++){	
			matrix2[i][j]=matrix1[i][j];	
			matrix2[i][N-1]+=matrix1[i][j]; //i.e. sum of rows
			matrix2[N-1][i]+=matrix1[j][i]; //i.e. sum of columns                    		
		}
}
int identity_matrix(int N,int **matrix1){
	int i,j;
	for(i=0;i<N;i++)
	for(j=0;j<N;j++){
	if ((i==j&&matrix1[i][j]==1)||(i!=j&&matrix1[i][j]==0)) //Note: Setting condition that if diagonal_elements=1 & rest_of_all_elements=0,then it is identity matrix.
	continue;
	printf("is not an identity matrix\n");
	return 0;
	}
	printf("is an identity matrix\n");
	return 1;
}
void lower_triangular_matrix(int N,int **matrix1){
	int i,j;
	for(i=0;i<N-1;i++)
		for(j=i+1;j<N;j++)
			matrix1[i][j]=0;
}
void upper_triangular_matrix(int N,int **matrix1){
	int i,j;
	for(i=0;i<N-1;i++)
		for(j=i+1;j<N;j++)
			matrix1[j][i]=0;
}
void display_matrix(int N,int **matrix){
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++)
			printf("%3d ",matrix[i][j]);
		printf("\n");
	}
}
void free_matrix(int N,int **matrix){
	int i;
	for (i=0;i<N;i++)
		free(matrix[i]);
	free(matrix);
}
