#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *temp;
    int n = argc-1;

    for(int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n -1 - i; j++) {
            if (strcmp(argv[j+1], argv[j+2]) > 0) {
                temp = argv[j+1];
                argv[j+1] = argv[j+2];
                argv[j+2] = temp;
            }
        }
    }

    for (int i=0; i<argc; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
} 