/*PROGRAM TO UNDERSTAND THE USE OF 'CONST' AT DIFFERENT PLACES*/
#include<stdio.h>
void case_1();
void case_2();
void case_3();
void main(){
	case_1();
	case_2();
	case_3();
}
void case_1(){ //Note: Using 'const' before declaration of 'x' variable restricts it as 'read only' variable
	const int x=5,y=10;
	int *ptr=&x;
//	x=11; //i.e. gives error cuz of using 'const'
	*ptr=80;
	ptr=&y;
	printf("\n%d, %d, %d",x,y,*ptr);	
}
void case_2(){ //Note: Using 'const' before declaration of '*ptr' pointer restricts it as 'read only' pointer
	int x=5,y=10;
	const int *ptr=&x;
	x=11;
//	*ptr=80; //i.e. gives error cuz of using 'const'
	ptr=&y;
	printf("\n%d, %d, %d",x,y,*ptr);	
}
void case_3(){ //Note: Using 'const' between the '*' & 'pointer name' restricts the pointer to assign new address
	int x=5,y=10;
	int *const ptr=&x;
	x=11;
	*ptr=80;
//	ptr=&y; //i.e. gives error cuz of using 'const'
	printf("\n%d, %d, %d",x,y,*ptr);	
}
