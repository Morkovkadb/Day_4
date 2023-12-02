#include <stdio.h>

int fibonacci(int n);

int main() {
    int n;
    int quantity_succes_read_number = scanf("%d", &n);
    int last_char = getchar();

    if (quantity_succes_read_number == 1 && last_char == '\n' && n >= 0) {
        printf("%d\n", fibonacci(n));
    } else {
        printf("n/a\n");
    }
    return 0;
}

int fibonacci(int n) {
    if (n < 3) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}