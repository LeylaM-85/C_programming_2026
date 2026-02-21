/*Tapşırıq 2: fgets() ilə təhlükəsiz giriş
Tapşırıq: İstifadəçidən tam cümlə al (boşluqlarla), ekrana çap et.*/

#include <stdio.h>
#include <string.h>

int main() {
    char cumle[100];

    printf("Bir cumle yazin: ");
    fgets(cumle, sizeof(cumle), stdin);

    // fgets sonuna '\n' elave edir, onu silirik
    cumle[strcspn(cumle, "\n")] = '\0';

    printf("Siz yazdıniz: \"%s\"\n", cumle);
    printf("Simvol sayi: %zu\n", strlen(cumle));

    return 0;
}
/*
```

**İzah — addım-addım:**

1. `fgets(cumle, sizeof(cumle), stdin)` — maksimum 99 simvol oxuyur, `scanf`-dan fərqli olaraq boşluqları da oxuyur
2. `strcspn(cumle, "\n")` — `\n` simvolunun yerini tapır
3. `= '\0'` — həmin yeri sıfırlayır (yəni `\n` silinir)
4. `strlen(cumle)` — sətrin uzunluğunu qaytarır

**Nəticə:**
```
Bir cumle yazin: Salam dunya nece gedir
Siz yazdıniz: "Salam dunya nece gedir"
Simvol sayi: 22*/