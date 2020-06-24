#include<stdio.h>
/* Prime Numbers Sum = Actual Number */
int Prime(int);
int Prime(int a){
	int b,count=0;
	for(b=1;b<=a;b++){
		if(!(a%b))
		count++;
	}
	if(count==2)
	return 1;
	else if(count==1)
	return 1;
	return 0;
}
void main(){
	int n,i=1,p=0,s,j,k;
	printf("Enter Any Number :");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++){
	p=n-i;
	s=i+p;
	j=Prime(i);
	k=Prime(p);
	if(j&&k)
	printf("\n%d + %d = %d",i,p,s);
    }
	getch();
}
