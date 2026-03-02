# C Proqramlaşdırma: Laboratoriya İşləri 💻

Bu repozitoriya **Western Caspian University** tələbələri üçün C proqramlaşdırma dilinin əsaslarını öyrənmək məqsədilə yaradılmışdır. Burada siz real kompilyasiya prosesini və terminal əmrlərini öyrənəcəksiniz.

---

**Müəllim:** Leyla Məmmədova

**Kafedra:** İnformasiya Texnologiyaları

---

### MATERIAL
** [C proqramlaşdırma](https://drive.google.com/file/d/1CMFoo4uMT4gIDwnkr4HZhUvuTWceTDX1/view?usp=sharing)

---

## ⚠️ Tez-tez Rastlaşan Xətalar və Həlləri

Proqramlaşdırmaya yeni başlayanda xətalarla qarşılaşmaq tamamilə normaldır. Əsas olan terminaldakı xəta mesajını düzgün oxumaqdır.

### 1. Unudulmuş Nöqtəli Vergül (`;`)

**Xəta mesajı:** `error: expected ';' before '...'`

* **Səbəb:** C dilində hər bir əmrin sonu mütləq `;` ilə bitməlidir.
* **Həll:** Xəta göstərilən sətirdən bir əvvəlki sətrin sonuna nöqtəli vergül əlavə edin.

### 2. Kitabxananın Unudulması (`#include`)

**Xəta mesajı:** `warning: implicit declaration of function 'printf'`

* **Səbəb:** `printf` və ya `scanf` istifadə etmisiniz, lakin yuxarıda `#include <stdio.h>` yazmamısınız.
* **Həll:** Faylın ən üstünə standart giriş-çıxış kitabxanasını əlavə edin.

### 3. Kompilyasiya Zamanı "No such file" Xətası

**Xəta mesajı:** `fatal error: ders1.c: No such file or directory`

* **Səbəb:** Terminalda yazdığınız fayl adı ilə qovluqdakı fayl adı üst-üstə düşmür və ya səhv qovluqdasınız.
* **Həll:** `ls` əmri ilə fayllarınızın adını yoxlayın və adı hərfi-hərfinə düzgün yazın.

### 4. Bağlanmamış Mörtərizələr `{ }`

**Xəta mesajı:** `error: expected '}' at end of input`

* **Səbəb:** `main` funksiyasının və ya bir şərt blokunun açılan `{` mörtərizəsini bağlamağı unutmusunuz.
* **Həll:** Hər açılan mörtərizənin mütləq bir qarşılığı olduğunu yoxlayın.

---

## 💡 Qızıl Qayda: "Compile Early, Compile Often"

Kodu 50 sətir birdən yazıb sonra kompilyasiya etməyin. Hər 2-3 sətirdən bir yoxlayın ki, xətanın harada olduğunu dərhal biləsiniz.

---

## 📌 Proqramçının "Yaddaş Kitabçası"

### 1. `scanf`ilə Məlumat Girişi (Diqqətli olun!)

İstifadəçidən məlumat alarkən C dili bizdən dəyişənin yaddaşdakı **ünvanını** istəyir. Buna görə də dəyişən adının önünə mütləq **`&` ampersand** işarəsi qoyulmalıdır.

* **Düzgün:** `scanf("%d", &yas);` — "Yaşı oxu və `yas` dəyişəninin ünvanına yaz."
* **Səhv:** `scanf("%d", yas);` — Bu proqramın işini dərhal dayandırmasına (Segmentaton fault) səbəb olacaq.

### 2. Dəyişən Adlandırma Qaydaları (Clean Code)

Dəyişənlərə ad verərkən bu qızıl qaydalara əməl etmək proqramın oxunaqlılığını artırır:

* ✅ **İcazə verilir:** Kiçik və böyük hərflər (`a-z`, `A-Z`), rəqəmlər (`0-9`) və alt xətt (`_`).
* ❌ **Rəqəmlə başlamaq olmaz:** `int 1_eded;` (Səhv) ➡️ `int eded_1;` (Düzgün).
* ❌ **Boşluq istifadə etmək olmaz:** `int ev qiymeti;` (Səhv) ➡️ `int ev_qiymeti;` və ya `int evQiymeti;` (Düzgün).
* ❌ **Açar sözlərdən istifadə etməyin:** `int return;` və ya `int if;` adlarından istifadə etmək olmaz.

### 3. Format Seçiciləri (Placeholder) Cheat Sheet

Məlumatları daxil edərkən və ya çap edərkən düzgün simvoldan istifadə etdiyinizə əmin olun:

| Tip | Seçici | Təsviri |
| --- | --- | --- |
| `int` | `%d` və ya `%i` | Tam ədədlər üçün |
| `float` | `%f` | Onluq ədədlər üçün |
| `double` | `%lf` | Daha böyük onluq ədədlər üçün |
| `char` | `%c` | Tək bir simvol üçün |
| `char[]` | `%s` | Sözlər (string) üçün |

---

## 🎓 GitHub Classroom ilə Tapşırıqların Təhvili

Bu kursda tapşırıqlar **GitHub Classroom** vasitəsilə idarə olunur. Bu sistem sizin kod yazma bacarığınızı real iş mühitinə uyğun şəkildə inkişaf etdirəcək.

### 1. Tapşırığı Qəbul Edin

* Müəllim tərəfindən paylaşılan **"Assignment Link"**ə klikləyin.
* **"Accept this assignment"** düyməsini sıxın.
* GitHub avtomatik olaraq sizin adınızla başlayan yeni bir repozitoriya yaradacaq (Məsələn: `tapshiriq-1-LeylaM-85`).

### 2. Kodun Yazılması və Təqdim Edilməsi 
* Repozitoriyaya giriş: Sizin üçün yaradılmış şəxsi repozitoriyanıza daxil olun.

* Redaktor seçimi: "Select an editor" seçilmədiyi üçün kodu bir neçə üsulla yaza bilərsiniz:

* Brauzerdə (Codespaces): Yaşıl "<> Code" düyməsinə klikləyin, Codespaces tabına keçin və "Create codespace on main" seçərək onlayn mühiti özünüz yaradın.

* Lokalda: Kodu öz kompyuterinizdəki proqramda (VS Code, Dev-C++ və s.) yazıb, sonra faylı GitHub-a yükləyin (Upload).

* Yoxlama: Yazdığınız C kodunun düzgün işlədiyindən əmin olun (məsələn, gcc ilə kompilyasiya edərək).


### 3. Tapşırığın Göndərilməsi (Submit)

* GitHub Classroom-da xüsusi "Göndər" düyməsi yoxdur. Sizin etdiyiniz hər bir Commit əməliyyatı avtomatik olaraq müəllim tərəfindən görünür.

* Əgər brauzerdə (GitHub saytında) işləyirsinizsə: Kodunuzu yazıb bitirdikdən sonra sağ üst küncdəki "Commit changes..." düyməsini sıxın və açılan pəncərədə təsdiqləyin.

* Əgər VS Code və ya Codespaces-də işləyirsinizsə:

* Sol menyuda Source Control (göy rəqəm işarəsi olan bölmə) hissəsinə keçin.

* Mesaj hissəsinə "Tapşırıq tamamlandı" yazın.

* Commit düyməsini sıxın və sonra Sync Changes (və ya Push) edərək kodunuzu serverə göndərin.

### 4. Qiymətləndirmə və Rəylər

* Mən sizin kodunuza baxdıqdan sonra, GitHub-da **"Pull Requests"** və ya **"Feedback"** bölməsində rəylərimi qeyd edəcəyəm.

---
