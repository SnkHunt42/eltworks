#ifndef LETDISP_H
#define LETDISP_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

void letdisp(mode_t mode) {
    printf("Буквенное представление прав доступа: ");
    if (S_ISDIR(mode)) putchar('d');
    else if (S_ISLNK(mode)) putchar('l');
    else putchar('-');
    
    printf((mode & S_IRUSR) ? "r" : "-");
    printf((mode & S_IWUSR) ? "w" : "-");
    printf((mode & S_IXUSR) ? "x" : "-");
    
    printf((mode & S_IRGRP) ? "r" : "-");
    printf((mode & S_IWGRP) ? "w" : "-");
    printf((mode & S_IXGRP) ? "x" : "-");
    
    printf((mode & S_IROTH) ? "r" : "-");
    printf((mode & S_IWOTH) ? "w" : "-");
    printf((mode & S_IXOTH) ? "x" : "-");
    
    printf("\n");
}

#endif