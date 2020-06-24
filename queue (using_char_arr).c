#include<stdio.h>
#include<conio.h>
void main(){
	int size=0,x,last=0,first=0,i,j;	
	printf("Enter size of queue: ");
	scanf("%d",&size);
	char queue[size];
	printf("\nWhich operation u want to perform?\n");
	printf("1)Insert.\n2)Delete.\n3)display.\n4)Exit.\n");
	getch();
	system("cls");	
	do{
		printf("\nEnter 1,2,3 or 4 to select operation: ");
		scanf("%d",&x);
		if(x==1){
		if(last==size)
		printf("\nTHE QUEUE IS FULL!\n");
		else{
		printf("Enter element in queue:");
		scanf(" %c",&queue[last]);
		last++;
		}
		}
		if(x==2){
		if(last==first)
		printf("\nTHE QUEUE IS EMPTY!\n");
		else{
		for(i=0;i<size-1;i++)
			queue[i]=queue[i+1];
		last--;
		}
		}
		if(x==3){
		if(last==first)
		printf("\nTHE QUEUE IS EMPTY!\n");
		else{
		printf("THE QUEUE ELEMENTS ARE:");
		for(i=0;i<last;i++)
			printf(" %c",queue[i]);
		printf("\n");
		}	
		}	
	}while(x!=4);
}
