# C Proqramlaşdırma: Laboratoriya İşləri 💻

Bu repozitoriya **Western Caspian University** tələbələri üçün C proqramlaşdırma dilinin əsaslarını öyrənmək məqsədilə yaradılmışdır. Burada siz real kompilyasiya prosesini və terminal əmrlərini öyrənəcəksiniz.

## 🛠️ Mühitin Qurulması (GitHub Codespaces)

Bu kursda biz heç bir əlavə proqram yükləmədən **GitHub Codespaces** mühitindən istifadə edirik. Burada `gcc` (GNU Compiler Collection) artıq quraşdırılmış vəziyyətdədir.

## 🚀 Kodun Yazılması və İcra Edilməsi

C dilində yazdığınız bir kodun proqram kimi işləməsi üçün iki əsas mərhələdən keçməlidir: **Kompilyasiya** və **İcra**.

### 1. Terminalı Açın

Github-a daxil olun
GitHub Codespaces - yaşıl rəngli <>Code düyməsinə klikləyin ordan isə - "Create codespace on main" - düyməsinə kliklədikdə, GitHub sizin üçün buludda xüsusi bir virtual mühit yaradır. Bu, kompüterinizə heç bir əlavə proqram (məsələn, mürəkkəb compiler-lər və ya IDE-lər) quraşdırmadan birbaşa brauzer daxilində kod yazmağa və onu işə salmağa imkan verir.

Hazırlanma: Bir neçə saniyə ərzində mühit qurulacaq.

Redaktor: Qarşınızda Visual Studio Code-un brauzer versiyası açılacaq.

İş sahəsi: Sol tərəfdəki fayl siyahısında qovluqları görəcəksiniz.

Kodlama:  .c faylını açıb və ya yaradıb kodunuzu yaza və terminal vasitəsilə icra edə bilərsiniz.

1. Mövcud fayllar üzərində işləmək
Şəkildə gördüyünüz qovluqların içində artıq .c faylları varsa, sadəcə sol tərəfdəki siyahıdan həmin faylın üzərinə klikləməyiniz kifayətdir. Fayl mərkəzi ekranda açılacaq və siz kodu redaktə edə biləcəksiniz.

2. Yeni fayl yaratmaq
Əgər tamamilə yeni bir kod yazmaq istəyirsinizsə, bunu birbaşa brauzer daxilində edə bilərsiniz:

Sol paneldə boş bir yerə sağ düymə ilə klikləyin və ya kod yazdiginiz qovluğu açaraq onun daxilində sağ düymə ilə klikləyin

"New File" seçin.

Fayla ad verin (məsələn: test.c). Vacib məqam: Faylın sonuna mütləq .c artırın ki, sistem onun C dili olduğunu başa düşsün.

Klaviaturada `Ctrl` + ``` (tab düyməsinin üstü) düymələrini sıxaraq terminal pəncərəsini açın.

### 2. Kompilyasiya (Compilation)

Yazdığınız `.c` uzantılı faylı kompüterin başa düşəcəyi maşın dilinə çevirmək üçün aşağıdakı əmri yazın:

```bash
gcc ders1.c -o ders1

```

* `gcc`: Kompilyator proqramın adıdır.
* `ders1.c`: Sizin yazdığınız kod faylı.
* `-o ders1`: Yaradılacaq icra oluna bilən (executable) faylın adı.

### 3. Proqramı İşlətmək (Execution)

Kompilyasiya uğurlu bitdikdən sonra proqramı işlətmək üçün terminala bunu yazın:

```bash
./ders1

```

---

## 📋 Faydalı Terminal Əmrləri

| Əmr | Təsviri |
| --- | --- |
| `ls` | Qovluqdakı faylların siyahısını göstərir. |
| `cd qovluq_adi` | Göstərilən qovluğa daxil olur. |
| `clear` | Terminal ekranını təmizləyir. |
| `gcc --version` | Quraşdırılmış GCC versiyasını yoxlayır. |

---

## 📝 İlk Tapşırıq (Hello World)

Aşağıdakı kodu `salam.c` faylı yaradaraq daxilinə yazın və yuxarıdakı əmrlərlə işlədin:

```c
#include <stdio.h>

int main() {
    printf("Salam, C dunyasina xoş gelmisiniz!\n");
    return 0;
}

```

---

**Müəllim:** Leyla Məmmədova

**Kafedra:** İnformasiya Texnologiyaları

---


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

Kodu 50 sətir birdən yazıb sonra kompilyasiya etməyin. Hər 2-3 sətirdən bir `gcc` əmri ilə yoxlayın ki, xətanın harada olduğunu dərhal biləsiniz.

---


---

## 📌 Proqramçının "Yaddaş Kitabçası"

### 1. `scanf`ilə Məlumat Girişi (Diqqətli olun!)

İstifadəçidən məlumat alarkən C dili bizdən dəyişənin yaddaşdakı **ünvanını** istəyir. Buna görə də dəyişən adının önünə mütləq **`&`** işarəsi qoyulmalıdır.

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

---

---

## 🎓 GitHub Classroom ilə Tapşırıqların Təhvili

Bu kursda tapşırıqlar **GitHub Classroom** vasitəsilə idarə olunur. Bu sistem sizin kod yazma bacarığınızı real iş mühitinə uyğun şəkildə inkişaf etdirəcək.

### 1. Tapşırığı Qəbul Edin

* Müəllim tərəfindən paylaşılan **"Assignment Link"**ə klikləyin.
* **"Accept this assignment"** düyməsini sıxın.
* GitHub avtomatik olaraq sizin adınızla başlayan yeni bir repozitoriya yaradacaq (Məsələn: `tapshiriq-1-LeylaM-85`).

### 2. Kodun Yazılması (Codespaces)

* Yaradılan repozitoriyanıza daxil olun.
* Yaşıl **"<> Code"** düyməsinə klikləyib **Codespaces** bölməsindən mühiti açın.
* Kodunuzu yazın, terminalda yoxlayın (C və ya Python).

### 3. Tapşırığın Göndərilməsi (Submit)

GitHub Classroom-da tapşırığı göndərmək üçün "Göndər" düyməsi yoxdur. Sizin etdiyiniz hər bir **Commit** və **Push** əməliyyatı artıq müəllim tərəfindən görünür.

* Sol menyuda **Source Control** (üçbucaq işarəsi) bölməsinə keçin.
* Mesaj hissəsinə "Tapşırıq tamamlandı" yazın.
* **Commit** və **Sync Changes** (və ya Push) düymələrini sıxın.

### 4. Qiymətləndirmə və Rəylər

* Mən sizin kodunuza baxdıqdan sonra, GitHub-da **"Pull Requests"** və ya **"Feedback"** bölməsində rəylərimi qeyd edəcəyəm.

---
