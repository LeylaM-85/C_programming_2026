**Göstəricilər (Pointers)** və **Dinamik Yaddaşın İdarə Edilməsi**

---

## Mövzu 9: Göstəricilər - `Pointers` (Mühazirə)

Göstərici (pointer) adi bir dəyişən deyil. O, özündə hər hansı bir məlumatı (5, 10, 'A') deyil, başqa bir dəyişənin **yaddaşdakı ünvanını** saxlayır.

* **Ünvan (`&`):** Hər bir dəyişənin yaddaşda (RAM) bir ünvanı var. `&a` yazdıqda biz `a` dəyişəninin ünvanını almış oluruq.
* **Göstərici ulduzu (`*`):** 1.  Təyinatda: `int *ptr;` (ptr adlı bir göstərici yaradır).
2.  İstifadədə: `*ptr;` (həmin ünvandakı dəyəri gətirir).
* **Əhəmiyyəti:** Funksiyalara böyük məlumatları göndərmək, yaddaşı daha səmərəli idarə etmək və massivlərlə birbaşa işləmək üçün vacibdir.

---

### Sual 141: Bir tam ədəd təyin edin, onun ünvanını pointer vasitəsilə çap edin.

**İzah:** `%p` format spesifikatoru yaddaş ünvanlarını (hexadecimal formatda) göstərmək üçün istifadə olunur.

```c
#include <stdio.h>

int main() {
    int eded = 42;
    int *ptr = &eded; // ededin unvanini ptr-e menimsetdik

    printf("Ededin deyeri: %d\n", eded);
    printf("Ededin yaddas unvani (&eded): %p\n", &eded);
    printf("Pointerin saxladigi unvan (ptr): %p\n", ptr);
    printf("Pointer vasitesile deyer (*ptr): %d\n", *ptr);

    return 0;
}

```

---

### Sual 102: İki ədədin yerini pointerlarla dəyişin (Swap).

**İzah:** Funksiyadan kənardakı dəyişənlərin qiymətini dəyişmək üçün biz onlara "ünvan" (pointer) vasitəsilə müraciət etməliyik.

```c
#include <stdio.h>

void yerdeyisme(int *x, int *y) {
    int temp = *x; // x unvanindaki deyeri temp-e qoy
    *x = *y;       // y unvanindaki deyeri x unvanina qoy
    *y = temp;     // temp-i y unvanina qoy
}

int main() {
    int a = 10, b = 20;
    printf("Evvel: a = %d, b = %d\n", a, b);

    yerdeyisme(&a, &b); // Unvanlari gonderirik

    printf("Sonra: a = %d, b = %d\n", a, b);
    return 0;
}

```

---

## Mövzu 10: Dinamik Yaddaşın İdarə Edilməsi - `malloc`, `free` (Mühazirə)

Normalda massiv yaradanda ölçüsü əvvəlcədən təyin edilməlidir (`int a[10]`). Amma bəzən bizə proqram işləyən zaman (run-time) nə qədər yaddaş lazım olacağını bilmirik. Bu zaman Dinamik Yaddaş köməyə çatır.

* **`malloc()` (Memory Allocation):** İstədiyimiz qədər yaddaş bloku ayırır.
* **`free()`:** Ayrılmış yaddaşı boşaldır (vacibdir, yoxsa "memory leak" baş verər).
* **`realloc()`:** Əvvəl ayrılmış yaddaşın ölçüsünü böyüdür və ya kiçildir.

---

### Sual 143: `malloc()` ilə 5 tam ədədlik dinamik massiv ayırın.

**İzah:** `malloc` funksiyası `void *` qaytardığı üçün onu `(int *)` tipinə çeviririk (casting).

```c
#include <stdio.h>
#include <stdlib.h> // malloc ve free ucun lazimdir

int main() {
    int *ptr;
    int i;

    // 5 ededlik yaddas ayiririq (5 * 4 byte = 20 byte)
    ptr = (int*) malloc(5 * sizeof(int));

    if (ptr == NULL) {
        printf("Yaddas ayrila bilmedi!\n");
        return 1;
    }

    printf("5 eded daxil edin:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &ptr[i]); // Dinamik massivi de adi massiv kimi istifade etmek olar
    }

    printf("Daxil edilenler: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr); // Yaddasi mutleq azad edirik
    return 0;
}

```

---

### Sual 136: `realloc` ilə massivi 2 qat genişləndirin.

**İzah:** Mövcud olan dinamik yaddaşı itirmədən onu genişləndirmək üçün `realloc` istifadə olunur.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*) malloc(2 * sizeof(int));
    ptr[0] = 10; ptr[1] = 20;

    printf("Kohnə olcu: 10, 20\n");

    // Olcunu 4 ededliye qeder artiririq
    ptr = (int*) realloc(ptr, 4 * sizeof(int));
    ptr[2] = 30; ptr[3] = 40;

    printf("Yeni olcu ile: ");
    for(int i = 0; i < 4; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);
    return 0;
}

```

---
