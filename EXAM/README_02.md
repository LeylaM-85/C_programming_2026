**1-ci Mövzu: Təməl Giriş-Çıxış və Riyazi Hesablamalar**

---

## Mövzu 1: Təməl Giriş-Çıxış və Dəyişənlər (Mühazirə)

C proqramlaşdırma dilində hər bir proqram `main()` funksiyası ilə başlayır. Məlumatları ekrana çıxarmaq üçün `printf()`, istifadəçidən məlumat almaq üçün isə `scanf()` funksiyasından istifadə olunur.

* **Dəyişənlər:** Məlumatı yaddaşda saxlamaq üçün istifadə olunur. Məsələn: `int` (tam ədəd), `float` (kəsr ədəd), `char` (simvol).
* **Format Spesifikatorları:** `%d` (tam ədəd üçün), `%f` (kəsr üçün), `%c` (simvol üçün).
* **Riyazi Operatorlar:** `+`, `-`, `*`, `/` və `%` (qalıq).

---

### Sual 27: İstifadəçinin daxil etdiyi ədədin kubunu hesablayan proqram.

**İzah:** Kub bir ədədin öz-özünə üç dəfə vurulmasıdır ($x^3 = x \cdot x \cdot x$).

```c
#include <stdio.h>

int main() {
    int eded, kub;
    printf("Bir eded daxil edin: ");
    scanf("%d", &eded);
    
    kub = eded * eded * eded;
    
    printf("Ededin kubu: %d\n", kub);
    return 0;
}

```

---

### Sual 18: 3 rəqəmli ədədin rəqəmləri cəmini tapan proqram.

**İzah:** 3 rəqəmli ədədi rəqəmlərinə ayırmaq üçün riyazi üsuldan istifadə edirik:

1. **Yüzlüklər:** Ədədi 100-ə bölürük (`eded / 100`).
2. **Onluqlar:** Ədədi 10-a bölüb, alınan nəticənin 10-a bölünməsindən qalanı tapırıq (`(eded / 10) % 10`).
3. **Təkliklər:** Ədədin 10-a bölünməsindən qalanı tapırıq (`eded % 10`).

```c
#include <stdio.h>

int main() {
    int eded, y, o, t, cem;
    printf("3 reqemli eded daxil edin: ");
    scanf("%d", &eded);
    
    y = eded / 100;          // Yüzlüklər
    o = (eded / 10) % 10;    // Onluqlar
    t = eded % 10;           // Təkliklər
    
    cem = y + o + t;
    printf("Reqemlerin cemi: %d\n", cem);
    
    return 0;
}

```

---

## Mövzu 2: Şərt Operatorları - `if-else` (Mühazirə)

Proqramda müəyyən bir şərt daxilində kodun işləməsini istədikdə `if` (əgər) strukturundan istifadə edirik. Əgər şərt ödənmirsə, `else` bloku işə düşür.

* **Müqayisə operatorları:** `==` (bərabərdir), `!=` (bərabər deyil), `>` (böyükdür), `<` (kiçikdir), `>=` və `<=`.
* **Məntiqi operatorlar:** `&&` (VƏ - hər iki şərt doğru olmalıdır), `||` (VƏ YA - ən azı bir şərt doğru olmalıdır).

---

### Sual 28: İki ədəddən böyüyünü tapan proqram.

**İzah:** İki ədədi müqayisə edirik, hansı böyükdürsə onu çap edirik.

```c
#include <stdio.h>

int main() {
    int a, b;
    printf("Iki eded daxil edin: ");
    scanf("%d %d", &a, &b);
    
    if (a > b) {
        printf("Boyuk olan: %d\n", a);
    } else if (b > a) {
        printf("Boyuk olan: %d\n", b);
    } else {
        printf("Ededler beraberdir.\n");
    }
    
    return 0;
}

```

---

### Sual 1: 3 ədəddən ən böyüyünü tapan proqram.

**İzah:** Burada `&&` (və) operatoru ilə hər bir ədədin digər ikisindən böyük olub-olmadığını yoxlayırıq.

```c
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Uc eded daxil edin: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a >= b && a >= c) {
        printf("En boyuk: %d\n", a);
    } else if (b >= a && b >= c) {
        printf("En boyuk: %d\n", b);
    } else {
        printf("En boyuk: %d\n", c);
    }
    
    return 0;
}

```

---

### Sual 85: Ternary (Üçlü) operator ilə tək/cüt yoxlanılması.

**İzah:** Ternary operator `if-else`-in qısaldılmış formasıdır. Yazılış qaydası: `şərt ? doğru_dursa : səhv_dirsə`.

```c
#include <stdio.h>

int main() {
    int eded;
    printf("Eded daxil edin: ");
    scanf("%d", &eded);
    
    // Ternary operator istifadesi
    (eded % 2 == 0) ? printf("Cutdur\n") : printf("Tekdir\n");
    
    return 0;
}

```

---

**Bu qayda ilə davam etməyimi istərdinizmi? Suallar çox olduğu üçün onları bu formatda hissə-hissə (məsələn, hər dəfə 10-15 sual) təqdim edə bilərəm.**
