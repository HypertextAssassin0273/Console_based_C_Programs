/*IN THIS PROGRAM,WE CAN LEARN THE USE OF strstr() & strlen() FUNCTIONS*/
#include<stdio.h>
#include<string.h>
int i,check_substring(char formulas_arr[]);
void display_results(int x,char formulas_arr[]);
void main(){
	char formulas_arr[6][10]={"KOH","NaOH","OHNaCl","H2O2","MgOH","C9OH8O4"},(*formulas_ptr)[10]=formulas_arr;
	printf("DATA:-\t\tSTATUS:-\n");
	for(i=0;i<6;i++)
		display_results(check_substring(formulas_ptr[i]),formulas_ptr[i]);
}
int check_substring(char formulas_arr[]){
	char temp_arr[3],*temp_ptr=&formulas_arr[i];
	temp_arr[0]=temp_ptr[strlen(temp_ptr)-2]; //i.e. O
	temp_arr[1]=temp_ptr[strlen(temp_ptr)-1]; //i.e. H
	temp_arr[2]='\0';
	char *check_ptr=strstr(temp_arr,"OH"); //Note: strstr return pointer to the first occurance of string in a given string
	if (check_ptr) //alternate: return check; 
	return 1;
	else
	return 0;
}
void display_results(int check,char formulas_arr[]){
	printf("%s\t\t",formulas_arr);
	if (check)
	printf("Found\n");
	else
	printf("Not Found\n");
}
