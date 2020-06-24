#include<stdio.h>
#include<math.h>
void main(){
	/* Best Logic To Check A Prime Number It Will Take Less Time And Most Efficient Way To Check Prime
	Suppose 103 is to be check so i<=n loop takes 103 checks while this square root method will check only 10 times */
	int n,i=0,sq,count=0;
	printf("Enter A Number :");
	scanf("%d",&n);
	sq=sqrt(n);
	if(n!=0){
	for(i=2;i<=sq;i++){ 
	if(n%i==0)
	count++;
	}
	if(count>0)
	printf("%d is not a prime number",n);
	else
	printf("%d is a prime number",n);
    }
    else
    printf("0 is not a prime number");
}
