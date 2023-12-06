#include <stdio.h>

int isHappy(int num) {
    int seen[100] = {0}; // Assuming the maximum sum of squares of digits won't exceed 100
    while (num != 1 && !seen[num]) {
        seen[num] = 1;
        int sum = 0;
        while (num > 0) {
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        num = sum;
    }
    return num == 1;
}

void findTwoDigitHappyNumbers() {
    printf("Two-digit happy numbers: ");
    for (int num = 10; num < 100; ++num) {
        if (isHappy(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");
}

int main() {
    findTwoDigitHappyNumbers();
    return 0;
}

