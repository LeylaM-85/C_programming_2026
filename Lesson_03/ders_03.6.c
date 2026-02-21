/*Tapşırıq 3: getchar() və putchar() ilə simvol emalı
Tapşırıq: İstifadəçinin yazdığı mətni hərfləri böyük edərək geri çap et.*/

#include <stdio.h>
#include <ctype.h>

int main() {
    int c;

    printf("Metn daxil edin (Enter ile bitirin):\n");

    while ((c = getchar()) != '\n') {
        putchar(toupper(c));
    }

    putchar('\n');
    return 0;
}
/*```

**İzah — addım-addım:**

1. `getchar()` — klaviaturadan bir-bir simvol oxuyur
2. `!= '\n'` — Enter basılana qədər davam edir
3. `toupper(c)` — simvolu böyük hərfə çevirir (`ctype.h`-dan)
4. `putchar(...)` — bir simvol ekrana çap edir

**Nəticə:**
```
Metn daxil edin (Enter ile bitirin):
salam baku
SALAM BAKU*/