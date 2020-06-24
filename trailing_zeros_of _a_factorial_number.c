#include<stdio.h> 
#include<stdlib.h>
int find_trailing_zeros(int n);
void main(){ 
    int n;
    printf(" Enter no. to find trailing zeros in it (press 0 to exit): ");
    scanf("%d",&n);
    while(n>0){
    	int *ptr=malloc(sizeof(int)); //i.e. you can also use normal variable
    	*ptr=find_trailing_zeros(n); 
        printf("\n Count of trailing 0s in %d is %d ",n,*ptr);
        free(ptr);
    	printf("\n Enter no. to find trailing zeros in it (press 0 to exit): ");
    	scanf("%d",&n);
	}
}
int find_trailing_zeros(int n){ 
    int i,count=0; 
    for (i=5;n/i>=1;i*=5)      // no k factorial k prime factors me jtne 5 utne zeros
        count+=n/i; 
    return count; 
}
