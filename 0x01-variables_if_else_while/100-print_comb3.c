int main() {
    int i, j;
    for (i = 0; i <= 9; i++) {
        for (j = i + 1; j <= 9; j++) {
            int a = i == 0 ? 10 : i;
            int b = j == 0 ? 10 : j;
            if (a < b) {
                putchar(i + '0');
                putchar(j + '0');
                if (i < 8) {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    return 0;
}
