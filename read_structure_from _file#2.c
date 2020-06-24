#include<stdio.h>
typedef struct student{
	int roll;
	int age;
	char p[15];
}std;
void main(){
std data;
char x='Y';
FILE *fp;
fp=fopen("files//strings.txt","r");
if(!fp){
printf("File Can Not Be Opened !");
return;
}
while(fscanf(fp,"%s%d%d",&data.p,&data.age,&data.roll)!=-1) // fscanf returns '-1' so the condition changes
printf("Name : %s\nAge : %d\nRoll Number : %d\n",data.p,data.age,data.roll);
fclose(fp);
}
