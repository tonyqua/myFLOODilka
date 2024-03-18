//
// Created by Anton on 18.03.2024.
//
#include <stdio.h>

int main() {
    //int a; <-- int a можно и тут писать
    printf("Введите любое число: ");

    for(int a; scanf("%d", &a) == 1; ){                     //тут тоже можно писать int a;
        printf("%d в квадрате будет равно %d\n", a, a * a);
        printf("Введите любое число\n");
        printf("(для выхода из программы введите 'q'): ");
    }

    printf("Happy end! :)");
    return 0;
}