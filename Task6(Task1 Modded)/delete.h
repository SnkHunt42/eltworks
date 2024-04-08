void deletecon(Node **head, int *listcount) {
    if (*head == NULL) {
        printf("Список контактов пуст.\n");
        return;
    }

    int deleteid;
    printf("Введите номер контакта для удаления: (от 1 до %d)", *listcount);
    scanf("%d", &deleteid);

    Node *current = *head;
    int i;
    for (i = 1; i < deleteid && current != NULL; i++) {
        current = current->next;
    }

    if (current == NULL) {
        printf("Некорректный номер контакта.\n");
        return;
    }

    if (current->prev != NULL) {
        current->prev->next = current->next;
    }
    if (current->next != NULL) {
        current->next->prev = current->prev;
    }
    if (current == *head) {
        *head = current->next;
    }

    free(current);
    (*listcount)--;
    printf("Контакт успешно удален!\n");
}
