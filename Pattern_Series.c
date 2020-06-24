#include<stdio.h>
void main(){
	int i,j,k,n,x,y;
	printf("Enter Rows: ");
	scanf("%d",&n);
	printf("\n----------------------------------\n");
	printf("!!!G E N E R A L  P A T T E R N S!!!");
	printf("\n----------------------------------\n\n");
	/*PATTERN#1*/
	for (i=1;i<=n;i++){	
		for (j=1;j<=n;j++){
			if (j<=i) //<==NOTE
			printf("*");
			else 
			printf(" ");
		}
		printf ("\n");
	}
	printf("\n----------------------------------\n\n");
	getch();
	/*PATTERN#2*/
	for (i=1;i<=n;i++){	
		for (j=1;j<=n;j++){
			if (j>=i) //<==NOTE
			printf("*");
			else 
			printf(" ");
		}
		printf("\n");
	}
	printf ("\n----------------------------------\n\n");
	getch();
	/*PATTERN#3*/
	x=n;
	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++){
			if (j>=x) //<==NOTE
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
		x--;
	}
	printf("\n----------------------------------\n\n");
	getch();
	/*PATTERN#4*/
	x=n;
	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++){
			if (j<=x) //<==NOTE
			printf("*");
			else 
			printf(" ");	
		}
		printf("\n");
		x--;
	}
	printf("\n----------------------------------\n\n");
	getch();	
	/*PATTERN#5*/
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==j||i==n||j==1)
			printf("*");
			else
			printf(" ");	
		}
		printf("\n");
	}
	printf("\n----------------------------------\n\n");
	getch();
	/*PATTERN#6*/
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(j=1;j<=i;j++){
			if(j==1||i==n||i==j)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	printf("\n----------------------------------\n\n");
	getch();
	/*PATTERN#7*/
	x=n,y=n;
	for (i=1;i<=n;i++){
		for (j=1;j<=n+n-1;j++){
			if (j>=x&&j<=y) //<==NOTE
			printf("*");
			else 
			printf(" ");	
		}
		printf ("\n");
		x--;
		y++;
	}
	printf("\n----------------------------------\n\n");
	getch();
	/*PATTERN#8*/
	x=n; y=n; k=0; //<== Introducing "k" for alternate pattern 
	for (i=1;i<=n;i++){
		for (j=1;j<=2*n+1;j++){
			if (j>=x&&j<=y&&k==0){ //<==NOTE & REMEMBER: if () statement runs only if it's true and contains non-zero no. 
			printf("*");
			k=1;
			}
			else{
			printf(" ");
			k=0;
			}
		}
		printf("\n");
		x--;
		y++;
	}
	printf("\n----------------------------------\n\n");
	getch();
	/*PATTERN#9*/
	for(i=1;i<=n;i++){
		for(j=1;j<=i-1;j++)
			printf(" ");
		for(j=n-i+1;j>=1;j--)
			printf("* ");
		printf("\n");
	}
	printf("\n----------------------------------\n\n");
	getch();
	/*PATTERN#10*/
	for(i=1;i<=n;i++){ //i.e. upper half  
		for(j=1;j<=2*n;j++){ 
			if(i>(n-j+1))
	 		printf(" "); 
	 		else 
 			printf("*"); 
 			if ((i+n)>j) 
 			printf(" ");  
 			else 
 			printf("*");  
 		} 
 		printf("\n"); 
 	}
 	for(i=1;i<=n;i++){ //i.e. lower half
 		for(j=1;j<=2*n;j++){ 
 			if (i<j) 
 			printf(" "); 
 			else 
	 		printf("*");  
 			if (i<=((2*n)-j)) 
 			printf(" ");
 			else 
 			printf("*");  
 		} 
 		printf("\n"); 
 	}
	printf("\n----------------------------------\n\n");
	getch();
	/*PATTERN#11*/
	k=1;
	for (i=1;i<=n;i++){
	for (j=1;j<=n*2;j++){
	if ((i==1||i==n)&&k||j==1||j==n*2-1){
	printf("*");
	k=0;
	}
	else{
	printf(" ");
	k=1;
	}
	}
	printf("\n");
	}
	printf("\n----------------------------------\n");
	getch();
	printf("!!!F I X E D  P A T T E R N S!!!");
	printf("\n----------------------------------\n\n");
	/*PATTERN#12*/
	for (i=1;i<=5;i++){
		for (j=1;j<=9;j++){
			if (j<=6-i||j>=4+i) //<==NOTE
			printf("*");
			else 
			printf(" ");	
		}
		printf("\n");
	}
	printf("\n----------------------------------\n\n");
	getch();
	/*PATTERN#13*/ 
	for (i=1;i<=4;i++){
		k=1; //<== Introducing "k" for  increament or decreament
		for (j=1;j<=7;j++){
			if (j>=5-i&&j<=3+i){ //<==NOTE  
			printf("%d",k);
			j<4?k++:k--; //<== Condition for increament or decreament
			}
			else 
			printf(" ");
		}
		printf("\n");
	}
	printf("\n----------------------------------\n\n");
	getch();
	/*PATTERN#14*/
	for (i=1;i<=4;i++){
		k='A'; //<== Introducing "k" for  increament or decreament
		for (j=1;j<=7;j++){
			if (j<=5-i||j>=3+i){ //<==NOTE  
			printf("%c",k);
			j<4?k++:k--; //<== Condition for increament or decreament
			}
			else{
			printf(" ");
			if (j==4)  //<== To decreament "only" one time more for symmetrizing the pattern. 
			k--;
			}
		}
		printf("\n");
	}
	printf("\n----------------------------------\n\n");
	getch();
	/*PATTERN#15*/
		x=5,y=5;
		for (i=1;i<=9;i++){
		for (j=1;j<=9;j++){
			if (j>=x&&j<=y)   
			printf("*");
			else 
			printf(" ");
		}
		printf("\n");
		if(i>=1&&i<=4){
		x--;
		y++;
		}
		else{
		x++;
		y--;
		}
	}
	printf("\n----------------------------------\n\n");
	getch();
	/*PATTERN#16A*/
	k=0; //<== Introducing "k" for  increament or decreament 
	for (i=1;i<=9;i++){
		i<=5?k++:(k--); //<== Condition for increament or decreament
		for (j=1;j<=10;j++){
			if (j<=k) //<==NOTE: Here "k" is used as vaiable condition,as condition for "j" is not constant.  
			printf("*");
			else 
			printf(" ");
		}
		printf("\n");
	}
	printf("\n----------------------------------\n\n");	
	getch();
	/*PATTERN#16B*/
	k=0; //<== Introducing "k" for  increament or decreament 
	for (i=1;i<=9;i++){
		i<=5?k++:(k--); //<== Condition for increament or decreament
		for (j=1;j<=10;j++){
			if (j>=k) //<==NOTE: Here "k" is used as vaiable condition,as condition for "j" is not constant.  
			printf("*");
			else 
			printf(" ");
		}
		printf("\n");
	}
	printf("\n----------------------------------\n\n");	
	getch();
	/*PATTERN#16B*/
	k=0;
	for(i=1;i<=9;i++){
		x=1;
		k=i<6?++k:--k;
		for(j=1;j<=5;j++){
			if(j>=6-k){
			printf("%d",x);
			x++;
			}
			else
			printf(" ");
		}
		printf("\n");
	}
	printf("\n----------------------------------\n\n");
	getch();
}
