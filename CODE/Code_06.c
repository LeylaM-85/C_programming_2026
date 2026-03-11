/*2. getchar() funksiyasına aid kod
getchar() istifadəçidən bir simvol alır və Enter sıxılana qədər gözləyir.*/

C
#include <stdio.h>

int main() {
    char secim;

    printf("Davam etmek isteyirsiniz? (y/n): ");
    secim = getchar(); // İstifadəçidən tək simvol alırıq

    printf("Sizin seciminiz: ");
    putchar(secim); // Alınan simvolu ekrana qaytarırıq
    putchar('\n');

    return 0;
}
//Tapşırıq 2: İstifadəçidən getchar() ilə bir rəqəm (simvol olaraq) daxil etməsini istəyin. Sonra həmin simvolun ASCII dəyərini printf("%d", ...) ilə çap edin.
