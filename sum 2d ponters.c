#include <stdio.h>

#define ROWS 3
#define COLS 3

int sum_2d_array(int *arr, int rows, int cols) {
    int sum = 0;
    int *ptr = arr;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += *ptr;
            ptr++;
        }
    }

    return sum;
}

int main() {
    int array[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int total_sum = sum_2d_array(&array[0][0], ROWS, COLS);

    printf("Sum of elements in the 2D array: %d\n", total_sum);

    return 0;
}
