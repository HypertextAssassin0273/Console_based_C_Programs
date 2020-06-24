/*IN THIS PROGRAM, WE CAN LEARN THE USE OF STATIC KEYWORD,STRUCTURE POINTER,POINTER ARRAY & ACCESSING VOID ADDRESSES*/
#include<stdio.h>
#include<string.h>
typedef struct{
	char name[10];
	float quarter_sales[4],total_annual_sales,avg_quarterly_sales;	
}corp_data;
int i;
void** initialize_corp_data();
void calculate_sales(corp_data *division);
void display_corp_data(corp_data *division);
void main(){
	void **ptr=initialize_corp_data();
	for (i=0;i<4;i++){
	calculate_sales(ptr[i]);
	display_corp_data(ptr[i]);
	}
}
void** initialize_corp_data(){
	int i,x=0;
	static corp_data east={"East",{20,20,20,20},0,0},west={"West",{30,30,30,30},0,0},south={"South",{40,40,40,40},0,0},north={"North",{50,50,50,50},0,0};
	static void *ptr[4]={&east,&west,&south,&north}; 
	/*Note: This pointer array can point different predefined as well as user-defined data-types as it's declared void.
	These addresses can be further accessed by type-casting their respective data-types.
	The best way to do this is to pass them through their respective data-type defined functions */
	return ptr;
}
void calculate_sales(corp_data *division){
	int i;
	for (i=0;i<4;i++)
	division->total_annual_sales+=division->quarter_sales[i];
	division->avg_quarterly_sales=division->total_annual_sales/4;
}
void display_corp_data(corp_data *division){
	printf("DIVISION %d:-\n^^^^^^^^^^",i+1);
	printf("\nDivision Name: %s",division->name);
	printf("\nTotal Annual Sales: %.2f",division->total_annual_sales);
	printf("\nAverage Quarterly Sales: %.2f\n",division->avg_quarterly_sales);
}
