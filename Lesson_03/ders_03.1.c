//Məsələ: İstifadəçidən adını (bir sözlə) və yaşını soruşan, sonra isə bunları ekrana çıxaran proqram yazın.

#include <stdio.h>

int main() {
    char ad[30];
    int yas;

    printf("Adinizi daxil edin: ");
    scanf("%s", ad); // Diqqət: scanf boşluğa qədər oxuyur

    printf("Yasinizi daxil edin: ");
    scanf("%d", &yas);

    printf("Salam %s, sizin %d yasiniz var.\n", ad, yas);

    return 0;
}

/*İzahat (Addım-addım):
char ad[30]: 30 simvolluq yer ayırırıq ki, ad bura yazılsın.

scanf("%s", ad): %s sətir oxumaq üçündür. Massiv adları (ad) göstərici olduğu üçün burada & işarəsinə ehtiyac yoxdur.

scanf("%d", &yas): Tam ədəd oxuyuruq və onu yas dəyişəninin yaddaş ünvanına yazırıq.*/