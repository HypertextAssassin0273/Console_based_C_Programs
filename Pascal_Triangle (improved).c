#include<stdio.h>
void main(){
int i,j,k,lines,x;
printf("Enter Total Lines: ");
scanf("%d",&lines);
for(i=0;i<lines;i++){
for(j=0;j<lines-i;j++)
printf(" ");
x=1; /* To Print 1 Everytime In Each Line */
for(k=0;k<=i;k++){ /* Once x=1 prints,then k loop will execute till the condition becomes false so the new values 
					  a/c to the formula of pascal triangle prints again & again */
printf("%d ",x);
x=x*(i-k)/(k+1); /* Formula Of Pascal Triangle To Generate The Middle Terms Between The Ranges */
}
printf("\n");
}
}
