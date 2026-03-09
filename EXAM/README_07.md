**Strukturlar (Structures)** və **Fayllarla İş (File Handling)** 

---

## Mövzu 11: Strukturlar - `struct` (Mühazirə)

Massivlər eyni tipli məlumatları (məsələn, ancaq tam ədədlər) saxlayırdı. Amma bir tələbə haqqında məlumat yığmaq istəsək, bizə həm `char` (adı), həm `int` (yaşı), həm də `float` (balı) lazımdır. **Strukturlar** fərqli tipli məlumatları bir ad altında birləşdirən "şablonlardır".

* **Təyini:** `struct Telebe { char ad[20]; int yas; float bal; };`
* **Müraciət:** Strukturun daxilindəki elementlərə nöqtə (`.`) operatoru ilə müraciət edilir.
* **Pointer ilə müraciət:** Əgər struktur bir pointerdirsə, nöqtə yerinə ox (`->`) işarəsi istifadə olunur.

---

### Sual 147: "Person" strukturu (ad, yaş) yaradın və məlumatları daxil edin.

**İzah:** `Person` adlı yeni bir tip yaradırıq və onun daxilində fərqli dəyişənlər saxlayırıq.

```c
#include <stdio.h>

struct Person {
    char ad[30];
    int yas;
};

int main() {
    struct Person p1;

    printf("Adinizi daxil edin: ");
    scanf("%s", p1.ad);
    printf("Yasinizi daxil edin: ");
    scanf("%d", &p1.yas);

    printf("\nMelumatlar: Ad - %s, Yas - %d\n", p1.ad, p1.yas);
    return 0;
}

```

---

### Sual 111: Kitab ID-si ilə axtarış edən funksiya (Struct + Pointer).

**İzah:** Burada biz struktur massivini funksiyaya pointer olaraq göndəririk və axtarış edirik.

```c
#include <stdio.h>

struct Book {
    char title[50];
    int id;
};

// searchBook funksiyasi pointer qebul edir
void searchBook(struct Book *books, int size, int targetID) {
    for (int i = 0; i < size; i++) {
        if ((books + i)->id == targetID) { // Ox operatoru evezine (books+i)->id
            printf("Kitab tapildi: %s\n", (books + i)->title);
            return;
        }
    }
    printf("Kitab tapilmadi.\n");
}

int main() {
    struct Book kitabxana[2] = {{"C Proqramlasdirma", 101}, {"Python Elmi", 102}};
    searchBook(kitabxana, 2, 102);
    return 0;
}

```

---

## Mövzu 12: Fayllarla İş - `File Handling` (Mühazirə)

Proqramı bağladıqda bütün dəyişənlər (RAM-dan) silinir. Məlumatları qalıcı saxlamaq üçün onları kompüterin yaddaşındakı (Hard Disk) fayllara yazmalıyıq.

* **FILE pointeri:** Fayllarla işləmək üçün `FILE *fp;` tipində göstərici lazımdır.
* **Rejimlər:** `"w"` (yazmaq - file yoxdursa yaradır, varsa içini silir), `"r"` (oxumaq), `"a"` (əlavə etmək).
* **Funksiyalar:** `fopen()` (açmaq), `fclose()` (bağlamaq), `fprintf()` (fayla yazmaq), `fscanf()` (fayldan oxumaq).

---

### Sual 149: "example.txt" faylına sətir yazmaq və sonra oxumaq.

**İzah:** Əvvəlcə faylı yaradırıq, sonra isə həmin faylı yenidən açıb içindəkiləri ekrana çap edirik.

```c
#include <stdio.h>

int main() {
    FILE *fp;
    char metn[100];

    // 1. Fayla yazma
    fp = fopen("example.txt", "w");
    if (fp == NULL) return 1;
    fprintf(fp, "Salam, bu metn fayla yazildi.");
    fclose(fp);

    // 2. Fayldan oxuma
    fp = fopen("example.txt", "r");
    if (fp == NULL) return 1;
    
    // fgets butun setri oxuyur
    fgets(metn, 100, fp);
    printf("Fayldan oxunan metn: %s\n", metn);
    
    fclose(fp);
    return 0;
}

```

---

### Sual 138: Fayldakı simvol və sətir sayını hesablayan proqram.

**İzah:** Faylı simvol-simvol oxuyuruq (`fgetc`). Hər simvolda sayğacı artırırıq, hər `\n` (yeni sətir) gördükdə isə sətir sayını artırırıq.

```c
#include <stdio.h>

int main() {
    FILE *fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Fayl acilmadi!\n");
        return 1;
    }

    int simvol_sayi = 0, setir_sayi = 1;
    char ch;

    while ((ch = fgetc(fp)) != EOF) { // EOF - End Of File (Faylin sonu)
        simvol_sayi++;
        if (ch == '\n') setir_sayi++;
    }

    printf("Simvol sayi: %d\n", simvol_sayi);
    printf("Setir sayi: %d\n", setir_sayi);

    fclose(fp);
    return 0;
}

```

---

### Sual 150: `#ifdef DEBUG` istifadəsi (Preprocessor).

**İzah:** Bu direktiv proqramı "təmir" (debug) edərkən köməkçi mesajları görmək üçün istifadə olunur. Əgər ən başda `DEBUG` təyin olunubsa, həmin kod işləyir.

```c
#include <stdio.h>
#define DEBUG // Bu setri silsek, debug mesaji gorunmeyecek

int main() {
    int x = 10;
    
    #ifdef DEBUG
        printf("[DEBUG]: x-in hazirki deyeri: %d\n", x);
    #endif

    printf("Proqram isleyir...\n");
    return 0;
}

```

---
