/*PROGRAM TO FIND L.C.M & H.C.F OF 'N' NUMBERS*/
#include<stdio.h>
#define escape 27
//int recursive_calculation_of_n_factors(int size,int initial_count,int initial_value,int arr[],int (*func)(int x,int y));
int iterative_calculation_of_n_factors(int size,int arr[],int (*func)(int x,int y));
int LCM(int x,int y);
int HCF(int x,int y);
/*Note: It is a good programming practice to make sure that the user-inputs are correct,initially.
		So,that you dont have to set any criteria for it further in program.
		Following is the example in main function */
void main(){
	while(1){
		int i,size; char c;
		while(1){
			system("cls");
			fflush(stdin);
			printf("Enter for how many numbers u want L.C.M & H.C.F? ");
			scanf("%d",&size);
			if (size>1&&size!=32761)
			break;	
			printf("\a");
		}
		int arr[size];
		for (i=0;i<size;i++)
			while(1){
				arr[i]=0;
				system("cls");
				fflush(stdin);
				printf("Enter no.%d: ",i+1);
				scanf("%d",&arr[i]);
				if (arr[i]>0&&arr[i]!=32761)
				break;	
				printf("\a");
			}
		printf("\nLCM: %d",iterative_calculation_of_n_factors(size,arr,LCM));
		printf("\nHCF: %d",iterative_calculation_of_n_factors(size,arr,HCF));	
		printf("\n\nDo u want to do again? (Y/N)");
		c=getch();
		if (c=='N'||c=='n'||c==escape)
		break;
	}
}
int iterative_calculation_of_n_factors(int size,int arr[],int (*func)(int x,int y)){ 
	int i,result;
	for (i=0,result=arr[0];size>0;i++,size--)
	result=func(result,arr[i]);
	return result;
}
//int recursive_calculation_of_n_factors(int size,int initial_count,int initial_value,int arr[],int (*func)(int x,int y)){
//	initial_value=func(initial_value,arr[initial_count]); 
//	if (size>1)
//	initial_value=recursive_calculation_of_n_factors(size-1,initial_count+1,initial_value,arr,func);
//	return initial_value;
//}
/*Note: In recursive calculation,
		initial_value is used for initial index of arr & later used for result,
		initial_count is used to increament the index of arr */
int HCF(int x,int y){
	int n=x;
	if (x<y)
	n=y;
	while(1){	
		if (!(x%n||y%n))
		break;
		else
		n--;
		if (n==1)
		break;	
		}
		return n;
}
int LCM(int x,int y){
	int n=x*y;
	n/=HCF(x,y);	
	return n;
}
