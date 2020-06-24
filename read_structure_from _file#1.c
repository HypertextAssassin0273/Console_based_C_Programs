#include<stdio.h>
typedef struct emp{
char name[40];
int age;
float salary;
}emp;
void main(){
	emp a;
	FILE *fp;
	fp=fopen("Write&ReadDataFromStructureToFile.txt","rb");
	if(fp==NULL){
	puts("Can Not Open File ");
	return;
	}
	while(fread(&a,sizeof(a),1,fp)!=0){
		printf("%s %d %f\n",a.name,a.age,a.salary);
		fflush(stdin);
	}
	fclose(fp);
}
