/*PROGRAM TO FIND THE POSSIBLE NUMBER OF DECODINGS OF A GIVEN DIGIT SEQUENCE*/
#include<stdio.h>
#include<string.h>
//Note: Let 'A' represent 1,'B' represent 2 & so on.Hence,possible decodings for input '123' are: "ABC","LC","AW" -> 3
int count_decoding_digits(char *digits,int n){
    int i,count[n+1];//i.e. an array to store results of sub-problems
    count[0]=1,count[1]=1;
    for (i=2;i<=n;i++){
        count[i]=0;
        //i.e. if the last digit != 0, then last digit must add to the number of words
        if (digits[i-1]>'0')
        count[i]=count[i-1];
        //i.e. if second last digit is smaller than 2 and last digit is smaller than 7, then last two digits form a valid character
        if (digits[i-2]=='1'||(digits[i-2]=='2'&&digits[i-1]<'7'))
        count[i]+=count[i-2];
    }
    return count[n];
}
void main(){
    char digits[15];
    printf("Enter the digit sequence : ");
    gets(digits);
    int n=strlen(digits);
    printf("Possible count of decoding of the sequence: %d",count_decoding_digits(digits,n));
}
