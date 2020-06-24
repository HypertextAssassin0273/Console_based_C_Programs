#include<stdio.h>
void main(){
int size,i,x,max_1,max_2,index;
printf("Enter Size Of An Array :");
scanf("%d",&size);
int a[size];
printf("Enter %d Numbers: ",size);
for(i=0;i<size;i++)
scanf("%d",&a[i]);
max_1=a[0];
for(i=1;i<size;i++){
if(a[i]>max_1){
max_1=a[i];
index=i;
}
}
x=a[size-1];
a[size-1]=a[index];
a[index]=x;
max_2=a[0];
for(i=1;i<size-1;i++){
if(a[i]>max_2)
max_2=a[i];
}
printf("The Second Largest Number Is %d",max_2);
}
