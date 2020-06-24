#include<stdio.h>
int Minindex(int n,int k,int a[]){
int ind=0,i=0,min;
min=a[k];
ind=k;
for(i=k;i<n;i++){
if(min<a[i+1]){
min=a[i+1];
ind=i+1;
}
}
return ind;
}
void main(){
int i,n,ind,temp;
printf("Enter Total Numbers To Be Entered :");
scanf("%d",&n);
int a[n];
printf("Enter %d Numbers :",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++){
ind=Minindex(n,i,a);
temp=a[i];
a[i]=a[ind];
a[ind]=temp;
}
printf("The Sorted Order Is,\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
}
