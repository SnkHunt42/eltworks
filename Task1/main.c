#include <stdio.h>
#include "tables.h"
#include "edit.h"
#include "delete.h"
#include "add.h"
#include "print.h"

int main(void)
{
    Unite list[1000];
    int listcount = 0;

    for(;;)
    {
        printf("Пожалуйста, выберите пункт меню:\n");
        printf("1. Добавить контакт\n");
        printf("2. Редактировать контакт\n");
        printf("3. Удаление контакта\n");
        printf("4. Показать контакт\n");
        printf("5. Показать все контакты\n");
        
        int option;
        scanf("%d",&option);
        switch (option)
        {
        case 1:{
            printf("Пожалуйста, введите данные контакта:\n");
            if (listcount < 1000)
            {
                add(&list[listcount]);
                listcount++;
            }
            else
            {
                printf("Невозможно добавить больше контактов, достигнут лимит.\n");
            }
            break;}
        case 2:
            printf("Введите номер контакта для редактирования (от 1 до %d): ", listcount);
            int editid;
            scanf("%d", &editid);
            if (editid >= 1 && editid <= listcount)
            {
                edit(&list[editid - 1]);
            }
            else
            {
                printf("Некорректный номер контакта.\n");
            }
            break;
        case 3:
            printf("Введите номер контакта для удаления (от 1 до %d): ", listcount);
            int deleteid;
            scanf("%d", &deleteid);
            deletecon(list, &listcount, deleteid - 1);
            break;
        case 4:
            printf("Введите номер контакта для отображения (от 1 до %d): ", listcount);
            int printid;
            scanf("%d", &printid);
            if (printid >= 1 && printid <= listcount)
            {
                printс(list[printid - 1]);
            }
            else
            {
                printf("Некорректный номер контакта.\n");
            }
            break;
        case 5:
            print(list, listcount);
            break;
        default:
            printf("Извините, но такой опции не существует.\n");
            break;
        
        }
    }
    return 0;
}