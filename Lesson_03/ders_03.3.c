//Məsələ: fgets() funksiyasından istifadə edərək boşluqlu (məsələn: Ad Soyad) giriş qəbul edən və daşmanın qarşısını alan sistem qurun.

#include <stdio.h>
#include <string.h>

int main() {
    char tam_ad[50];

    printf("Ad ve Soyadinizi daxil edin (maks 50 simvol): ");
    
    // fgets(haraya, ne qeder, haradan)
    fgets(tam_ad, sizeof(tam_ad), stdin);

    // fgets sonda \n (Enter) simvolunu da saxlayır, onu təmizləyək:
    tam_ad[strcspn(tam_ad, "\n")] = 0;

    printf("Xos gelmisiniz: [%s]\n", tam_ad);

    return 0;
}

/*İzahat:
fgets(tam_ad, sizeof(tam_ad), stdin): Bu ən təhlükəsiz yoldur. Çünki proqram 50 simvoldan artıq heç nə oxumayacaq. Əgər istifadəçi 100 simvol yazsa belə, ilk 49-u götürüləcək, qalanı atılacaq. Beləliklə, yaddaş daşması olmur.

strcspn: fgets istifadəçi Enter vurduqda həmin sətir sonu işarəsini də mətnə qatır. Biz bu funksiya ilə \n-i tapıb onu 0 (null terminator) ilə əvəz edirik ki, mətn təmiz qalsın.*/