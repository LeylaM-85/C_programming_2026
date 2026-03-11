/*Tapşırıq:
Bir mağaza proqramı tərtib edin. İstifadəçi məhsulun qiymətini (float) və aldığı məhsulun sayını (int) daxil etsin. Proqram ümumi məbləği hesablamalı və ekranda "Ödəniləcək məbləğ: X.XX AZN" formatında, yəni qəpiklər mütləq iki rəqəmlə göstərilməklə çap etməlidir.

Nümunə giriş: Qiymət: 2.5, Say: 3

Nümunə çıxış: Ödəniləcək məbləğ: 7.50 AZN*/

#include <stdio.h>

int main() {
    float qiymet, umumi_mebleg;
    int say;
    printf("Mehsulun qiymetini daxil edin: ");
    scanf("%f", &qiymet);
    printf("Mehsulun sayini daxil edin: ");
    scanf("%d", &say);
    umumi_mebleg = qiymet * say;
    printf("Odenilecek mebleg: %.2f AZN\n", umumi_mebleg);
    return 0;
}
