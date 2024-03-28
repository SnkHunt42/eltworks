void add(Unite *unite)
{
    printf("Введите новое имя: ");
    scanf("%s", unite->fio.name);
    printf("Введите новую фамилию: ");
    scanf("%s", unite->fio.surname);
    int opt;
    printf("Вам требуется добавить отчество? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите отчество: ");
            scanf("%s", unite->fio.fathersname);
        case 2:
            break;
    }
    printf("Вам требуется добавить место работы? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите место работы: ");
            scanf("%s", unite->job.workplace);
        case 2:
            break;
    }
    printf("Вам требуется добавить рабочую должность? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите рабочую должность: ");
            scanf("%s", unite->job.duty);
        case 2:
            break;
    }
    printf("Вам требуется добавить первый номер телефона? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите первый номер телефона: ");
            scanf("%s", unite->number.number1);
        case 2:
            break;
    }
        printf("Вам требуется добавить второй номер телефона? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите второй номер телефона: ");
            scanf("%s", unite->number.number2);
        case 2:
            break;
    }
        printf("Вам требуется добавить третий номер телефона? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите третий номер телефона: ");
            scanf("%s", unite->number.number3);
        case 2:
            break;
    }
        printf("Вам требуется добавить четвертый номер телефона? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите четвертый номер телефона: ");
            scanf("%s", unite->number.number4);
        case 2:
            break;
    }
        printf("Вам требуется добавить пятый номер телефона? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите пятый номер телефона: ");
            scanf("%s", unite->number.number5);
        case 2:
            break;
    }
            printf("Вам требуется добавить первый адрес электронной почты? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите первый адрес электронной почты: ");
            scanf("%s", unite->mail.mail1);
        case 2:
            break;
    }
                printf("Вам требуется добавить второй адрес электронной почты? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите второй адрес электронной почты: ");
            scanf("%s", unite->mail.mail2);
        case 2:
            break;
    }
                printf("Вам требуется добавить третий адрес электронной почты? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите третий адрес электронной почты: ");
            scanf("%s", unite->mail.mail3);
        case 2:
            break;
    }
                printf("Вам требуется добавить четвертый адрес электронной почты? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите четвертый адрес электронной почты: ");
            scanf("%s", unite->mail.mail4);
        case 2:
            break;
    }
                printf("Вам требуется добавить пятый адрес электронной почты? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите пятый адрес электронной почты: ");
            scanf("%s", unite->mail.mail5);
        case 2:
            break;
    }
        printf("Вам требуется добавить ссылку на 'ВКонтакте'? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите ссылку на 'ВКонтакте': ");
            scanf("%s", unite->social.vk);
        case 2:
            break;
    }
            printf("Вам требуется добавить ссылку на 'Телеграмм'? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите ссылку на 'Телеграмм': ");
            scanf("%s", unite->social.tg);
        case 2:
            break;
    }
            printf("Вам требуется добавить ссылку на 'Инстаграмм'? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите ссылку на 'Инстаграмм': ");
            scanf("%s", unite->social.insta);
        case 2:
            break;
    }
            printf("Вам требуется добавить ссылку на 'WhatsApp'? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите ссылку на 'WhatsApp': ");
            scanf("%s", unite->social.whatsapp);
        case 2:
            break;
    }
            printf("Вам требуется добавить ссылку на 'Facebook'? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите ссылку на 'Facebook': ");
            scanf("%s", unite->social.fb);
        case 2:
            break;
    }
    printf("Контакт успешно отредактирован!\n");
}