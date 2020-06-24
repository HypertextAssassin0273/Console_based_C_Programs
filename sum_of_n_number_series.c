#include<stdio.h>
#include<conio.h>
/*Sum Of The Series (1)+(1+2)+(1+2+3)...+(1+2+3+n) */
int main(){
	int sum=0,i,n,p=1;
	printf("Enter Total Terms Of The Series (1)+(1+2)+(1+2+3)...+(1+2+3+n) :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=sum+p;
		printf("\t%d",sum);
		p++;
	}
	getch();
	return 0;
}
