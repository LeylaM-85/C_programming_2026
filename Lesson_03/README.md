# 📘 Mühazirə 3: Giriş və Çıxış (I/O- in/out) Əməliyyatları

Bu mühazirədə C dilində məlumatların daxil edilməsi (`Input`) və ekrana çıxarılması (`Output`) üsullarını, həmçinin bu proses zamanı rast gəlinən tipik problemlərin həllini öyrənəcəyik.

---
## Dərs və Ev tapşırığı Linkləri

* **[Cprog_dərs_03 material]**(https://drive.google.com/drive/folders/1nZx7STejhg54QHV1Y4yOzIh5s1y1Ndih?usp=drive_link)

* **[Ev tapşırığı_DƏRS_03]**(https://classroom.github.com/a/70GIm9fa)
---
## 1. Standart G/Ç Funksiyaları

### 1.1 `printf()` - Formatlı Çıxış

Məlumatı müəyyən bir formatda ekrana çıxarmaq üçün istifadə olunur.

| Specifier | Tip | Nümunə |
| --- | --- | --- |
| `%d`, `%i` | `int` (Tam ədəd) | `printf("%d", 42);` |
| `%u` | `unsigned int` | `printf("%u", 100);` |
| `%f` | `float` / `double` | `printf("%f", 3.14);` |
| `%c` | `char` (Simvol) | `printf("%c", 'A');` |
| `%s` | `string` (Mətn) | `printf("%s", "salam");` |
| `%p` | `pointer` (Ünvan) | `printf("%p", &var);` |
| `%x` | `hexadecimal` (On altılıq) | `printf("%x", 255);` |
| `%%` | `%` simvolu özü | `printf("%%");` |

#### Genişlik və Dəqiqlik Ayarları:

```c
printf("%5d\n", 42);    // "   42" (5 simvol genişlik)
printf("%05d\n", 42);   // "00042" (sıfırla doldurma)
printf("%.2f\n", 3.1415); // "3.14" (nöqtədən sonra 2 rəqəm)

```

---

### 1.2 `scanf()` - Formatlı Giriş

İstifadəçidən məlumat almaq üçün istifadə olunur. **Vacib:** Dəyişənin ünvanını göstərmək üçün `&` operatoru mütləqdir.

#### Tipik Problemlər və Həllər:

1. **Simvol Oxuma Problemi:** Əvvəlki girişdən qalan `Enter` (`\n`) simvolunun oxunması.
* **Həll:** `scanf(" %c", &herf);` (Formatdan əvvəl **boşluq** qoymaq).


2. **Sətir Overflow:** Massiv ölçüsündən artıq mətn daxil edilməsi.
* **Həll:** `scanf("%9s", ad);` (Maksimum 9 simvol oxu).



---

### 1.3 `fgets()` - Təhlükəsiz Sətir Oxuma

`scanf("%s", ...)`-dan fərqli olaraq boşluqları da oxuyur və yaddaş daşmasının qarşısını alır.

```c
char ad[50];
fgets(ad, sizeof(ad), stdin); // Boşluqlu mətni təhlükəsiz oxuyur
ad[strcspn(ad, "\n")] = '\0'; // Sondakı Enter simvolunu təmizləyir

```

#### Niyə `<string.h>` lazımdır?

C-də mətnlər massiv olduğu üçün onlarla birbaşa riyazi əməliyyat aparmaq olmur. Bu kitabxana bizə lazımdır:
1.	strcspn() ("String Complement Span"):
o	Mətnin içində müəyyən bir simvolu (məsələn, \n) axtarıb onun yerini (indeksini) tapmaq üçün. fgets() ilə gələn "Enter"i silmək üçün bu funksiya mütləqdir.
2.	strlen() (String Length):
o	Mətnin neçə simvoldan ibarət olduğunu (uzunluğunu) hesablamaq üçün.
o	Məsələn: "Salam" -> 5.
3.	strcpy() (String Copy):
o	Bir mətni digərinə kopyalamaq üçün. C-də ad2 = ad1 yaza bilməzsiniz, bunun yerinə strcpy(ad2, ad1) yazmalısınız.
4.	strcmp() (String Compare):
o	İki mətnin bir-birinə bərabər olub-olmadığını yoxlamaq üçün. if (ad1 == ad2) yazmaq C-də səhv nəticə verər, bunun üçün strcmp funksiyası lazımdır.
---

### 1.4 `puts()` və `putchar()`

* **`puts()`**: Mətni çap edir və avtomatik yeni sətrə (`\n`) keçir.
* **`putchar()`**: Ekrana yalnız tək bir simvol çıxarır.

```c
puts("Salam!");     // printf("Salam!\n"); ilə eynidir
putchar('A');       // 'A' hərfini çap edir

```

---

### 1.5 `getchar()` - Tək Simvol Girişi

İstifadəçidən yalnız bir simvol qəbul etmək üçün ən sadə yoldur.

```c
char c;
printf("Hərf daxil edin: ");
c = getchar();

```

---

## 🛠 Praktik Tapşırıqlar

1. **Formatlı Çıxış:** İstifadəçidən adını (`fgets`), yaşını (`int`) və orta qiymətini (`float`) soruşan və bunları səliqəli cədvəl formatında ekrana çıxaran proqram yazın.
2. **Simvol Analizi:** `getchar()` ilə bir simvol qəbul edin və onun ASCII dəyərini həm onluq (`%d`), həm də on altılıq (`%x`) formatda çap edin.
3. **Təhlükəsiz Giriş:** 10 simvolluk bir massiv yaradın və `scanf("%s")` yerinə `fgets()` istifadə edərək adın daxil edilməsini təmin edin. Sondakı `\n` simvolunu silməyi unutmayın.

---

# 🛠 Praktik Tapşırıqların Həlləri

### Tapşırıq 1: Format Spesifikatorları (Detallı Çap)

**Məqsəd:** Ekrana çıxarılan məlumatın görünüşünü (padding, alignment, precision) idarə etmək.

```c
#include <stdio.h>

int main() {
    int eded = 42;
    float pi = 3.14159;
    char mesaj[] = "C Proqramlasdirma";
    int hex_eded = 255;

    // 1. Tam ədəd: 5 simvol genişlik, sıfırla doldurma
    printf("1. Tam eded: %05d\n", eded);

    // 2. Float: 2 onluq rəqəm (yuvarlaqlaşdırma ilə)
    printf("2. Float: %.2f\n", pi);

    // 3. Sətir: 20 simvol genişlik, sola düzləşdirmə
    printf("3. Setir: [%-20s]\n", mesaj);

    // 4. Hexadecimal: 255 ədədini hex-də
    printf("4. Hex: %X\n", hex_eded);

    return 0;
}

```

**İzah:** * `%05d` — əgər ədəd 5 rəqəmdən azdırsa, önünü sıfırlarla doldurur.

* `%-20s` — mətni 20 simvolluq sahədə sola söykəyir (sağ tərəfi boşluqla doldurur).

---

### Tapşırıq 2: Təhlükəsiz Giriş Sistemi

**Məqsəd:** `fgets()` istifadə edərək boşluqlu mətnləri oxumaq və `scanf` ilə rəqəm daxil edilərkən yaranan problemləri idarə etmək.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char tam_ad[50];
    int yas;
    char email[50];

    // 1. Tam adın oxunması (Boşluqlarla birgə)
    printf("Tam adinizi daxil edin: ");
    fgets(tam_ad, sizeof(tam_ad), stdin);
    tam_ad[strcspn(tam_ad, "\n")] = '\0'; // Enter-i silirik

    // 2. Yaşın oxunması və yoxlanılması
    printf("Yasinizi daxil edin (0-150): ");
    if (scanf("%d", &yas) != 1) {
        printf("Xeta: Zehmet olmasa reqem daxil edin!\n");
        return 1;
    }
    
    if (yas < 0 || yas > 150) {
        printf("Xeta: Yas diapazonu duzgun deyil!\n");
        return 1;
    }

    // scanf-den sonra bufferde qalan '\n' simvolunu temizleyirik
    getchar(); 

    // 3. Email oxunması
    printf("Email unvaninizi daxil edin: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0';

    // Neticelerin gosterilmesi
    printf("\n--- Qeydiyyat Melumatlari ---\n");
    printf("Ad: %s\n", tam_ad);
    printf("Yas: %d\n", yas);
    printf("Email: %s\n", email);

    return 0;
}

```

**İzah:**

1. **`strcspn`**: `fgets` ilə gələn "Enter" simvolunu silmək üçün mütləqdir.
2. **`scanf` yoxlaması**: `scanf` funksiyası uğurla oxuduğu elementlərin sayını qaytarır. Əgər istifadəçi rəqəm yerinə hərf yazsa, `scanf("%d")` **1** qaytarmayacaq və biz bunu xəta kimi tuta biləcəyik.
3. **`getchar()`**: `scanf`-dən sonra `fgets` işlədəcəyiksə, yaddaşda (buffer) qalan `Enter` simvolunu təmizləmək üçün arada bir `getchar()` yazmaq vacibdir.
