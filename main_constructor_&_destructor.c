/*PROGRAM TO CALL FUNCTIONS THAT ARE EXECUTED BEFORE & AFTER 'main()'*/
//Note: This method is only applicable to GCC Compilers
#include<stdio.h>
void main_constructor();
void main_destructor();
//Note: Apply the constructor attribute before any function name,so that it is executed before main()
void __attribute__((constructor)) main_constructor();
//Note: Apply the destructor attribute before any function name,so that it is executed after main()
void __attribute__((destructor)) main_destructor();
void main_constructor(){
 	printf("Inside constructor()\n");
}
void main(){
	printf("Inside main()\n");
}
void main_destructor(){
	printf("Inside destructor()\n");
}
