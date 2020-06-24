/*PROGRAM TO CONVERT A NUMBER FROM DECIMAL TO BINARY NUMBER SYSTEM, USING BOTH RECUSIVE & ITERATIVE APPROACH*/
#include<stdio.h>
void Iterative_Dec_To_Bin(int n,int digit_count,int arr[]);
void Recursive_Dec_To_Bin(int n,int digit_count,int arr[]);
void main(){
	int n;
	while(1){
	system("cls");
	fflush(stdin);
	printf("Enter a number: ");
	scanf("%d",&n);
	if (n>0&&n!=32761)
	break;
	printf("\a");
	}
	int i,temp_count=n,digit_count=0;
	for(;temp_count>0;temp_count/=2)
	digit_count++;
	int arr[digit_count];
	printf("\nBinary (Iterative Approach): ");
	Iterative_Dec_To_Bin(n,digit_count,arr);
	printf("\nBinary (Recursive Approach): ");		
	Recursive_Dec_To_Bin(n,digit_count,arr);
}
void Iterative_Dec_To_Bin(int n,int digit_count,int arr[]){
	int i;
	for (i=digit_count-1;i>-1;i--){
		arr[i]=n%2;
		n/=2;
	}
	for (i=0;i<digit_count;i++)
	printf("%d ",arr[i]);
}
void Recursive_Dec_To_Bin(int n,int digit_count,int arr[]){
	static flag_x=1,i,temp_count;
	if (flag_x==1){
	temp_count=digit_count;
	flag_x=0;
	}
	arr[digit_count-1]=n%2;
	digit_count--;
	n/=2;
	if (n>0)
	Recursive_Dec_To_Bin(n,digit_count,arr); //Note: The above lines of coding will run till max. function calls are invoked & after that,only below lines will run.
	if (flag_x==0){
	for (i=0;i<temp_count;i++)
	printf("%d ",arr[i]);
	flag_x=1;
	}
}
