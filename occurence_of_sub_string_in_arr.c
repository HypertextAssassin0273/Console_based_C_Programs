#include<stdio.h>
int SubString(char a[],char s[]){
int i,j,l1=0,l2=0,k=0,count=0;
for(i=0;a[i]!='\0';i++)
l1++;
for(i=0;s[i]!='\0';i++)
l2++;
for(i=0;a[i]!='\0';i++){ 
k=i;	
for(j=0;j<l2;j++){
if(a[k]!=s[j])
break;
k++;
}
if(j==l2)
count++;
}
return count;
}
void main(){
int x=0;
char a[100],s[100];
printf("Enter An String :");
gets(a);
printf("Enter A SubString To Search In The Given String: ");
gets(s);
x=SubString(a,s);
printf("The Occurence Of %s In Given String Is %d Times",s,x);
}
