#include <stdio.h>

#define SIZE 5

void printBingo(int bingo[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%2d ", bingo[i][j]);
        }
        printf("\n");
    }
}

void markBingo(int bingo[SIZE][SIZE], int num) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (bingo[i][j] == num) {
                bingo[i][j] = 0; // 標記為 0 表示此數字已被選中
            }
        }
    }
}

int isDuplicate(int arr[], int count, int num) {
    for (int i = 0; i < count; i++) {
        if (arr[i] == num) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int bingo[SIZE][SIZE];
    int arr[5];
    int num, count = 0;

    // 初始化賓果板
    int value = 1;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            bingo[i][j] = value++;
        }
    }

    printf("Initializing the array ...\n");
    printBingo(bingo);

    // 玩家輸入數字
    printf("Please input five integers one by one\n");
    while (count < 5) {
        printf("Please input the %d-th element: ", count);
        scanf("%d", &num);

        // 檢查輸入是否合法並且不重複
        if (num < 1 || num > 25) {
            printf("The value must be in the range 1-25. Please input again.\n");
        } else if (isDuplicate(arr, count, num)) {
            printf("The number must not be duplicated. Please input again.\n");
        } else {
            arr[count++] = num;
            printf("The current array elements: ");
            for (int i = 0; i < count; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
    }

    // 標記賓果板
    for (int i = 0; i < 5; i++) {
        markBingo(bingo, arr[i]);
    }

    printf("The marked array:\n");
    printBingo(bingo);

    return 0;
}