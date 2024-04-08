void printс(Unite *unite)
{
    printf("Имя: %s\n", unite->fio.name);
    printf("Фамилия: %s\n", unite->fio.surname);
    if (strlen(unite->fio.fathersname) > 0){
    printf("Отчество: %s\n", unite->fio.fathersname);}
    if (strlen(unite->job.workplace) > 0){
    printf("Место работы: %s\n", unite->job.workplace);}
    if (strlen(unite->job.duty) > 0){
    printf("Должность: %s\n", unite->job.duty);}
    if (strlen(unite->number.number1) > 0){
    printf("Первый номер телефона: %s\n", unite->number.number1);}
    if (strlen(unite->number.number2) > 0){
    printf("Второй номер телефона: %s\n", unite->number.number2);}
    if (strlen(unite->number.number3) > 0){
    printf("Третий номер телефона: %s\n", unite->number.number3);}
    if (strlen(unite->number.number4) > 0){
    printf("Четвертый номер телефона: %s\n", unite->number.number4);}
    if (strlen(unite->number.number5) > 0){
    printf("Пятый номер телефона: %s\n", unite->number.number5);}
    if (strlen(unite->mail.mail1) > 0){
    printf("Первый адрес электронной почты: %s\n", unite->mail.mail1);}
    if (strlen(unite->mail.mail2) > 0){
    printf("Второй адрес электронной почты: %s\n", unite->mail.mail2);}
    if (strlen(unite->mail.mail3) > 0){
    printf("Третий адрес электронной почты: %s\n", unite->mail.mail3);}
    if (strlen(unite->mail.mail4) > 0){
    printf("Четвертый адрес электронной почты: %s\n", unite->mail.mail4);}
    if (strlen(unite->mail.mail5) > 0){
    printf("Пятый адрес электронной почты: %s\n", unite->mail.mail5);}
    if (strlen(unite->social.vk) > 0){
    printf("Ссылка на 'ВКонтакте': %s\n", unite->social.vk);}
    if (strlen(unite->social.tg) > 0){
    printf("Ссылка на 'Телеграмм': %s\n", unite->social.tg);}
    if (strlen(unite->social.insta) > 0){
    printf("Ссылка на 'Инстаграмм': %s\n", unite->social.insta);}
    if (strlen(unite->social.whatsapp) > 0){
    printf("Ссылка на 'WhatsApp': %s\n", unite->social.whatsapp);}
    if (strlen(unite->social.fb) > 0){
    printf("Ссылка на 'Facebook': %s\n", unite->social.fb);}
}

void print(Node *head) {
    if (head == NULL) {
        printf("Список контактов пуст.\n");
        return;
    }

    int index = 1;
    Node *current = head;
    while (current != NULL) {
        printf("Контакт #%d:\n", index++);
        printс(&(current->data));
        current = current->next;
        printf("\n");
    }
}