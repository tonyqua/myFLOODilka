//
// Created by Anton on 18.03.2024.
//
#include <stdio.h>
#define FIRST_OZ 46
#define NEXT_OZ 20

int main() {
    int ounces, cost;
    printf(" унции тариф\n");
    for(ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ){
        printf("%5d $%4.2f\n", ounces, cost/100.0);
    }
    return 0;
}