#include <stdio.h>
#include <string.h>
#include "tables.h"

void buffcl() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void edit(Node *head, int editid)
{
    Node *current = head;
    int count = 0;

    while (current != NULL && count < editid - 1)
    {
        current = current->next;
        count++;
    }

    Unite *unite = &(current->data);

    int opt;

    printf("Текущее имя: %s\n", unite->fio.name);
    printf("Вам требуется изменить имя? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новое имя: ");
            scanf("%s", unite->fio.name);
            buffcl();
            break;
        case 2:
            break;      
    }

    printf("Текущая фамилия: %s\n", unite->fio.surname);
    printf("Вам требуется изменить фамилию? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новую фамилию: ");
            scanf("%s", unite->fio.surname);
            buffcl();
            break;
        case 2:
            break;
    }

    printf("Вам требуется изменить отчество? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новое отчество: ");
            scanf("%s", unite->fio.fathersname);
            break;
        case 2:
            break;
    }

    printf("Вам требуется изменить место работы? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новое место работы: ");
            scanf("%s", unite->job.workplace);
            break;
        case 2:
            break;
    }

    printf("Вам требуется изменить рабочую должность? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новую рабочую должность: ");
            scanf("%s", unite->job.duty);
            break;
        case 2:
            break;
    }

    printf("Вам требуется изменить первый номер телефона? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новый первый номер телефона: ");
            scanf("%s", unite->number.number1);
            break;
        case 2:
            break;
    }

    printf("Вам требуется изменить второй номер телефона? 1 - Да, 2 - Нет");
    
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новый второй номер телефона: ");
            scanf("%s", unite->number.number2);
            break;
        case 2:
            break;
    }

    printf("Вам требуется изменить третий номер телефона? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новый третий номер телефона: ");
            scanf("%s", unite->number.number3);
            break;
        case 2:
            break;
    }

    printf("Вам требуется изменить четвертый номер телефона? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новый четвертый номер телефона: ");
            scanf("%s", unite->number.number4);
            break;
        case 2:
            break;
    }

    printf("Вам требуется изменить пятый номер телефона? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новый пятый номер телефона: ");
            scanf("%s", unite->number.number5);
            break;
        case 2:
            break;
    }

    printf("Вам требуется изменить первый адрес электронной почты? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новый первый адрес электронной почты: ");
            scanf("%s", unite->mail.mail1);
            break;
        case 2:
            break;
    }

    printf("Вам требуется изменить второй адрес электронной почты? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новый второй адрес электронной почты: ");
            scanf("%s", unite->mail.mail2);
            break;
        case 2:
            break;
    }

    printf("Вам требуется изменить третий адрес электронной почты? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новый третий адрес электронной почты: ");
            scanf("%s", unite->mail.mail3);
            break;
        case 2:
            break;
    }

    printf("Вам требуется изменить четвертый адрес электронной почты? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новый четвертый адрес электронной почты: ");
            scanf("%s", unite->mail.mail4);
            break;
        case 2:
            break;
    }

    printf("Вам требуется изменить пятый адрес электронной почты? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новый пятый адрес электронной почты: ");
            scanf("%s", unite->mail.mail5);
            break;
        case 2:
            break;
    }

    printf("Вам требуется изменить ссылку на 'ВКонтакте'? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новую ссылку на 'ВКонтакте': ");
            scanf("%s", unite->social.vk);
            break;
        case 2:
            break;
    }

    printf("Вам требуется изменить ссылку на 'Телеграмм'? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новую ссылку на 'Телеграмм': ");
            scanf("%s", unite->social.tg);
            break;
        case 2:
            break;
    }

    printf("Вам требуется изменить ссылку на 'Инстаграмм'? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новую ссылку на 'Инстаграмм': ");
            scanf("%s", unite->social.insta);
            break;
        case 2:
            break;
    }

    printf("Вам требуется изменить ссылку на 'WhatsApp'? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новую ссылку на 'WhatsApp': ");
            scanf("%s", unite->social.whatsapp);
            break;
        case 2:
            break;
    }

    printf("Вам требуется изменить ссылку на 'Facebook'? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новую ссылку на 'Facebook': ");
            scanf("%s", unite->social.fb);
            break;
        case 2:
            break;
    }

    printf("Контакт успешно отредактирован!\n");
}
