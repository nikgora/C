#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define N 100

void print(char str[]);//вывод строки в прямом порядке принимает строку

void print_reverse(char str[]);//вывод строки в обратном порядке принимает строку

char *reverse(char str[]);//инвертирование строки принимает строку результат строка

char *scanword(char word[]);//ввод строки  принимает строку в которую надо записать строку результат строка

int main() {

    char symbol;
    int i = 1;
    do {
        char word[N] = "";
        _Bool q = 0;
        _Bool w = 1;
        scanword(word);
        symbol = word[strlen(word) - 1];
        if (symbol == '.') {
            q = 1;
        }
        word[strlen(word) - 1] = '\0';
        if (word[0] == '\0') w = 0;

        if (i % 2 && w) {
            i++;
            i %= 2;
            print(word);
        } else if (w) {
            i++;
            i %= 2;
            print_reverse(word);
        }
        if (q)print(".");
        else if (w)print(" ");

    } while (symbol != '.');
    return 0;
}

void print(char str[]) {
    for (int i = 0; i < strlen(str); ++i) {
        printf("%c", str[i]);
    }
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
    /*
    for (int i = 0; i < strlen(str); ++i) {
        printf("i=%d res[i]=%c\n", i, res[i]);
    }
    */
    return res;
}

void print_reverse(char str[]) {
    print(reverse(str));
}

char *scanword(char word[]) {
    char symbol;
    int i = 0;
    do {
        scanf("%c", &symbol);
        word[i] = symbol;
        i++;
    } while (symbol != ' ' && symbol != '.');
    return word;
}