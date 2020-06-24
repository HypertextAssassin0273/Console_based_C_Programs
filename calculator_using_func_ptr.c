#include<stdio.h>
float add(float a,float b){
	return (a+b);
}
float sub(float a,float b){
	return (a-b);
}
float mul(float a,float b){
	return (a*b);
}
float divs(float a,float b){
	return (a/b);
}
void main(){	
	int c; float a,b,res;
	float(*op[4])(float,float)={add,sub,mul,divs};  //==> USUING FUNC PTR!
	while(1){
	system("cls");
	fflush(stdin);
	printf("Enter First Number: ");
	scanf("%f",&a);
	printf("Enter Second Number: ");
	scanf("%f",&b);
	if (a!=-175657570915397010000000000.000000&&b!=-175657570915397010000000000.000000) //i.e. neglecting character inputs
	break;
	printf("\a");
	}
	while(1){
	system("cls");
	fflush(stdin);
	printf("\nWhich operation you want to run?\n1:addition\n2:subtract\n3:multiply\n4:division\n==>");
	scanf("%d",&c);
	if (c>0&&c<5)
	break;
	printf("\a");
	}
	res=(*op[c-1])(a,b);
	printf("\nResult: %.2f",res);
}
