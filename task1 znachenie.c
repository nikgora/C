

#include "task1 znachenie.h"

void print_znachenie(char str[]) {
    for (int i = 0; i < strlen(str); ++i) {
        printf("%c", str[i]);
    }
}

char *reverse_znachenie(char str[]) {
    char res[N] = "";
    int j = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[strlen(str) - i - 1] != '\0') {
            res[j] = str[strlen(str) - i - 1];
            j++;
        }
    }
    /*
    for (int i = 0; i < strlen(str); ++i) {
        printf("i=%d res[i]=%c\n", i, res[i]);
    }
    */
    return res;
}

void print_reverse_znachenie(char str[]) {
    print_znachenie(reverse_znachenie(str));
}

char *scanword_znachenie(char word[]) {
    char symbol;
    int i = 0;
    do {
        scanf("%c", &symbol);
        word[i] = symbol;
        i++;
    } while (symbol != ' ' && symbol != '.');
    return word;
}

char *skipspace_znachenie(char word[]) {
    char res[N] = "";
    _Bool q = 0;
    int j = 0;
    for (int i = 0; i < strlen(word); ++i) {
        if (word[i] == ' ' && q) {
            res[j] = word[i];
            j++;
            q = 0;
        }
        if (word[i] != ' ') {
            res[j] = word[i];
            q = 1;
            j++;
        }
    }
    if (res[strlen(res) - 1] == ' ')res[strlen(res) - 1] = '\0';
    return res;
}