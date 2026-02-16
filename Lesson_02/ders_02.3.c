//İstifadəçidən Məlumat Almaq (scanf)

#include <stdio.h>

int main() {
    int eded;

    printf("Zəhmət olmasa bir tam ədəd daxil edin: ");
    
    // & işarəsi məlumatın yaddaşda harada saxlanacağını göstərir
    scanf("%d", &eded); 

    printf("Sizin daxil etdiyiniz ədəd: %d\n", eded);

    return 0;
}