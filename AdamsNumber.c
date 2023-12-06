#include <stdio.h>  
#include <math.h>  
  
int reverse(int num)  
{  
    int rev = 0;  
    while(num > 0)  
    {  
        rev = rev * 10 + num % 10;  
        num = num / 10;  
    }  
    return rev;  
}  
  
int isAdamNumber(int num)  
{  
    int sq = num * num;  
    int rev = reverse(num);  
    int rev_sq = rev * rev;  
    int rev_rev_sq = reverse(rev_sq);  
    if(sq == rev_rev_sq)  
        return 1;  
    else  
        return 0;  
}  
  
int main()  
{  
    int num;  
    printf("Enter a number: ");  
    scanf("%d", &num);  
    if(isAdamNumber(num))  
        printf("%d is an Adam number\n", num);  
    else  
        printf("%d is not an Adam number\n", num);  
    return 0;  
} 