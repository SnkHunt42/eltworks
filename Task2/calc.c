#include <stdio.h>
#include <stdlib.h>
#include "plus.h"
#include "minus.h"
#include "multi.h"
#include "div.h"

int main(){
    int opt;
    float a, b;
    for (;;){
        printf("Выберите необходимое действие:\n");
        printf("1. Сложение\n");
        printf("2. Вычитание\n");
        printf("3. Умножение\n");
        printf("4. Деление\n");
        printf("5. Выход\n");
        scanf("%d", &opt);
        switch (opt){
            case 1:
                printf("Введите первое слагаемое: ");
                scanf("%f", &a);
                printf("Введите второе слагаемое: ");
                scanf("%f", &b);
                printf("Результат сложения равен %f\n", plus(a, b));
                break;
            case 2:
                printf("Введите первое слагаемое: ");
                scanf("%f", &a);
                printf("Введите второе слагаемое: ");
                scanf("%f", &b);
                printf("Результат вычитания равен %f\n", minus(a, b));
                break;
            case 3:
                printf("Введите первое слагаемое: ");
                scanf("%f", &a);
                printf("Введите второе слагаемое: ");
                scanf("%f", &b);
                printf("Результат умножения равен %f\n", multi(a, b));
                break;
            case 4:
                printf("Введите первое слагаемое: ");
                scanf("%f", &a);
                printf("Введите второе слагаемое: ");
                scanf("%f", &b);
                printf("Результат деления равен %f\n", divide(a, b));
                break;
            case 5:
                printf("Выходим...\n");
                return 0;
                break;
            default:
                printf("Извините, но такой опции нет.\n");
        }
    }
    return 0;
}
