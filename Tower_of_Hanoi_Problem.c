#include<stdio.h>
void hanoi(int n,char F,char T,char A){
	if(n==1){
	printf("\nMove Disk 1 From Rod %c to Rod %c",F,T);
	return;
	}
	hanoi (n-1,F,A,T);
	printf("\nMove Disk %d From Rod %c To Rod %c",n,F,T);
	hanoi(n-1,A,T,F);
}
void main(){
	int disc;
	printf("Enter Total Disks :");
	scanf("%d",&disc);
	printf("\n");
	hanoi(disc,'A','B','C');
}
