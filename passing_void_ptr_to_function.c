#include<stdio.h>
void fun(int *x){
printf("\n%d",*x);
}
void main(){
int x=5;
void *p,(*ptr)(int*); //(*ptr)(int) is a function pointer
p=&x;
printf("%d",p);
fun((int*)p);
ptr=fun; /// saving address of the function to the function pointer
ptr(&x); // pointing function call
}
