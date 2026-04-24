#include <stdio.h>
#include <string.h>

int main() {
    char s1[10] = "hi";
    char s2[] = "hi";
    char s3[] = {'h', 'i', '\0'};

    printf("%zu %zu\n", sizeof(s1), strlne(s1));
    printf("%zu %zu\n", sizeof(s2), strlne(s2));
    printf("%zu %zu\n", sizeof(s3), strlne(s3));

    return 0;
}