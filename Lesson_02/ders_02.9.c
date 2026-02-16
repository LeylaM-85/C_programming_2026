//Addım 1: int (tam ədəd) və float (kəsr ədəd) təyin edirik.

//Addım 2: printf ilə istifadəçiyə sual veririk.

//Addım 3: scanf ilə cavabı yadda saxlayırıq.

#include <stdio.h>

int main() {
    int yas;
    float boy;

    printf("Yaşınızı daxil edin: ");
    scanf("%d", &yas);

    printf("Boyunuzu daxil edin (məsələn, 1.75): ");
    scanf("%f", &boy);

    printf("Deməli, sizin %d yaşınız və %.2f m boyunuz var.\n", yas, boy);

    return 0;
}

/*3. Diqqət Edilməli Məqamlar
Format təyinedicisi: %d tam ədəd, %f kəsr ədəd üçündür.

& ampersand (Ünvan işarəsi): Bu işarəni unutsan, proqramın "çökə" (crash) bilər. scanf-də dəyişənin qarşısında 
mütləq olmalıdır.

Nöqtəli vergül (;): Hər sətrin sonunda olduğunu bir daha yoxla.*/