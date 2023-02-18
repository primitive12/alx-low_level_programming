#include <stdio.h>

int main(void) {
    int i, j;

    for (i = 0; i < 9; i++) {
        for (j = i + 1; j <= 9; j++) {
            if (i == 0 && j == 9) {
                continue; // skip "09"
            }
            putchar(i + '0');
            putchar(j + '0');

            if (i < 8) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n'); // print newline after the last pair of digits

    return 0;
}
