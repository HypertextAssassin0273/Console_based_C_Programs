/*PROGRAM TO SET CONSOLE COLOR IN DIFFERENT COLOR COMBINATIONS*/
#include<stdio.h>
#include<windows.h>
HANDLE handle_var;
#define handle_var GetStdHandle(STD_OUTPUT_HANDLE)
//Note: Here,GetStdHandle() function is used to input specific modes for graphical representations on console
void main (){
    int count;
    for(count=0;count<257;count++){
		SetConsoleTextAttribute(handle_var,count);
    	printf("color combination number: %i\n",count); 
    } 
    SetConsoleTextAttribute(handle_var, 7);
    system("pause");
}
