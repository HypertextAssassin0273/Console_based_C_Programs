/*PROGRAM TO PRINT PRIME NUMBERS IN A GIVEN RANGE*/
#include<stdio.h>
int is_Prime(int num);
void print_Primes(int lower_Limit,int upper_Limit);
void main(){
    int lower_Limit,upper_Limit;
    printf("Enter the lower and upper limit to list primes: ");
    scanf("%d%d",&lower_Limit,&upper_Limit);
    print_Primes(lower_Limit,upper_Limit);
}

void print_Primes(int lower_Limit, int upper_Limit){
    printf("All prime number between %d to %d are: ",lower_Limit,upper_Limit);
    while(lower_Limit<=upper_Limit){
        if(is_Prime(lower_Limit))
        printf("%d, ",lower_Limit);
        lower_Limit++;
    }
} 
int is_Prime(int num){  
    int i;
    for(i=2;i<=num/2;i++){        
        if(!(num%i))    
        return 0; 
    }
    return 1;   
}
