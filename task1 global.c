#include "task1 global.h"

void print_global() {
    for (int i = 0; i < strlen(str); ++i) {
        printf("%c", str[i]);
    }
}

void reverse_global() {
    char res[N] = "";
    int j = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[strlen(str) - i - 1] != '\0') {
            res[j] = str[strlen(str) - i - 1];
            j++;
        }
    }
    for (int i = 0; i < strlen(res); ++i) {
        str[i] = res[i];
    }
    for (int i = strlen(res); i < strlen(str); ++i) {
        str[i] = '\0';
    }
}

void print_reverse_global() {
    reverse_global();
    print_global();
    reverse_global();
}

void scanword_global() {
    char symbol;
    int i = 0;
    do {
        scanf("%c", &symbol);
        str[i] = symbol;
        i++;
    } while (symbol != ' ' && symbol != '.');
}

void skipspace_global() {
    char res[N] = "";
    _Bool q = 0;
    int j = 0;
    for (int i = 0; i < strlen(str); ++i) {
        if (str[i] == ' ' && q) {
            res[j] = str[i];
            j++;
            q = 0;
        }
        if (str[i] != ' ') {
            res[j] = str[i];
            q = 1;
            j++;
        }
    }
    if (res[strlen(res) - 1] == ' ')res[strlen(res) - 1] = '\0';
    for (int i = 0; i < strlen(res); ++i) {
        str[i] = res[i];
    }
    for (int i = strlen(res); i < strlen(str); ++i) {
        str[i] = '\0';
    }
}