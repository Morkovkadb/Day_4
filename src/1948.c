#include <stdio.h>

int gcd(int number);
int divide_mod(int first_number, int second_number);
int is_prime_number(int number);
int divide(int first_number, int second_number);

int main() {
    int number = 0;
    int succes_quantity_number = scanf("%d", &number);
    int last_char = getchar();
    if (succes_quantity_number == 1 && last_char == '\n') {
        printf("%d\n", gcd(number));
    } else {
        printf("n/a");
    }

    return 0;
}

int divide_mod(int first_number, int second_number) {
    while (first_number - second_number >= 0) {
        first_number -= second_number;
    }
    return first_number;
}

int is_prime_number(int number) {
    if (number == 1 || number == 0) {
        return 0;
    }
    if (number == 2) {
        return 1;
    }

    for (int i = 2; i < number - 1; ++i) {
        if (divide_mod(number, i) == 0) {
            return 0;
        }
    }
    return 1;
}
int gcd(int number) {
    if (number < 0) {
        number *= -1;
    }

    int max_prime_number = 1;
    int count = 1;
    while (count <= number) {
        if (is_prime_number(count) == 1) {
            if (divide_mod(number, count) == 0) {
                max_prime_number = count;
            }
        }
        count++;
    }
    return max_prime_number;
}