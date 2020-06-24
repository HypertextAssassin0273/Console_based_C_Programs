/*PROGRAM TO FIND PERMUTATION OF 'N' ITEMS WITH 'R' COMBINATIONS (i.e. nPr)*/
#include<stdio.h>
int fact(long int x){
    long int f=1,i;
    for(i=1;i<=x;i++)
        f*=i;
    return f;
}
void main(){
    long int n,r,p,temp,num,den;
    printf("Enter the number of seats available : ");
    scanf("%ld",&r);
    printf("nEnter the number of persons : ");
    scanf("%ld",&n); 
    //i.e. base condition (swap n & r)
    if(n<r){
    temp=n;
    n=r;
    r=temp;
    }
    num=fact(n);
    den=fact(n-r);
    p=num/den;
    printf("nNumber of ways people can be seated : ");
    printf("%ld",p);
}
