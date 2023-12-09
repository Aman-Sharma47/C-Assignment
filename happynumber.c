//Write the C program for print all two digit happy number.
#include <stdio.h>

int isHappyNumber(int num) {
    int sum = 0, digit;
    
    while (num > 0) {
        digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    
    if (sum == 1)
        return 1;
    else if (sum == 4)
        return 0;
    else
        return isHappyNumber(sum);
}

int main() {
    int num;
    
    printf("Two-digit happy numbers are: ");
    
    for (num = 10; num < 100; num++) {
        if (isHappyNumber(num))
            printf("%d ", num);
    }
    
    return 0;
}