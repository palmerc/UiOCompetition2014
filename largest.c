#include <stdio.h>
int largest_number_in_both_lists(int a[], int m, int b[], int n)
{
    int result;
    for (int i=0; i < m; i++) {
        int t = a[i];

        int min = 0, max = n - 1, j = 0;
        while (1) {
            if (max < min) {
                result = -1;
                goto INNER;
            }

            j = (min + max) / 2;
            if (b[j] > t) {
                min = j + 1;
            } else if (b[j] < t) {
                max = j - 1;
            } else {
                result = j;
                goto INNER;
            }
        }
    INNER:
        if (result >= 0) {
            return t;
        }
    }
    return -1;
}

int main() {
    int a[5] = {1000, 99, 50, 40, 0};
    int b[4] = {100, 75, 5, 0};
    printf("Answer: %d\n", largest_number_in_both_lists(a, 5, b, 4));
    return 0;
}
