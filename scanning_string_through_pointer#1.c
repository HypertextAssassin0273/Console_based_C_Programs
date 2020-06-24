/*THIS PROGRAM GIVES US THE FOLLOWING CONCEPTS & TACKLES WITH THE ISSUES/ERRORS DESCRIBED IN THESE CONCEPTS:
1) Pointers can't hold that data (i.e. strings) which exceeds the allocated size & as a result,the program crashes.
   Instead of this,we initally set maximum possible size for dynamically allocated pointers & after that we reallocate them w.r.t required size
2) Those pointers,who are not allocated the size of information,can only hold the information upto its data-type size.
3) If you have function that accepts an array,then either you have to pass the pointer & the size of the array pointed by the pointer 
   OR two pointers with one pointing to the first element of the array and one pointing one-past-the-end of the array.
   Also,you can't even tell if the pointer points to an array or a single object (at least not portably).
   So,to resolve this problem,we use structure in which length of array is also included. 
4) A program is considered well structured only if it's ammune to errors which are usually caused by inappropriate data inputs by users.
   This can only be achieved if it is handled initially.So,we use a loop which only terminates if the data is appropriate.
*/
//Note: You have to make changes yourself to see the described above errors (i.e. change dynamically allocated pointer to normal pointer or array)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct{
    size_t size; //i.e. size->8 bytes
    char data[]; //Note: Declaring this variable as an empty array at the end of struct allows us to use it as flexible array for dynamic memory allocations only.
}char_array;	 //		 Thus,allows us to use it without defining its size.
void dynamic_string(char *string,int size);
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
	char *string=malloc(sizeof(char)*1000); //Note: Allocating extra space than required so that if user exceeds the limit, then no error is generated
	/*Note: i) Here,we can use array or normal pointer to get the string,but then we cannot free our memory at any point that we have allocated in huge amount 
	(i.e. resulting in memory waste) ii) In C,there is no need to type cast the returned address from a function whose return type is 'void address' */
	strcpy(string,"\0"); //i.e. initializing string with NULL (so that the size of string becomes zero)
	while(1){
		system("cls");
		fflush(stdin);
		printf("Input String: (max. characters limit: %d)\n=> ",size);
		scanf("%[^\n]",string);
		/*SOME TECHNIQUES WHICH CAN ALSO BE APPLIED IN THIS WHILE LOOP FOR DIFFERENT PURPOSES:
		- to neglect null string: 1) use, strcmp(string,"") 2) use ascii of enter & then compare with string
		- to make sure size does not exceed: 1) assign null in array w.r.t limit 2) copy data from temp arr to original */
		if (strlen(string)>0&&strlen(string)<=size) //i.e. using strlen function to calc. size of array so that the string size does not exceed the limit
		break;										//	   & also it neglects null string
		printf("\a");
	}
	dynamic_string(string,size);
	free(string);
}
void dynamic_string(char *string,int size){ // i.e. call by reference method
	char_array *arr=(char_array*)malloc(sizeof(size_t)+sizeof(char)*size); //i.e. allocating space for 'n' char bytes for array & 1 size_t bytes for array size
	if(!arr) //i.e. making sure that the address is assigned 
    return;
    strcpy(arr->data,string);
    arr->size=size;
	printf("\nBefore Dynamic Reallocation:-");
	printf("\nstring: %s",arr->data);
	printf("\nsize: %d/%d",strlen(arr->data),arr->size);
	arr=realloc(arr,sizeof(size_t)+sizeof(char)*strlen(arr->data)); //i.e. reallocating space w.r.t length of entered string & 1 size_t bytes for array size
	arr->size=strlen(arr->data);
	printf("\nAfter Dynamic Reallocation:-");
	printf("\nstring: %s",arr->data);
	printf("\nsize: %d/%d",strlen(arr->data),arr->size);
	free(arr);
}
