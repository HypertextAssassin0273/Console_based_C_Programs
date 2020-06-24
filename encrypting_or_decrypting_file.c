#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void encrypt(int size,char arr[]){
	int i;
	FILE *fp=fopen("files\\data.txt","r+");
	fgets(arr,size,fp);
	for(i=0;i<strlen(arr);i++)
		arr[i]+=2;
	rewind(fp);
	fputs(arr,fp);
	fclose(fp);
	printf("\nEncyrption Successful!");
}
void decrypt(int size,char arr[]){
	int i;
	FILE *fp=fopen("files\\data.txt","r+");	
	fgets(arr,size,fp);
	for(i=0;i<strlen(arr);i++)
		arr[i]-=2;
	rewind(fp);
	fputs(arr,fp);
	fclose(fp);
	printf("\nDecyrption Successful!");
}
int calc_file_size(){
	char read; int size=0;
	FILE *fp=fopen("files\\data.txt","r");
	if(!fp){
		printf("Error in opening file!!\a");
		exit(1);
	}
	while(!feof(fp)){
	fscanf(fp,"%c",&read);
	size++;
	}
	fclose(fp);
	return size;
}
void main(){
	int choice,size=calc_file_size();
	char arr[size];
	while(1){
	system("cls");
	fflush(stdin);
	printf("Note: U must type a paragrapgh in 'data.txt' file fisrt,in order to utilize this program!\n");
	printf("Select:\n1. Encryption\n2. Decryption\n==>");
	scanf("%d",&choice);
	if (choice>0&&choice<3&&choice!=32761)
	break;
	printf("\a");
	}
	if(choice==1)
	encrypt(size,arr);
	else if(choice==2)
	decrypt(size,arr);
}
