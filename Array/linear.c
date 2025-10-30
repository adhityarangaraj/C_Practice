#include <stdio.h>

int main() {
    int arr[10] = {10, 5, 8, 12, 1, 9, 7, 3, 6, 2};
    int target;
    int index = -1;
    int size = 10;

    scanf("%d", &target);

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        printf("Element found at index: %d\n", index);
    } else {
        printf("Element not found\n");
    }

    return 0;
}