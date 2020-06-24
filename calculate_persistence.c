/*PROGRAM TO FIND OUT THE PERSISTANCE OF A NUMBER*/
#include<stdio.h>
int persistence(int x);
void main(){
  int x;
  printf("Insert an integer: ");
  scanf("%d",&x);
  printf("\nThe persistence of %d is %d.\n",x,persistence(x));
}
int persistence(int x){
  int digit,y=1,pers=0;
  while(x>9){
    while(x>9){
        digit=x%10;
        y=y*digit;
        x=x/10;
    }
    pers++;
    x=y;
  }
  return pers;
}
