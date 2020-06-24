#include<stdio.h>
int main(){
int n,i,count=0;
printf("Enter A Number To Check Whether It Is Prime Or Non Prime :");
scanf("%d",&n);
for(i=1;i<=(n/2);i++){ // n/2 tk check hoga sirf
if(n%i==0){
count++;
}
}
if(count==1){
printf("%d Is Prime",n);
}
else
printf("%d Is Not Prime",n);
}
