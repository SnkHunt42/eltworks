void deletecon(Unite list[], int *listcount, int index)
{
    if (index < 0 || index >= *listcount)
    {
        printf("Некорректный номер контакта.\n");
        return;
    }

    for (int i = index; i < *listcount - 1; i++)
    {
        list[i] = list[i + 1];
    }

    (*listcount)--;
    printf("Контакт успешно удалён!\n");
}