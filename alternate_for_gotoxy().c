/*PROGRAM TO SET THE BLINKING POINTER ON DESIGNATED CO-ORDINATES*/
/*NOTE: In Turbo c/c++ you can directly use the gotoxy() library function.
		But,in Visual-Studio,DevC++ or Code-Blocks,you have to use this method in order to use it.*/
#include<stdio.h>
#include<windows.h>
#define handle_var GetStdHandle(STD_OUTPUT_HANDLE)
//Note: Here,'GetStdHandle()' function is used to input specific modes for graphical representations
gotoxy(int x,int y){
	COORD var; //i.e. COORD-> structure
	var.X=x,var.Y=y;
	SetConsoleCursorPosition(handle_var,var);
}
void main (){
	int i;
	for (i=0;i<9;i++){
	gotoxy (54,i+1);
	printf ("HELLO");
	}
}
