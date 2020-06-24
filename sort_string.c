/*PROGRAM TO SORT A STRING IN ALPHABETICAL ORDER*/
#include<stdio.h>
#include<string.h>
void main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%s",str);
    char temp;
    int i,j;
    int n=strlen(str);
    for (i=0;i<n-1;i++)
        for (j=i+1;j<n;j++)
            if (str[i]>str[j]){
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
            }
    printf("The sorted string is : %s",str);
}
