/*Tapşırıq 1: printf() və scanf() ilə sadə giriş-çıxış
Tapşırıq: İstifadəçidən ad və yaş al, ekrana çap et.*/

#include <stdio.h>

int main() {
    char ad[50];
    int yas;

    printf("Adinizi daxil edin: ");
    scanf("%49s", ad);

    printf("Yasinizi daxil edin: ");
    scanf("%d", &yas);

    printf("Salam, %s! Sizin yasiniz %d-dir.\n", ad, yas);

    return 0;
}
/*
```

**İzah — addım-addım:**

1. `char ad[50]` — 50 simvol tutacaq bir massiv elan edirik
2. `int yas` — tam ədəd üçün dəyişən
3. `printf(...)` — ekrana mətn çap edir
4. `scanf("%49s", ad)` — klaviaturadan maksimum 49 simvol oxuyur (overflow qarşısını alır)
5. `scanf("%d", &yas)` — tam ədəd oxuyur, `&` ilə ünvanı veririk

**Nəticə:**
```
Adinizi daxil edin: Kamran
Yasinizi daxil edin: 25
Salam, Kamran! Sizin yasiniz 25-dir.*/