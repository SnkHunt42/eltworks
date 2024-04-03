#ifndef VIEW_H
#define VIEW_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

void view(char *filename) {
    struct stat st;

    if (stat(filename, &st) == -1) {
        perror("Ошибка при получении информации о файле");
        exit(EXIT_FAILURE);
    }

    printf("Текущие права доступа к файлу %s:\n", filename);
    letdisp(st.st_mode);
    bitdisp(st.st_mode);
    numdisp(st.st_mode);
}

#endif