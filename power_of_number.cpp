//
// Created by Anton on 23.03.2024.
//
#include <stdio.h>

double power(double n, int p) {
    double pow = 1;
    int i;

    for (i = 1; i <= p; i++) {
        pow *= n;
    }
    return pow;
}

int main(){
    double x, xpow;
    int exp;

    printf("Введите число и положительную целую степень,");
    printf("в которую \n число будет возведено. Для завершения программы ");
    printf("введите \"q\"");
    while(scanf("%lf %d", &x, &exp) == 2){
        xpow = power(x, exp);
        printf ( "%.3g в степени %d равно %.5g\n", x, exp, xpow);
        printf("Введите следующую пару чисел или q для завершения.\n");
    }
    return 0;
}