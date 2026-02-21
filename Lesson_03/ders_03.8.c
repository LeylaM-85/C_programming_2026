/*Tapşırıq 5: Input Overflow — Təhlükəsiz idarəetmə
Tapşırıq: Uzun giriş zamanı buferin daşmasını fgets ilə önlə, artıq simvolları təmizlə.*/

#include <stdio.h>
#include <string.h>

void buferi_temizle(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    char ad[10];  // qəsdən kiçik buffer

    printf("Adinizi daxil edin (max 9 simvol): ");
    fgets(ad, sizeof(ad), stdin);

    // '\n' buferde qaldimi yoxlayirik
    if (ad[strlen(ad) - 1] != '\n') {
        printf("XEBERDARLIQ: Cox uzun giris! Artiq hissesi silindi.\n");
        buferi_temizle();  // stdin-de qalan simvollari temizle
    } else {
        ad[strcspn(ad, "\n")] = '\0';
    }

    printf("Qeyd edildi: \"%s\"\n", ad);
    return 0;
}

/*
```

**İzah — addım-addım:**

1. `ad[10]` — yalnız 9 simvol + `\0` üçün yer var
2. `fgets` artıq hissəni kəsir, lakin o hissə `stdin`-də qalır
3. `ad[strlen(ad)-1] != '\n'` — əgər sətrin sonunda `\n` yoxdursa, deməli giriş kəsilib
4. `buferi_temizle()` — `stdin`-dəki qalan simvolları `\n`-ə qədər oxuyub atır
5. Bu olmasa, növbəti `fgets` artıq `stdin`-dəki qalıqları oxuyardı

**Nəticə:**
```
Adinizi daxil edin (max 9 simvol): Muhammadhusein
XEBERDARLIQ: Cox uzun giris! Artiq hissesi silindi.
Qeyd edildi: "Muhammadh"*/