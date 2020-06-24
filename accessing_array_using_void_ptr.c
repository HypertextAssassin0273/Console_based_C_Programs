/*ACCESING ARRAY VALUES THROUGH VOID POINTER*/
#include<stdio.h>
void main(){
int ar[6]={1,2,3,4,5,'\0'};//Note: Here, null is used as sentinel value/stopping criteria
 void *p=ar,*temp_initial_address=ar;
 for(;*(int*)p!='\0';p+=sizeof(int))// i.e. by this method, we dont need size of array.
 printf("\n%d val is %d",p,*(int*)p);
p=temp_initial_address;
 /*using ptr again after reseting the pointer*/
 printf("\n\n");
 for(;*(int*)p!='\0';p+=sizeof(int))
 printf("\n%d val is %d",p,*(int*)p);
}
