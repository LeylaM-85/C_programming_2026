/*Tapşırıq 4: fflush() və buferləşdirmə
Tapşırıq: fflush istifadə edərək çıxış buferini məcburi boşalt.*/

#include <stdio.h>
#include <unistd.h>   // sleep() ucun

int main() {
    printf("Yuklenme bashlayir");
    fflush(stdout);   // buferi derhal ekrana gonder

    for (int i = 0; i < 5; i++) {
        sleep(1);
        printf(".");
        fflush(stdout);  // her noqteden sonra buferi bosalt
    }

    printf("\nTamamlandi!\n");
    return 0;
}
/*
```

**İzah — addım-addım:**

1. Normalda `printf` çıxışı buferdə saxlayır, `\n` olana qədər ekrana çıxmır
2. `fflush(stdout)` — buferdəki hər şeyi dərhal ekrana göndərir
3. `sleep(1)` — 1 saniyə gözləyir
4. Nəticədə hər saniyə bir nöqtə görünür — `fflush` olmadan hamısı birlikdə çıxardı

**Nəticə:**
```
Yuklenme bashlayir.....
Tamamlandi!
(hər nöqtə 1 saniyə aralıqla görünür)*/