//İstifadəçidən Məlumat Almaq (scanf)

#include <stdio.h>

int main() {
    int istifadeci_yasi;

    printf("Zəhmət olmasa yaşınızı daxil edin: ");
    
    // scanf məlumatı oxuyur. 
    // & (ampersand) işarəsi yaddaş ünvanını göstərir, mütləq yazılmalıdır!
    scanf("%d", &istifadeci_yasi); 

    printf("Sizin %d yaşınız var. Maşallah!\n", istifadeci_yasi);

    return 0;
}