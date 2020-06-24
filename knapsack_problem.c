/*PROGRAM THAT IMPLEMENTS THE KNAPSACK PROBLEM FOR 'N' ITEMS*/
#include<stdio.h>
int max(int a,int b);
int knapsack(int W,int weight[],int value[],int n);
void main(){
int n,i,W;
printf("\nEnter the number of items: ");
scanf("%d",&n);
int value[n],weight[n];
printf("\nEnter the item's weight and then its value:-\n");
for(i=0;i<n;i++)
scanf("%d %d",&weight[i],&value[i]);
printf("\nEnter the capacity of the knapsack: ");
scanf("%d",&W);
printf("\nMaximum value in a 0-1 knapsack : %d\n",knapsack(W,weight,value,n));
}
int max(int a,int b){ //i.e. function to find maximum of two integers
return (a>b)?a:b;
}
int knapsack(int W,int weight[],int value[],int n){ //i.e. returns the maximum value that can be put in a knapsack of capacity W
int i,w,K[n+1][W+1];
for (i=0;i<=n;i++) //i.e. table K[][] build in bottom up manner
for (w=0;w<=W;w++){
if (i==0||w==0)
K[i][w]=0;
else if(weight[i-1]<=w)
K[i][w]=max(value[i-1]+K[i-1][w-weight[i-1]],K[i-1][w]);
else
K[i][w]=K[i-1][w];
}
return K[n][W];
}
