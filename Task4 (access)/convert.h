#ifndef CONVERT_H
#define CONVERT_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "bitdisp.h"
#include "letdisp.h" 

mode_t ltm(char *letters) {
    mode_t mode = 0;
    int i = 0;
    
    while (letters[i] != '\0') {
        int group = i / 3;
        switch (letters[i]) {
            case 'r':
                mode |= (group == 0) ? S_IRUSR : ((group == 1) ? S_IRGRP : S_IROTH);
                break;
            case 'w':
                mode |= (group == 0) ? S_IWUSR : ((group == 1) ? S_IWGRP : S_IWOTH);
                break;
            case 'x':
                mode |= (group == 0) ? S_IXUSR : ((group == 1) ? S_IXGRP : S_IXOTH);
                break;
            case '-':
                break;
            default:
                fprintf(stderr, "Неправильный символ в буквенном представлении прав доступа.\n");
                exit(EXIT_FAILURE);
        }
        i++;
    }
    
    return mode;
}

void convert(char *filename) {
    mode_t mode;

    printf("Выберите вариант ввода:\n");
    printf("1. Цифровое представление\n");
    printf("2. Буквенное представление\n");
    int choice;
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Введите цифровое представление прав доступа: ");
            scanf("%o", &mode);
            break;
        case 2:
            printf("Введите буквенное представление прав доступа: ");
            char input[10];
            scanf("%s", input);
            mode = ltm(input);
            break;
        default:
            printf("Неправильный выбор!\n");
            exit(EXIT_FAILURE);
    }

    printf("Битовое представление прав доступа:\n");
    for (int i = 0; i < 9; ++i) {
        printf("%d", (mode >> (8 - i)) & 1);
    }
    printf("\n");

}

#endif