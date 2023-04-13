#include <stdio.h>
#include <stdlib.h>

int is_digit(char c) {
    return c >= '0' && c <= '9';
}

int parse_number(char *s) {
    int n = 0;
    while (*s) {
        if (!is_digit(*s)) {
            printf("Error\n");
            exit(98);
        }
        n = n * 10 + (*s - '0');
        s++;
    }
    return n;
}

void print_number(int n) {
    if (n >= 10) {
        print_number(n / 10);
    }
    putchar('0' + n % 10);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    int num1 = parse_number(argv[1]);
    int num2 = parse_number(argv[2]);
    int result = num1 * num2;

    print_number(result);
    putchar('\n');

    return 0;
}

