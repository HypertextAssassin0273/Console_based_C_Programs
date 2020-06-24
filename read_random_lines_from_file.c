#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*ADDITIONAL INFO*/
// fseek is just used to move the file pointer from current to new position
// SEEK_SET to move From the Start of file To Given Offset 
// SEEK_CUR to Move From Current To Given Offset
// SEEK_END to Move From END To Given Offset
// Arguements = fseek(filepointer,offset,currentpos(cur,set,end) )
void random(int a[]){
	int i,j;
	srand(time(NULL));
	for(i=0;i<10;i++){
		a[i]=rand()%10;
		for(j=0;j<i;j++){
			if(a[i]==a[j]){
			i--;
			break;
			}
		}
	}
}
void displaylinesrandomly(int a[],int i){
	int line,j,count=0;
	char s[50];
	FILE *fp;
	fp=fopen("files//strings.txt","r");
	if(!fp){
	printf("File Does Not Exist Or It Can't Be Opened !");
	exit(1);
	}
	line=a[i];
	while(!feof(fp)){
	fgets(s,1000,fp);
	if(count==line){
	puts(s);
	break;
	}
	else
	count++;
	}
}
void main(){
	int i,a[10]={};
	random(a);
	for(i=0;i<10;i++)
    displaylinesrandomly(a,i);
}
