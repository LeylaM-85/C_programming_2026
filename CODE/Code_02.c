/*2. Parametr: Sıfırla doldurma (Zero Padding - %05d)
Mövzu: Standart formatlı rəqəmlərin (məsələn: saat, ID kodlar) yaradılması.

Tapşırıq:
Təsəvvür edin ki, rəqəmsal saat proqramı hazırlayırsınız. İstifadəçidən saat və dəqiqəni tam ədəd kimi daxil etməsini istəyin (məsələn: saat 9, dəqiqə 5). Proqram bu zamanı standart 00:00 formatında çap etməlidir. Yəni, əgər rəqəm tək rəqəmlidirsə, önünə mütləq 0 əlavə edilməlidir.

Nümunə giriş: 9 və 5

Nümunə çıxış: Zaman: 09:05*/

#include <stdio.h>
int main() {
    int saat, deqiqe;
    printf("Saati daxil edin: ");
    scanf("%d", &saat);
    printf("Deqiqeni daxil edin: ");
    scanf("%d", &deqiqe);
    printf("Zaman: %02d:%02d\n", saat, deqiqe);
    return 0;
}
