#ifndef BITDISP_H
#define BITDISP_H

#include <stdio.h>
#include <sys/stat.h>

void bitdisp(mode_t mode) {
    printf("Битовое представление прав доступа: ");
    for (int i = 8; i >= 0; --i) {
        printf("%d", (mode & (1 << i)) ? 1 : 0);
    }
    printf("\n");
}

#endif