//
// Created by Anton on 18.03.2024.
//
#include <stdio.h>

int main() {
    char ch;
    for(ch = 'A'; ch <= 'z'; ch++) {
        printf("%c = %d\n", ch, ch);
    }
    return 0;
}