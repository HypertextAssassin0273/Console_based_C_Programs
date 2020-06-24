/*PROGRAM THAT IMPLEMENTS THE CONCEPT OF (LINEAR) LINKED LIST, USING NODES (STACK ORDER: LIFO)*/
#include<stdio.h>
#include<stdlib.h>
typedef struct{
	int info;
	struct node *link;
}node;
node *START=NULL;
node* Create_Node();
void Insert_Node();
void Delete_Node();
void View_List();
void main(){
	system("pause");
	while (1){
		fflush(stdin);
		system("cls");	
		switch (Menu()){
		case 1:
		Insert_Node();
		break;
		case 2:
		Delete_Node();
		break;
		case 3:
		View_List();	
		break;	
		case 4:
		case -21:
		exit(0);	
		default:
		printf("!!INVALID CHOICE!!\a");	
		}
	}
}
int Menu(){
	int choice;
	printf("\nSELECT YOUR CHOICE:-\n");
	printf("\n1. Add value to the list (in the end)");
	printf("\n2. Delete first value");
	printf("\n3. View List");
	printf("\n4. Exit (or press Esc)\n\n");
	choice=getch()-48;
	return choice;
}
node* Create_Node(){ //Note: This function can be hide in C++ -> private constructor
	node *n=(node*)malloc(sizeof(node));
	return n;
}
void Insert_Node(){
	node *temp,*t;
	temp=Create_Node();
	printf("Enter the value: ");
	scanf("%d",&temp->info);
	temp->link=NULL;
	if (START==NULL)
	START=temp;
	else{
	t=START;
	while (t->link!=NULL)
	t=t->link;
	t->link=temp;
	}
}
void Delete_Node(){
	node *r;
	if (START==NULL)
	printf("List is empty!");
	else{
	printf("Value deleted!");	
	r=START;
	START=START->link;
	free(r);
	}
	getch();
}
void View_List(){
	node *t;
	if (START==NULL)
	printf("List is empty!");
	else{
	t=START;
	printf("Your List: ");
	while (t!=NULL){
		printf (" %d",t->info);
		t=t->link;
	}
	}
	getch();
}
