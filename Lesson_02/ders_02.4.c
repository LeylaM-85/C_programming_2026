//Sadə Riyazi Hesablama (Cəmləmə)

#include <stdio.h>

int main() {
    int a, b, cem;

    printf("Birinci ədədi yazın: ");
    scanf("%d", &a);

    printf("İkinci ədədi yazın: ");
    scanf("%d", &b);

    cem = a + b;

    printf("Nəticə: %d + %d = %d\n", a, b, cem);

    return 0;
}