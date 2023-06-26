#include<stdio.h>
int main(){
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);
    int num_sq = num*num;
    int rem,num_rev=0;
    while(num>0){
        rem = num%10;
        num_rev = num_rev*10+rem;
        num = num/10;
}
int rev_sq=num_rev*num_rev;
int rev_sq_rev=0;
while(rev_sq>0){
    rev_sq_rev = rev_sq_rev*10+rev_sq%10;
    rev_sq=rev_sq/10;
}
if(num_sq == rev_sq_rev){
printf("Adam number\n");
}
else{
printf("Not Adam number\n");
}
return 0;
}
