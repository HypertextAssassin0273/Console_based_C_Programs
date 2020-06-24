/*PROGRAM TO DELETE SPECIFIC LINES FROM A FILE, USING TEMPORARY SWAP FILE METHOD*/
#include<stdio.h>
#include<string.h>
void main(){
    char ch,temp_file_name[]="files\\strings.txt"; // i.e. enter valid path/directory for existing file
	FILE *file_ptr1=fopen(temp_file_name,"r"),*file_ptr2;
	if (file_ptr1==NULL){
	printf("Error: File not found!\a");
	return;
	}
//    printf("Enter file name: "); //i.e. for user input
//    scanf("%s",temp_file_name);
    while (!feof(file_ptr1)){
        fscanf(file_ptr1,"%c",&ch);
        printf("%c",ch);
    }
    rewind(file_ptr1);
    int delete_line,temp=1;
	printf("\nEnter slot number to be deleted: ");
    scanf("%d",&delete_line);
    file_ptr2=fopen("files\\replica.txt","w");
    while (!feof(file_ptr1)){
        fscanf(file_ptr1,"%c",&ch);
        if (ch=='\n')
        temp++;
        if (temp!=delete_line)
   	    fprintf(file_ptr2,"%c",ch);
    }
    fclose(file_ptr1);
    fclose(file_ptr2);
    remove(temp_file_name);
    rename("files\\replica.txt",temp_file_name);
    printf("\n The contents of file after being modified are as follows:\n");
    file_ptr1=fopen(temp_file_name,"r");
    while(!feof(file_ptr1)){
        fscanf(file_ptr1,"%c",&ch);
		printf("%c",ch);    
    }
    fclose(file_ptr1);
}
