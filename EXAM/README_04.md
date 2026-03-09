**İç-içə dövrlər (Nested Loops)** və **Mürəkkəb Alqoritmlər** (Sadə ədəd, Fibonacci və s.)

---

## Mövzu 5: İç-içə Dövrlər - `Nested Loops` (Mühazirə)

İç-içə dövrlər bir dövrün (xarici dövr) daxilində başqa bir dövrün (daxili dövr) yerləşməsidir. Xarici dövrün hər **bir** addımı üçün daxili dövr **tamamilə** sona qədər icra olunur.

* **İstifadə sahələri:** Vurma cədvəli, matrislərin (cədvəllərin) qurulması, ulduzlarla həndəsi fiqurların (piramida, kvadrat) çəkilməsi.
* **Məntiq:** Əgər xarici dövr 5 dəfə, daxili dövr 3 dəfə təkrar olunursa, daxili dövrün içindəki kod cəmi $5 \times 3 = 15$ dəfə işləyəcək.

---

### Sual 64: `Nested for` ilə vurma cədvəlini (1x1-dən 10x10-a) çap edin.

**İzah:** Xarici dövr (`i`) sətirləri (1-dən 10-a qədər ədədləri), daxili dövr (`j`) isə hər bir ədədin vurulduğu rəqəmləri göstərir.

```c
#include <stdio.h>

int main() {
    printf("--- VURMA CEDVELI ---\n\n");
    
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            // \t simvolu sutunlarin düzülməsi üçün boşluq qoyur
            printf("%d x %d = %d\t", j, i, i * j);
        }
        printf("\n"); // Hər sətirdən sonra yeni sətirə keçid
    }
    return 0;
}

```

---

### Sual 35: Ulduzlarla piramida (üçbucaq) çap edin.

**İzah:** Bu tip tapşırıqlarda xarici dövr sətir sayını, daxili dövr isə hər sətirdə neçə ulduz olacağını təyin edir.

```c
#include <stdio.h>

int main() {
    int sətir = 5;
    
    for (int i = 1; i <= sətir; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

```

---

## Mövzu 6: Mürəkkəb Alqoritmlər (Mühazirə)

Bəzi proqramlar sadəcə riyazi hesablama deyil, müəyyən bir məntiqi ardıcıllıq və ya xüsusi yoxlanış tələb edir.

* **Sadə ədədlər:** Yalnız 1-ə və özünə bölünən ədədlər (məsələn: 2, 3, 5, 7, 11...).
* **Fibonacci ardıcıllığı:** Hər bir ədəd özündən əvvəlki iki ədədin cəminə bərabərdir (1, 1, 2, 3, 5, 8, 13...).
* **FizzBuzz:** Bölünmə şərtlərinə görə fərqli mesajların çıxarılması (Məntiqi `if-else` zənciri).

---

### Sual 47: 1-dən N-ə qədər FizzBuzz proqramı.

**İzah:** Əgər ədəd həm 3-ə, həm 5-ə bölünürsə (yəni 15-ə), "FizzBuzz" yazılır. Ən vacib məqam hər ikisinə bölünmə şərtini (`&&`) ən başda yoxlamaqdır.

```c
#include <stdio.h>

int main() {
    int n;
    printf("N ededini daxil edin: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz ");
        } else if (i % 3 == 0) {
            printf("Fizz ");
        } else if (i % 5 == 0) {
            printf("Buzz ");
        } else {
            printf("%d ", i);
        }
    }
    return 0;
}

```

---

### Sual 46: Fibonacci ardıcıllığını N-ci elementə qədər çap edin.

**İzah:** Bizə üç dəyişən lazımdır: birinci ədəd (`a`), ikinci ədəd (`b`) və növbəti ədəd (`next`). Hər dövrdə `next = a + b` hesablanır və sonra `a` ilə `b`-nin qiymətləri sürüşdürülür.

```c
#include <stdio.h>

int main() {
    int n, a = 1, b = 1, next;
    printf("Nece element cap olunsun? ");
    scanf("%d", &n);

    printf("Fibonacci ardicilligi: ");
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    return 0;
}

```

---

### Sual 93: Ədədin sadə olub-olmadığını yoxlayan proqram.

**İzah:** Ədədi 2-dən başlayaraq özünün yarısına qədər olan rəqəmlərə bölməyə çalışırıq. Əgər birinə belə tam bölünərsə, deməli sadə deyil.

```c
#include <stdio.h>

int main() {
    int eded, sadedir = 1; // 1 - sadedir, 0 - sade deyil
    printf("Eded daxil edin: ");
    scanf("%d", &eded);

    if (eded <= 1) {
        sadedir = 0;
    } else {
        for (int i = 2; i <= eded / 2; i++) {
            if (eded % i == 0) {
                sadedir = 0;
                break; // Bolunduyu an dovrden cixiriq
            }
        }
    }

    if (sadedir) printf("%d sade ededdir.\n", eded);
    else printf("%d sade eded deyil.\n", eded);

    return 0;
}

```

---

