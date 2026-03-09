**Şərt operatorlarının davamı** və **Dövrlər (Loops)** mövzusu
---

## Mövzu 3: Seçim Operatoru - `switch-case` (Mühazirə)

`if-else` çox sayda şərt olduqda kodu qarışıq göstərə bilər. Əgər bir dəyişənin müxtəlif sabit dəyərlərə (məsələn, 1, 2, 3 və ya 'A', 'B', 'C') bərabərliyini yoxlayırıqsa, `switch-case` daha əlverişlidir.

* **`break`:** Hər bir `case`-in sonunda istifadə olunur ki, proqram uyğun variantı tapdıqdan sonra dayanmasın, digər variantlara keçməsin.
* **`default`:** Heç bir şərt ödənmədikdə işə düşən hissədir.

---

### Sual 31: `switch-case` ilə ayın neçə gün olduğunu tapan proqram.

**İzah:** İstifadəçi ayın nömrəsini (1-12) daxil edir. 31, 30 və 28 gün olan aylar qruplaşdırılır.

```c
#include <stdio.h>

int main() {
    int ay;
    printf("Ay nomresini daxil edin (1-12): ");
    scanf("%d", &ay);

    switch(ay) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Bu ay 31 gundur.\n");
            break;
        case 4: case 6: case 9: case 11:
            printf("Bu ay 30 gundur.\n");
            break;
        case 2:
            printf("Bu ay 28 gundur.\n");
            break;
        default:
            printf("Xetali ay nomresi!\n");
    }
    return 0;
}

```

---

## Mövzu 4: Dövr Operatorları - `for` və `while` (Mühazirə)

Dövrlər müəyyən bir əməliyyatı təkrar-təkrar yerinə yetirmək üçün istifadə olunur.

1. **`for` dövrü:** Təkrarlanma sayı əvvəlcədən məlum olduqda istifadə edilir.
* Sintaksis: `for(başlanğıc; şərt; artım)`


2. **`while` dövrü:** Şərt doğru olduğu müddətcə davam edir. Təkrarlanma sayı dəqiq bilinməyəndə əlverişlidir.
3. **`do-while` dövrü:** Şərt sonda yoxlanılır, yəni kod **ən azı bir dəfə** mütləq işləyir.

---

### Sual 4: 1-dən 55-ə qədər ədədlərin cəmini tapan proqram.

**İzah:** Bir `cem` dəyişəni təyin edirik və hər dövrdə növbəti ədədi onun üzərinə gəlirik.

```c
#include <stdio.h>

int main() {
    int cem = 0;
    
    for(int i = 1; i <= 55; i++) {
        cem = cem + i; // cem += i; kimi de yazmaq olar
    }
    
    printf("1-den 55-e qeder ededlerin cemi: %d\n", cem);
    return 0;
}

```

---

### Sual 5: 1-65 aralığında cüt ədədləri tapan proqram.

**İzah:** Bir ədədin cüt olduğunu yoxlamaq üçün onun 2-yə bölünməsindən qalan qalığı (`% 2`) yoxlayırıq. Əgər qalıq 0-dırsa, ədəd cütdür.

```c
#include <stdio.h>

int main() {
    printf("1-65 arasi cut ededler:\n");
    
    for(int i = 1; i <= 65; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}

```

---

### Sual 13: 1-185 aralığında 8-ə bölünən ədədləri tapan proqram.

**İzah:** Şərt hissəsində `i % 8 == 0` yazaraq 8-ə tam bölünənləri süzürük.

```c
#include <stdio.h>

int main() {
    printf("1-185 arasi 8-e bolunenler:\n");
    
    for(int i = 1; i <= 185; i++) {
        if(i % 8 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}

```

---

### Sual 39: Ədədin rəqəmlərinin sayını `while` ilə tapmaq.

**İzah:** Ədədi hər dəfə 10-a böldükdə bir rəqəmi "silinir". Ədəd sıfır olana qədər bu prosesi təkrarlayırıq və hər dəfə sayğacı (`count`) artırırıq.

```c
#include <stdio.h>

int main() {
    long long eded;
    int say = 0;
    
    printf("Bir eded daxil edin: ");
    scanf("%lld", &eded);
    
    // Eger eded 0-dirsa, o 1 reqemlidir
    if (eded == 0) say = 1;
    
    while(eded != 0) {
        eded = eded / 10;
        say++;
    }
    
    printf("Reqemlerin sayi: %d\n", say);
    return 0;
}

```

---

### Sual 36: Verilmiş ədədin faktorialını hesablayan proqram.

**İzah:** Faktorial ($n!$) 1-dən n-ə qədər olan bütün ədədlərin hasilidir. Məsələn: $5! = 1 \cdot 2 \cdot 3 \cdot 4 \cdot 5 = 120$.

```c
#include <stdio.h>

int main() {
    int n;
    long long faktorial = 1;
    
    printf("Faktoriali hesablanacaq ededi daxil edin: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        faktorial = faktorial * i;
    }
    
    printf("%d! = %lld\n", n, faktorial);
    return 0;
}

```

---

