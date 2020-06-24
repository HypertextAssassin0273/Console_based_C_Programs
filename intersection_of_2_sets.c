/* INTERSECTION FOR 2 SETS */
#include<stdio.h> 
void main(){
	int i=0,j=0;
	int A[]={1,3,3,7},B[]={1,3,5,7};
	int m=sizeof(A)/sizeof(A[0]),n=sizeof(B)/sizeof(B[0]);
	int *ptrA=A,*ptrB=B;
	while (i<m&&j<n){
	    if (A[i]<B[j])
	    i++;
	    else if(B[j]<A[i])
	    j++;
	    else{ /*if(A[i]==B[j])*/
	    printf(" %d ",B[j++]);
		i++;
	    }
	}
}
