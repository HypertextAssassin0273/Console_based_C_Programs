#include<stdio.h>
void main(){
	int n1,n2,n3;
	printf("Enter Three Numbers :");
	scanf("%d%d%d",&n1,&n2,&n3);
	printf("The Largest Number Is: %d",n1>n2? n1>n3? n1:n3 :n2>n3? n2:n3 );
}
