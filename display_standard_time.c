/*PROGRAM THAT CAN DISPLAY TIME IN SUCH A WAY THAT ONLY NON-ZERO TIME-VARIABLES APPEAR IN STANDARD FORMAT*/
#include<stdio.h>
typedef struct{
	int secs,mins,hours;
}time_format;
void display_standard_time(int n);
void main(){
	int n;
	printf ("Input Seconds: ");
	scanf ("%d",&n);
	display_standard_time(n);
//printf("\n=>%d",n%3600);
}
void display_standard_time(int n){
	time_format t;
//	t.hours=((n%86400)/3600)%3600; // i.e. method#1
//	t.mins=((n%3600)/60)%60;
//	t.secs=n%60;
	t.hours=(n/3600)%24; // i.e. method#2
	t.mins=(n/60)%60;
	t.secs=n%60;
	/*NOTE: Using power set formula to calc. possible outcomes: 2n-> 8 possibilities, 8-1=7 (neglecting null possiblity)*/
	if (t.hours&&t.mins&&t.secs)
	printf ("%d hours %d mins %d secs",t.hours,t.mins,t.secs);
	else if (t.mins&&t.secs)
	printf ("%d mins %d secs",t.mins,t.secs);
	else if (t.hours&&t.mins)
	printf ("%d hours %d mins",t.hours,t.mins);
	else if (t.hours&&t.secs)
	printf ("%d hours %d secs",t.hours,t.secs);
	else if (t.secs)
	printf ("%d secs",t.secs);	
	else if (t.mins)
	printf ("%d mins",t.mins);
	else if (t.hours)
	printf ("%d hours",t.hours);
}
