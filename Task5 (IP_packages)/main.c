#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <arpa/inet.h>

int samesub(uint32_t ip, uint32_t gw, uint32_t nm) {
    return ((ip & nm) == (gw & nm));
}

int main() {
    char gw_str[20], nm_str[20], packs_str[20];
    uint32_t gw, nm;
    int packs;

    printf("Введите IP адрес шлюза: ");
    scanf("%19s", gw_str);

    printf("Введите маску подсети: ");
    scanf("%19s", nm_str);

    printf("Введите количество пакетов: ");
    scanf("%d", &packs);

    if (inet_pton(AF_INET, gw_str, &gw) != 1 || inet_pton(AF_INET, nm_str, &nm) != 1) {
        printf("Ошибка при парсинге IP адреса шлюза или маски подсети\n");
        return 1;
    }

    int samesubcount = 0, diffsubcount = 0;
    for (int i = 0; i < packs; ++i) {
        uint32_t random_ip = rand();

        if (samesub(random_ip, gw, nm))
            samesubcount++;
        else
            diffsubcount++;
    }

    printf("Статистика:\n");
    printf("Пакеты, предназначенные узлам в своей подсети: %d (%.2f%%)\n", samesubcount, (float)samesubcount / packs * 100);
    printf("Пакеты, предназначенные узлам в других подсетях: %d (%.2f%%)\n", diffsubcount, (float)diffsubcount / packs * 100);

    return 0;
}
