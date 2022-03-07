#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define N 100

void print(char str[]);

void print_reverse(char str[]);

char *reverse(char str[]);

char *scanword();

int main() {
    char str[N];
    char symbol;
    int i = 0, j = 0;
    do {
        scanf("%c", &symbol);
        printf("%c", symbol);
    } while (symbol != '.');
    return 0;
}

void print(char str[]) {
    printf("%s", str);
}

char *reverse(char str[]) {
    char res[N] = "";
    int j = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[strlen(str) - i - 1] != '\0') {
            res[j] = str[strlen(str) - i - 1];
            j++;
        }
    }
    for (int i = 0; i < strlen(str); ++i) {
        printf("i=%d res[i]=%c\n", i, res[i]);
    }
    return res;
}

void print_reverse(char str[]) {
    printf("%s", reverse(str));
}