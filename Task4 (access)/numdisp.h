#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

void numdisp(mode_t mode) {
    printf("Числовое представление прав доступа: %o\n", mode & 0777);
}
