#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tables.h"
#include "edit.h"
#include "delete.h"
#include "add.h"
#include "print.h"

int main(void)
{
    Node *head = NULL;
    int listcount = 0;

    for (;;)
    {
        printf("Пожалуйста, выберите пункт меню:\n");
        printf("1. Добавить контакт\n");
        printf("2. Редактировать контакт\n");
        printf("3. Удаление контакта\n");
        printf("4. Показать контакт\n");
        printf("5. Показать все контакты\n");

        int option;
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Пожалуйста, введите данные контакта:\n");
            if (listcount < 1000)
            {
                add(&head);
                listcount++;
            }
            else
            {
                printf("Невозможно добавить больше контактов, достигнут лимит.\n");
            }
            break;
        case 2:
            printf("Введите номер контакта для редактирования (от 1 до %d): ", listcount);
            int editid;
            scanf("%d", &editid);
            if (editid >= 1 && editid <= listcount)
            {
                edit(head, editid);
            }
            else
            {
                printf("Некорректный номер контакта.\n");
            }
            break;
        case 3:
            deletecon(&head, &listcount);
            break;
        case 4:
            printf("Введите номер контакта для отображения (от 1 до %d): ", listcount);
            int printid;
            scanf("%d", &printid);
            if (printid >= 1 && printid <= listcount) {
                Node *current = head;
                int index = 1;
                while (current != NULL && index < printid) {
                    current = current->next;
                    index++;
                }
                if (current != NULL) {
                    printс(&(current->data));
                } else {
                    printf("Контакт с номером %d не найден.\n", printid);
                }
            } else {
                printf("Некорректный номер контакта.\n");
            }  
            break;
        case 5:
            print(head);
            break;
        default:
            printf("Извините, но такой опции не существует.\n");
            break;
        }
    }
    return 0;
}
