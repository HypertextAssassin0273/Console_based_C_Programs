#include<stdio.h>
#include<stdlib.h>
typedef struct{
	char deg[10];
	int age;
	float exp;
}info;
info* create_and_reallocate_info(info *ptr,int size){
	return realloc(ptr,size*sizeof(info));
}
void main(){
	int size,i=0,temp_size;
	printf("Enter total number of enrolls u want:");
	scanf("%d",&size);
	info *ptr=create_and_reallocate_info(NULL,size);//new
	for(i=0;i<size;i++){
	printf("Enter for no:%d degree,age and experience!!",i+1);
	fflush(stdin);
	gets(ptr[i].deg);
	fflush(stdin);
	scanf("%d",&ptr[i].age);
	fflush(stdin);
	scanf("%f",&ptr[i].exp);
	}
	printf("\nRECORDS:-\n");
	for(i=0;i<size;i++)
	printf("%d\t%s\t%d\t%.2f\n",i+1,ptr[i].deg,ptr[i].age,ptr[i].exp);
	printf("Enter total number of enrolls u want:");
	scanf("%d",&temp_size);
	ptr=create_and_reallocate_info(ptr,temp_size);//resize and reallocate
	for(i=size;i<temp_size;i++){
	printf("Enter for no:%d degree,age and experience!!",i+1);
	fflush(stdin);
	gets(ptr[i].deg);
	fflush(stdin);
	scanf("%d",&ptr[i].age);
	fflush(stdin);
	scanf("%f",&ptr[i].exp);
	}
	printf("\nRECORDS:-\n");
	for(i=0;i<temp_size;i++)
	printf("%d\t%s\t%d\t%.2f\n",i+1,ptr[i].deg,ptr[i].age,ptr[i].exp);
	free(ptr);
}
