//Tam Ədədlər (int) və Çıxış Formatı

#include <stdio.h>

int main() {
    // 1.1. Dəyişənin təyin edilməsi (Declaration)
    int alma_sayi; 
    
    // 1.2. Qiymət mənimsədilməsi (Assignment)
    alma_sayi = 15; 

    // %d -> tam ədədi çap etmək üçün "yer tutucu"dur
    printf("Səbətdə %d dənə alma var.\n", alma_sayi);

    return 0;
}