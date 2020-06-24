#include<stdio.h>
char *__cdecl upper_to_lower_case(char *arr);
void main(){
char arr[20];
printf("Enter A String :");
gets(arr);
upper_to_lower_case(arr);
printf("String Conversion: %s",arr);
}
char *__cdecl upper_to_lower_case(char *arr){
int i;
for(i=0;arr[i]!='\0';i++){
if(arr[i]>='A' && arr[i]<='Z')
arr[i]=arr[i]+32;
}
}
