#include <stdio.h>

typedef struct {
    char str[4];
    int num;
} NumberRepr;

void format(NumberRepr *number) {
    sprintf(number->str, "%4d", number->num);
}

int main() {
    NumberRepr number = { .num = 1025 };
    format(&number);
    printf("str: %s\n", number.str);
    printf("num: %d\n", number.num); // 1025?
    return 0;
}
