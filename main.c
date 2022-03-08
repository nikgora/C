#include "task1 znachenie.h"

int main() {

    char symbol;
    int i = 1;
    do {
        char word[N] = "";
        _Bool q = 0;
        _Bool w = 1;
        scanword_znachenie(word);
        symbol = word[strlen(word) - 1];
        if (symbol == '.') {
            q = 1;
        }
        word[strlen(word) - 1] = '\0';
        if (word[0] == '\0') w = 0;

        if (i % 2 && w) {
            i++;
            i %= 2;
            print_znachenie(word);
        } else if (w) {
            i++;
            i %= 2;
            print_reverse_znachenie(word);
        }
        if (q)print_znachenie(".");
        else if (w)print_znachenie(" ");

    } while (symbol != '.');
    print_znachenie("\n");
    print_znachenie(skipspace_znachenie("    ad!@ 1332       m       m    "));
    return 0;
}

