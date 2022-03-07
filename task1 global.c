#include "task1 global.h"

void print() {
    for (int i = 0; i < strlen(str); ++i) {
        printf("%c", str[i]);
    }
}

void reverse() {
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

void print_reverse() {
    reverse();
    print();
    reverse();
}

void scanword() {
    char symbol;
    int i = 0;
    do {
        scanf("%c", &symbol);
        str[i] = symbol;
        i++;
    } while (symbol != ' ' && symbol != '.');
}

void skipspace() {
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