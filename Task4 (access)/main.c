#include <stdio.h>
#include <stdlib.h>
#include "convert.h"
#include "change.h"
#include "view.h"

int main() {
    int opt;

    printf("Выберите действие:\n");
    printf("1. Конвертировать буквенное или цифровое представление прав доступа в битовое\n");
    printf("2. Просмотреть права доступа к файлу\n");
    printf("3. Поменять права доступа к файлу\n");
    scanf("%d", &opt);

    switch (opt) {
        case 1:
            convert("");
            break;
        case 2:
        case 3: {
            char filename[256];
            printf("Введите имя файла: ");
            scanf("%s", filename);
            
            if (opt == 2)
                view(filename);
            else
                change(filename);
            break;
        }
        default:
            printf("Неправильный выбор действия!\n");
            break;
    }

    return 0;
}
