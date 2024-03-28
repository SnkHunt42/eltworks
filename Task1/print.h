void printс(Unite unite)
{
    printf("Имя: %s\n", unite.fio.name);
    printf("Фамилия: %s\n", unite.fio.surname);
    printf("Отчество: %s\n", unite.fio.fathersname);
    printf("Место работы: %s\n", unite.job.workplace);
    printf("Должность: %s\n", unite.job.duty);
    printf("Первый номер телефона: %s\n", unite.number.number1);
    printf("Второй номер телефона: %s\n", unite.number.number2);
    printf("Третий номер телефона: %s\n", unite.number.number3);
    printf("Четвертый номер телефона: %s\n", unite.number.number4);
    printf("Пятый номер телефона: %s\n", unite.number.number5);
    printf("Первый адрес электронной почты: %s\n", unite.mail.mail1);
    printf("Второй адрес электронной почты: %s\n", unite.mail.mail2);
    printf("Третий адрес электронной почты: %s\n", unite.mail.mail3);
    printf("Четвертый адрес электронной почты: %s\n", unite.mail.mail4);
    printf("Пятый адрес электронной почты: %s\n", unite.mail.mail5);
    printf("Ссылка на 'ВКонтакте': %s\n", unite.social.vk);
    printf("Ссылка на 'Телеграмм': %s\n", unite.social.tg);
    printf("Ссылка на 'Инстаграмм': %s\n", unite.social.insta);
    printf("Ссылка на 'WhatsApp': %s\n", unite.social.whatsapp);
    printf("Ссылка на 'Facebook': %s\n", unite.social.fb);
}

void print(Unite list[], int listcount)
{
    printf("Список контактов:\n");
    for (int i = 0; i < listcount; i++)
    {
        printf("Контакт #%d:\n", i + 1);
        printс(list[i]);
        printf("\n");
    }
}