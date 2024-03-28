void edit(Unite *unite)
{
    int opt;
    printf("Вам требуется изменить имя? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новое имя: ");
            scanf("%s", unite->fio.name);
            break;
        case 2:
            break;      
    }
    printf("Вам требуется изменить фамилию? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новую фамилию: ");
            scanf("%s", unite->fio.surname);
        case 2:
            break;
    }
    printf("Вам требуется изменить отчество? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:{
            printf("Введите новое отчество: ");
            scanf("%s", unite->fio.fathersname);}
        case 2:
            break;
    }
    printf("Вам требуется изменить место работы? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новое место работы: ");
            scanf("%s", unite->job.workplace);
        case 2:
            break;
    }
    printf("Вам требуется изменить рабочую должность? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новую рабочую должность: ");
            scanf("%s", unite->job.duty);
        case 2:
            break;
    }
    printf("Вам требуется изменить первый номер телефона? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новый первый номер телефона: ");
            scanf("%s", unite->number.number1);
        case 2:
            break;
    }
        printf("Вам требуется изменить второй номер телефона? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новый второй номер телефона: ");
            scanf("%s", unite->number.number2);
        case 2:
            break;
    }
        printf("Вам требуется изменить третий номер телефона? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новый третий номер телефона: ");
            scanf("%s", unite->number.number3);
        case 2:
            break;
    }
        printf("Вам требуется изменить четвертый номер телефона? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новый четвертый номер телефона: ");
            scanf("%s", unite->number.number4);
        case 2:
            break;
    }
        printf("Вам требуется изменить пятый номер телефона? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новый пятый номер телефона: ");
            scanf("%s", unite->number.number5);
        case 2:
            break;
    }
            printf("Вам требуется изменить первый адрес электронной почты? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новый первый адрес электронной почты: ");
            scanf("%s", unite->mail.mail1);
        case 2:
            break;
    }
                printf("Вам требуется изменить второй адрес электронной почты? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новый второй адрес электронной почты: ");
            scanf("%s", unite->mail.mail2);
        case 2:
            break;
    }
                printf("Вам требуется изменить третий адрес электронной почты? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новый третий адрес электронной почты: ");
            scanf("%s", unite->mail.mail3);
        case 2:
            break;
    }
                printf("Вам требуется изменить четвертый адрес электронной почты? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новый четвертый адрес электронной почты: ");
            scanf("%s", unite->mail.mail4);
        case 2:
            break;
    }
                printf("Вам требуется изменить пятый адрес электронной почты? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новый пятый адрес электронной почты: ");
            scanf("%s", unite->mail.mail5);
        case 2:
            break;
    }
        printf("Вам требуется изменить ссылку на 'ВКонтакте'? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новую ссылку на 'ВКонтакте': ");
            scanf("%s", unite->social.vk);
        case 2:
            break;
    }
            printf("Вам требуется изменить ссылку на 'Телеграмм'? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новую ссылку на 'Телеграмм': ");
            scanf("%s", unite->social.tg);
        case 2:
            break;
    }
            printf("Вам требуется изменить ссылку на 'Инстаграмм'? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новую ссылку на 'Инстаграмм': ");
            scanf("%s", unite->social.insta);
        case 2:
            break;
    }
            printf("Вам требуется изменить ссылку на 'WhatsApp'? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новую ссылку на 'WhatsApp': ");
            scanf("%s", unite->social.whatsapp);
        case 2:
            break;
    }
            printf("Вам требуется изменить ссылку на 'Facebook'? 1 - Да, 2 - Нет");
    scanf("%d", &opt);
    switch (opt){
        case 1:
            printf("Введите новую ссылку на 'Facebook': ");
            scanf("%s", unite->social.fb);
        case 2:
            break;
    }
    printf("Контакт успешно отредактирован!\n");
}