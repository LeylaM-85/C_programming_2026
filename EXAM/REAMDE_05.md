**Massivlər (Arrays)** 

---

## Mövzu 7: Massivlər - `Arrays` (Mühazirə)

Təsəvvür edin ki, bir sinifdə 30 tələbə var və hər birinin qiymətini yadda saxlamalısınız. 30 dənə ayrı dəyişən (`qiy1`, `qiy2`, ...) təyin etmək yerinə, bir massiv (`qiymetler[30]`) istifadə etmək daha səmərəlidir.

* **İndeks:** Massivin hər bir elementinin nömrəsi (ünvanı) var. C dilində indeksləşmə **həmişə 0-dan başlayır**. Yəni 5 elementli massivin elementləri `0, 1, 2, 3, 4` indekslərində yerləşir.
* **Elan edilməsi:** `tip ad[ölçü];` -> Məsələn: `int reqemler[10];`
* **Dövrlərlə işləmə:** Massivlərin elementlərinə müraciət etmək üçün demək olar ki, həmişə `for` dövründən istifadə olunur.

---

### Sual 91: 10 elementli birölçülü massiv yaradıb elementləri təyin edin.

**İzah:** Massivi elan edərkən dərhal qiymətlərini də vermək olar (initialization).

```c
#include <stdio.h>

int main() {
    // 10 elementli tam eded massivi
    int massiv[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    
    printf("Massivin elementleri:\n");
    for(int i = 0; i < 10; i++) {
        printf("Indeks %d: Dejer %d\n", i, massiv[i]);
    }
    
    return 0;
}

```

---

### Sual 92: 5 elementli massivə elementləri istifadəçidən daxil edin.

**İzah:** `scanf` funksiyasını dövrün daxilində istifadə edərək hər bir indeksi doldururuq.

```c
#include <stdio.h>

int main() {
    int massiv[5];
    
    printf("5 eded daxil edin:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d-ci elementi daxil edin: ", i + 1);
        scanf("%d", &massiv[i]);
    }
    
    printf("\nDaxil etdiyiniz massiv: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", massiv[i]);
    }
    
    return 0;
}

```

---

### Sual 96: Tələbə qiymətlərini saxlayan massivdə orta balı hesablayın.

**İzah:** Əvvəlcə bütün elementlərin cəmini tapırıq, sonra isə həmin cəmi elementlərin sayına bölürük. Orta bal kəsr ola biləcəyi üçün `float` tipindən istifadə edirik.

```c
#include <stdio.h>

int main() {
    int say;
    printf("Telebe sayini daxil edin: ");
    scanf("%d", &say);
    
    int ballar[say];
    float cem = 0;
    
    for(int i = 0; i < say; i++) {
        printf("%d. telebenin bali: ", i + 1);
        scanf("%d", &ballar[i]);
        cem += ballar[i]; // cem = cem + ballar[i]
    }
    
    float orta = cem / say;
    printf("\nSinfin orta bali: %.2f\n", orta);
    
    return 0;
}

```

---

## Mövzu 8: İkiölçülü Massivlər (Matrislər) (Mühazirə)

İkiölçülü massivləri bir cədvəl kimi təsəvvür edə bilərsiniz. Onların həm sətirləri, həm də sütunları olur.

* **Elan edilməsi:** `int matris[sətir][sütun];`
* **Müraciət:** Elementə çatmaq üçün hər iki indeksi qeyd etməliyik: `matris[0][1]` (birinci sətir, ikinci sütun).
* **İşləmə mexanizmi:** İkiölçülü massivlərlə işləmək üçün **iç-içə (nested) dövrlər** mütləqdir.

---

### Sual 101: 2D massivdə (matrisdə) ən böyük elementi tapın.

**İzah:** İlk elementi `max` qəbul edirik və bütün digər elementlərlə müqayisə edirik.

```c
#include <stdio.h>

int main() {
    int matris[2][3] = { {15, 22, 8}, {45, 12, 33} };
    int max = matris[0][0];
    
    for(int i = 0; i < 2; i++) {         // Setirler ucun
        for(int j = 0; j < 3; j++) {     // Sutunlar ucun
            if(matris[i][j] > max) {
                max = matris[i][j];
            }
        }
    }
    
    printf("Matrisdeki en boyuk element: %d\n", max);
    return 0;
}

```

---

### Sual 99: 3x3 matrisin əsas diaqonal elementlərini toplayın.

**İzah:** Əsas diaqonal elementləri sətir və sütun indeksləri bərabər olan elementlərdir: `(0,0), (1,1), (2,2)`.

```c
#include <stdio.h>

int main() {
    int matris[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int cem = 0;
    
    for(int i = 0; i < 3; i++) {
        cem += matris[i][i]; // i ve j beraber olduğu üçün tek dövr kifayətdir
    }
    
    printf("Esas diaqonal elementlerinin cemi: %d\n", cem);
    return 0;
}

```

---
