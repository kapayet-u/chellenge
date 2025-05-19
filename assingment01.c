#include <stdio.h>

#define MAX_SIZE 100  // Define max array size

int main() {
    int sortedList[MAX_SIZE];
    int n, value, pos;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    if (n < 0 || n > MAX_SIZE) {
        printf("Invalid size!\n");
        return 1;
    }

    printf("Enter the sorted array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &sortedList[i]);
    }

    while (1) {
        printf("Enter the value to insert (-1 to exit): ");
        scanf("%d", &value);

        if (value == -1) {
            break;
        }

        if (n >= MAX_SIZE) {
            printf("Array is full, cannot insert more elements.\n");
            continue;
        }

        // Find the correct position
        pos = 0;
        while (pos < n && sortedList[pos] < value) {
            pos++;
        }

        // Shift elements to the right
        for (int i = n; i > pos; i--) {
            sortedList[i] = sortedList[i - 1];
        }

        sortedList[pos] = value;
        n++;

        // Print updated list
        printf("Updated list: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", sortedList[i]);
        }
        printf("\n");
    }

    return 0;
}

