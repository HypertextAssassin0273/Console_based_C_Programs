#include<stdio.h>
#define PI 3.142
#define MAX 5
#define X PI*MAX
#define Area(l,b)(l*b)
#define SUM(a,b)a+b
#define check(a,b)((a>b)?a:b) 
int main(){
	int i,r=3;
	printf("%lf\n",PI*r*r);
	for(i=0;i<MAX;i++)
		printf("%d ",i);
	printf("\n%d",X);
	printf("\n%d",Area(4,5));
	printf("\n%d",SUM(2+7,8+6));
	printf("\n%d",check(4+1,2+5));
}
