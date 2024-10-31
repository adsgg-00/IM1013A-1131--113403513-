#include <stdio.h>

int main() {
    char seats[4][5];  // 4行5列的座位表
    int row, col;
    char confirm = 'n';

    // 初始化座位表為 '*'
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            seats[i][j] = '*';
        }
    }

    // 顯示初始座位表
    printf("C1 C2 C3 C4 C5\n");
    for (int i = 0; i < 4; i++) {
        printf("R%d ", i + 1);
        for (int j = 0; j < 5; j++) {
            printf("%c ", seats[i][j]);
        }
        printf("\n");
    }

    // 讓使用者選擇座位並確認
    do {
        printf("\nEnter your seat row number (1-4): ");
        scanf("%d", &row);
        printf("Enter your seat column number (1-5): ");
        scanf("%d", &col);

        // 檢查座位是否有效
        if (row < 1 || row > 4 || col < 1 || col > 5) {
            printf("Invalid seat selection. Try again.\n");
            continue;
        }

        // 檢查座位是否已被選擇
        if (seats[row - 1][col - 1] == 'X') {
            printf("Seat already taken. Choose a different seat.\n");
            continue;
        }

        // 顯示選定的座位
        seats[row - 1][col - 1] = 'X';
        printf("\nC1 C2 C3 C4 C5\n");
        for (int i = 0; i < 4; i++) {
            printf("R%d ", i + 1);
            for (int j = 0; j < 5; j++) {
                printf("%c ", seats[i][j]);
            }
            printf("\n");
        }

        // 要求使用者確認選擇
        printf("\nX = Your seat\n");
        printf("Confirm seat [y/n]: ");
        scanf(" %c", &confirm);

        // 若未確認則將座位設回 '*'
        if (confirm != 'y') {
            seats[row - 1][col - 1] = '*';
        }

    } while (confirm != 'y');

    printf("\nThank you for booking your seat.\n");

    return 0;
}