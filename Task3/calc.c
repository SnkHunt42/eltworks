#include <stdio.h>
#include <stdlib.h>
#include "plus.h"
#include "minus.h"
#include "multi.h"
#include "div.h"

int main(){
    int opt;
    float a, b;
    float (*operations[])(float, float) = {plus, minus, multi, divide};
    for (;;){
        printf("Выберите необходимое действие:\n");
        printf("1. Сложение\n");
        printf("2. Вычитание\n");
        printf("3. Умножение\n");
        printf("4. Деление\n");
        printf("5. Выход\n");
        scanf("%d", &opt);
        if (opt >= 1 && opt <= 4) {
            printf("Введите первое число: ");
            scanf("%f", &a);
            printf("Введите второе число: ");
            scanf("%f", &b);
            operations[opt - 1](a, b);
        } 
        else if (opt == 5) {
            printf("Выходим...\n");
            return 0;
        } 
        else {
            printf("Извините, но такой опции нет.\n");
        }
    }
    return 0;
}
