/*PROGRAM THAT TAKES INPUTS DURING EXECUTION, USING 'kbhit()'*/
#include<stdio.h>
#include<conio.h>
#define escape 27
#define enter 13
void main(){
	char get_buffer_value;
    while (1){
        if (kbhit()){
        get_buffer_value=getch(); //i.e. stores the pressed key character in 'get_buffer_value' 
        if (get_buffer_value==escape||get_buffer_value==enter) //i.e. terminates the loop when 'escape' or 'enter' is pressed
        break;
        printf("\nKey pressed=%c",get_buffer_value);
        }
    }
}
