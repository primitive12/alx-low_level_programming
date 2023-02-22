#include <stdio.h>

void print_times_table(int n)
{
    if (n < 0 || n > 15) {
        return;  // Do nothing if n is out of range
    }

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            int result = i * j;
            printf("%d", result);

            // Print appropriate number of spaces to align columns
            if (result < 10) {
                printf("   ");
            } else if (result < 100) {
                printf("  ");
            } else {
                printf(" ");
            }
        }
        printf("\n");  // New line after each row
    }
}
