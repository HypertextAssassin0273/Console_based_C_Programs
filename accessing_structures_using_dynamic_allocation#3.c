#include<stdio.h>
#include<stdlib.h>
typedef struct{
	char deg[10];
	int age;
	float exp;
}info;
info* create_and_reallocate_info(info *ptr,int size);
void input_info(info *ptr,int size,int temp_size);
void display_info(info *ptr,int size);
void main(){
	int size,temp_size;
	printf("Enter total number of enrolls u want:");
	scanf("%d",&size);
	info *ptr=create_and_reallocate_info(NULL,size);//new
	input_info(ptr,0,size);
	display_info(ptr,size);
	printf("Enter total number of enrolls u want:");
	scanf("%d",&temp_size);
	ptr=create_and_reallocate_info(ptr,temp_size);//resize and reallocate
	input_info(ptr,size,temp_size);
	display_info(ptr,temp_size);
	free(ptr);
}
info* create_and_reallocate_info(info *ptr,int size){
	return realloc(ptr,size*sizeof(info));
}
void input_info(info *ptr,int size,int temp_size){
	int i;
	for(i=size;i<temp_size;i++){
		printf("Enter for no.%d degree,age and experience: ",i+1);
		fflush(stdin);
		scanf("%s%d%f",ptr[i].deg,&ptr[i].age,&ptr[i].exp);
	}
}
void display_info(info *ptr,int size){
	int i;
	printf("\nRECORDS:-\n");
	for(i=0;i<size;i++)
	printf("%d\t%s\t%d\t%.2f\n",i+1,ptr[i].deg,ptr[i].age,ptr[i].exp);
}
