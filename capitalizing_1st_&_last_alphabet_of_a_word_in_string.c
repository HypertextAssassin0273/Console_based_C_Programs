#include<stdio.h>
void main(){
	int i; char arr[]="I am Good Progammer, & I know how To CodE";
	printf("original: %s\n",arr);
	if (arr[0]>96&&arr[0]<123)
	arr[0]-=32;
	for (i=0;arr[i];i++){
		if(arr[i]==32&&arr[i-1]>96&&arr[i-1]<123)
		arr[i-1]-=32;
		if(arr[i]==32&&arr[i+1]>96&&arr[i+1]<123)
		arr[i+1]-=32;
	}
	if (arr[i]>96&&arr[i]<123)
	arr[i]-=32;
	printf("converted: %s",arr);
}
