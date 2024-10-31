#include <stdio.h>

int main (void){
    int size;
    printf("Enter a size for the square (>= 2): ");
    scanf("%d", &size);
    while (size < 2) {
        printf("Invalid size. Please enter again: ");
        scanf("%d", &size);
    }

    int count = 1;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d", count);
            count++;
            if (count > 9) count = 1; // 重置回 1 如果超過 9
        }
        printf("\n");
    }
}