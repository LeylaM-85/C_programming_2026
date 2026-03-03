# 📘 Mühazirə 2: Məlumat Tipləri, Dəyişənlər və Sabitlər 

Bu mühazirədə C dilində məlumatların yaddaşda necə saxlanılması, format spesifikatorları, yaddaş optimallaşdırması və tip dönüşümləri mövzularını əhatə edəcəyik.

---
## Dərs və Ev tapşırığı Linkləri

* **[Cprog_dərs_02 material]**(https://drive.google.com/drive/folders/1NP0r29H28BjysdsI-hsgI6MEFBHEAJRr?usp=drive_link)

* **[Ev tapşırığı_DƏRS_02]**(https://classroom.github.com/a/NE5sHsSV)
  
---

## 1. Məlumat Tipləri və Yaddaş Strukturu

C dilində məlumat tipləri yaddaşda müəyyən həcm tutur və müəyyən diapazonlarda dəyərlər saxlaya bilir.

**char -> short -> int -> long -> float -> double**

### 1.1 Format Spesifikatorları (Məntiqlə Anlama)

| Format | Uzun Adı (Məntiqlə) | Aid Olduğu Tip |
| --- | --- | --- |
| `%d` | **D**ecimal | `int` |
| `%c` | **C**haracter | `char` |
| `%f` | **F**loat | `float` |
| `%u` | **U**nsigned | `unsigned int` |
| `%ld` | **L**ong **D**ecimal | `long` |
| `%lf` | **L**ong **F**loat | `double` |
| `%zu` | **Z**ize **U**nsigned | `size_t` (sizeof nəticəsi) |

### 1.2 Əsas Məlumat Tipləri Cədvəli

| Tip | Ölçü (bayt) | Format | Diapazon |
| --- | --- | --- | --- |
| `char` | 1 | `%c` | -128 to 127 |
| `unsigned char` | 1 | `%c` | 0 to 255 |
| `short` | 2 | `%hd` | -32,768 to 32,767 |
| `int` | 4 | `%d` | ~ ±2.1 Milyard |
| `unsigned int` | 4 | `%u` | 0 to ~4.2 Milyard |
| `float` | 4 | `%f` | ~7 rəqəm dəqiqlik |
| `double` | 8 | `%lf` | ~15 rəqəm dəqiqlik |
| `long long` | 8 | `%lld` | -(2^63) to (2^63)-1 |

### 1.3 `sizeof()` Operatoru və `%zu`

`sizeof` operatoru `size_t` tipində dəyər qaytarır. Bu, yaddaş ölçüsü üçün nəzərdə tutulmuş işarəsiz tam ədəd tipidir. Standart çap formatı `%zu`-dur.

```c
#include <stdio.h>

int main() {
    printf("char: %zu bayt\n", sizeof(char));
    printf("int: %zu bayt\n", sizeof(int));
    printf("double: %zu bayt\n", sizeof(double));
    return 0;
}

```

---

## 2. İşarəli (Signed) və İşarəsiz (Unsigned) Tiplər

* **Signed (Default):** İlk bit işarə bitidir (0: müsbət, 1: mənfi).
* **Unsigned:** Bütün bitlər dəyər üçün istifadə olunur. Mənfi ədəd almır, lakin müsbət diapazon 2 dəfə artır.

---

## 3. Sabitlər və Xüsusi Tiplər

### 3.1 `const` və `volatile`

* **`const`**: Proqram boyu dəyişdirilə bilməyən sabit dəyərlər (məsələn: `const float PI = 3.14;`).
* **`volatile`**: Kompilyatora bildirir ki, bu dəyişən xaricdən (məsələn, hardware tərəfindən) dəyişə bilər, onu optimallaşdırma.

### 3.2 `enum` - Sadalama Tipi

Kodun oxunaqlılığını artırmaq üçün istifadə olunur:

```c
enum Heftenin_Gunleri { BAZAR_ERTESI, CERSENBE_AXSAMI, CERSENBE };
enum Status { UGURLU = 0, XETA = -1, GOZLEME = 1 };

```

---

## 4. Tip Dönüşümü (Type Conversion)

* **Gizli (Implicit):** Kompilyator tərəfindən avtomatik (kiçik tipdən böyük tipə).
* **Açıq (Explicit Casting):** İstifadəçi tərəfindən məcburi: `(yeni_tip) deyer`.

```c
int a = 5, b = 2;
float netice = (float)a / b; // Nəticə: 2.50 (Casting olmasa 2.00 olardı)

```

---

## 5. Dəyişən Adlandırma və Optimallaşdırma

### 5.1 Adlandırma Qaydaları

* Rəqəmlə başlaya bilməz.
* Açar sözlər (`int`, `char`, `if`) istifadə oluna bilməz.
* **Snake Case:** `telebe_sayi` (C-də tövsiyə olunur).
* **Camel Case:** `telebeSayi`.

### 5.2 Yaddaş Effektivliyi

Həmişə lazım olan minimal tipi seçin.
**75% yaddaş qənaəti** 
* Prinsip: Lazım olan minimal tipi seçin
// Yaş üçün (0-150):
unsigned char yas;  // 1 bayt (0-255) - KİFAYƏTDİR

// Əvəzinə:
int yas;  // 4 bayt - İSRAFDIR

---
##  KODLARI TƏTBİQ EDƏK
```
#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    float netice;
    
    netice = a + b;  // a avtomatik float-a çevrilir
    printf("Nəticə: %.2f\n", netice);  // 15.50
    
    // char -> int
    char c = 'A';
    int d = c;  // ASCII dəyəri (65)
    printf("'A' ASCII: %d\n", d);
    
    return 0;
}
```
---

## 🛠 Praktik Tapşırıqlar

1. **Ölçü yoxlaması:** Bütün əsas tiplərin ölçüsünü `sizeof` ilə göstərən proqram yazın. (QEYD: yuxarıda nümunə verilib.)
2. **Dairə hesablama:** `const PI` istifadə edərək dairənin sahəsini ($S = \pi r^2$) hesablayın.
3. **Tip dönüşümü:** 22-ni 7-yə bölərək həm tam hissəni, həm də kəsr nəticəni (3.14) ekrana çıxarın.
4. **Enum tətbiqi:** İlin fəsillərini `enum` ilə yaradın və hər fəslə uyğun temperaturu çap edin.

---
# 🛠 Praktik Tapşırıqların izahlı həlləri

### 1. Məlumat Tiplərinin Ölçüsü (`sizeof`)

**Məqsəd:** Müxtəlif tiplərin yaddaşda tutduğu yeri baytlarla görmək.

**Qeyd:** `sizeof` operatoru `size_t` tipində dəyər qaytardığı üçün `%zu` formatından istifadə edirək tətbiq edin.

---

### 2. Dairənin Sahəsi və Perimetri (`const` tətbiqi)

**Məqsəd:** Dəyişdirilə bilməyən sabitlərdən (`const`) istifadə qaydasını öyrənmək.

```c
#include <stdio.h>

int main() {
    const float PI = 3.14159; // Sabit deyer
    float radius, sahe, perimetr;

    printf("Dairenin radiusunu daxil edin: ");
    scanf("%f", &radius);

    sahe = PI * radius * radius;
    perimetr = 2 * PI * radius;

    printf("Sahe: %.2f\n", sahe);
    printf("Perimetr: %.2f\n", perimetr);

    return 0;
}

```

**İzah:** `PI` dəyişəni `const` olaraq təyin edildiyi üçün proqramın heç bir yerində təsadüfən dəyişdirilə bilməz.

---

### 3. Tam və Kəsr Bölməsi (`Type Casting`)

**Məqsəd:** Tam ədədlər üzərində əməliyyat apararkən məlumat itkisinin qarşısını almaq.

```c
#include <stdio.h>

int main() {
    int a = 22;
    int b = 7;

    // Tam bölme
    int tam_netice = a / b;
    
    // Kesr netice (Açıq tip dönüşümü - Casting)
    float kesr_netice = (float)a / b;

    printf("Birinci eded: %d, İkinci eded: %d\n", a, b);
    printf("Tam bolme neticesi: %d\n", tam_netice);
    printf("Float (kesr) bolme neticesi: %.2f\n", kesr_netice);
    printf("Qaliq: %d\n", a % b);

    return 0;
}

```

**İzah:** `(float)a` yazmaqla biz kompilyatora deyirik ki, bölmə əməliyyatından əvvəl `a`-nı müvəqqəti olaraq `float` kimi qəbul etsin. Bu, nəticənin `3.00` deyil, `3.14` olmasını təmin edir.

---

### 4. İlin Fəsilləri (`enum` tətbiqi)

**Məqsəd:** Kodda rəqəmlər yerinə mənalı adlardan istifadə etmək.

```c
#include <stdio.h>

enum Fesil { YAZ, YAY, PAYIZ, QIS };

int main() {
    enum Fesil hazirki_fesil = YAY;

    printf("Fesil nomresi: %d\n", hazirki_fesil); // Yay = 1 (YAZ 0-dan baslayir)

    if (hazirki_fesil == YAY) {
        printf("Hava istidir, orta temperatur: 35°C\n");
    } else if (hazirki_fesil == QIS) {
        printf("Hava soyuqdur, orta temperatur: 5°C\n");
    }

    return 0;
}

```

**İzah:** `enum` daxilindəki elementlər susmaya görə 0-dan başlayaraq nömrələnir. Bu, kodu daha oxunaqlı edir.
