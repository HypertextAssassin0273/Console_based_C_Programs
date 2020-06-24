#include<stdio.h>
#include<stdlib.h>
typedef struct{
	char deg[10];
	int age;
	float exp;
}info;
void main(){
	int n,i=0;
	printf("Enter total number of enrolls u want:");
	scanf("%d",&n);
	info *ptr=calloc(n,sizeof(info));
	for(i=0;i<n;i++){
	printf("Enter for no:%d degree,age and experience!!",i+1);
	fflush(stdin);
	gets(ptr[i].deg);
	fflush(stdin);
	scanf("%d",&ptr[i].age);
	fflush(stdin);
	scanf("%f",&ptr[i].exp);
	}
	printf("\nRECORDS:-\n");
	for(i=0;i<n;i++)
	printf("%d\t%s\t%d\t%.2f\n",i+1,ptr[i].deg,ptr[i].age,ptr[i].exp);
	free(ptr);
}
