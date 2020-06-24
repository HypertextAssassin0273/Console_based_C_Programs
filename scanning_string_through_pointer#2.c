/*This program is improved version of its previous version,named as 'scanning_string_through_pointer#1' */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
    size_t size;
    char data[];
}char_array;
void* new_char_array(void *const previous_string,size_t size);
void main(){
	int size;
	while(1){
		system("cls");
		fflush(stdin);
		printf("Enter size of string: ");
		scanf("%d",&size);
		if (size>0&&size!=32761) //i.e. restricting from assigning -ve values & characters
		break;
		printf("\a");
	}
	char_array *arr=new_char_array(NULL,size); //Note: In C,there is no need to type cast the returned address from a function whose return type is 'void address'
	strcpy(arr->data,"\0");
	while(1){
		system("cls");
		fflush(stdin);
		printf("Enter string:- (max. characters limit: %d)\n",size);
		scanf("%[^\n]",arr->data);
		if (strlen(arr->data)>0&&strlen(arr->data)<=size) //i.e. using strlen function to calc. size of array so that the string size does not exceed the limit
		break;											  //	 & also it neglects null string
		printf("\a");
	}
	printf("\nBefore Dynamic Reallocation:-");
	printf("\nYou entered: %s\nsize of string: %d/%d",arr->data,arr->size,size);
	arr=new_char_array(arr,strlen(arr->data));
	printf("\nAfter Dynamic Reallocation:-");
	printf("\nYou entered: %s\nsize of string: %d/%d",arr->data,arr->size,size);
	free(arr);
}
void* new_char_array(void *const previous_string,size_t size){
    char_array *arr=(char_array*)realloc(previous_string,sizeof(size_t)+sizeof(char)*size);
    if(!arr)
    return NULL;
    arr->size=size;
    return arr;
}
