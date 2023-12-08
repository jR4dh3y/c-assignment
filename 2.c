#include <stdio.h>

int main() {
    int num, sum, i;

    printf("Three-digit perfect numbers:\n");

    for (num = 100; num <= 999; num++) {
        sum = 0;

        for (i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }

        if (sum == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
