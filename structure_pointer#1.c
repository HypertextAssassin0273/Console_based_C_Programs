/*IN THIS PROGRAM, WE CAN LEARN THE USE OF STATIC KEYWORD & STRUCTURE POINTER */
#include<stdio.h>
#include<stdlib.h>
typedef struct{
	float length,width;
}rectangle;
rectangle* initialize_rectangle();
void check(rectangle *r);
float calc_perimeter(rectangle *r);
float calc_area(rectangle *r);
void display_perimeter(float perimeter);
void display_area(float area);
void main(){
	rectangle *ptr=initialize_rectangle();
	check(ptr);
	display_perimeter(calc_perimeter(ptr));
	display_area(calc_area(ptr));
}
rectangle* initialize_rectangle(){
	static rectangle r={1,1};
	return &r;
}
void check(rectangle *r){
	if (r->length>0&&r->length<20&&r->width>0&&r->width<20)
	printf("NOTE: length & width both are in given range!\n");
	else{
	printf("NOTE: length & width are not in given range!\n");
	exit(1);
	}
}
float calc_perimeter(rectangle *r){
	return (2*(r->length+r->width));
}
float calc_area(rectangle *r){
	return (r->length*r->width);
}
void display_perimeter(float perimeter){
	printf("\nPerimeter of rectangle: %.2f",perimeter);
}
void display_area(float area){
	printf("\nArea of rectangle: %.2f",area);
}
