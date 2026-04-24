#include <stdio.h>

int my_strcmp(const char*a, const char *b) {
    int result = 0;

    while (*a != '\0' || *b != '\0') {
        if (*a != *b) {
            result += (*a - *b);
            break;
        }

        a++;
        b++;
    }

    return result;

}

int main() {
    printf("%d\n", my_strcmp("abc", "abcd"));
    printf("%d\n", my_strcmp("abc", "abc"));
    printf("%d\n", my_strcmp("b", "a"));

    return 0;
}