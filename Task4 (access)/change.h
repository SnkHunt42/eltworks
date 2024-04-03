#ifndef CHANGE_H
#define CHANGE_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "bitdisp.h"
#include "letdisp.h"
#include "numdisp.h"

void change(char *filename) {
    char letters[10];
    printf("Введите буквенное представление новых прав доступа: ");
    scanf("%s", letters);
    mode_t new_mode = ltm(letters);

    if (chmod(filename, new_mode) == -1) {
        perror("Ошибка при изменении прав доступа к файлу");
        exit(EXIT_FAILURE);
    }

    printf("Права доступа к файлу успешно изменены!\n");

    printf("Модифицированные представления прав доступа:\n");
    bitdisp(new_mode);
    letdisp(new_mode);
    numdisp(new_mode);
}

#endif