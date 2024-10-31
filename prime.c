#include <stdio.h>

int main() {
    int X;
    printf("Enter the value of X (X >= 2): ");
    scanf("%d", &X);

    for (int i = 2; i <= X; i++) {  // 檢查每個數字 i 是否為質數
        int isPrime = 1;  // 假設 i 是質數，使用 1 表示 true

        // 檢查 i 是否能被 2 到 i-1 的數字整除
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {  // 如果能整除，表示不是質數
                isPrime = 0;  // 使用 0 表示 false
                break;  // 不需再檢查其他因數
            }
        }

        // 如果是質數，則印出
        if (isPrime) {
            printf("%d is PRIME\n", i);
        } else {
            printf("%d is NOT PRIME\n", i);
        }
    }

    return 0;
}
