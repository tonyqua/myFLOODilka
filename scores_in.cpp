//
// Created by Anton on 23.03.2024.
//
#include <stdio.h>
#define SIZE 10
#define PAR 72

int main() {
    int index, score[SIZE];
    int sum = 0;
    float avg;

    printf("Введите %d результатов игры в гольф: ", SIZE);
    for(index = 0; index < SIZE; index++){
        scanf("%d", &score[index]);
    }

    printf("Введены следующие результаты: \n");
    for(index = 0; index < SIZE; index++){
        printf("%5d", score[index]);
    }
    printf("\n");
    for(index = 0; index < SIZE; index++){
        sum += score[index];
    }
    avg = (float) sum / SIZE;
    printf("Сумма результатов = %d, среднее значение = %.2f\n", sum, avg);
    printf("Полученный гандикап равен %.0f.\n", avg - PAR);

    return 0;
}

