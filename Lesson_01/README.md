```markdown
# 🎓 C Proqramlaşdırma Dili: Mühazirə 1

**Universitet:** Qərbi Kaspi Universiteti
**Müəllim:** Leyla Məmmədova
**Fənn:** C proqramlaşdırma dili

---

## 📖 1. C Dilinin İcmalı və Tarixi

### ⏳ Tarixi Kontekst
* **1972-ci il:** Dennis Ritchie tərəfindən Bell Laboratories-də yaradılmışdır.
* **Məqsəd:** UNIX əməliyyat sistemini yazmaq üçün inkişaf etdirilmişdir.
* **Sələf:** B dili (Ken Thompson tərəfindən yaradılmış).
* **Təsir:** Bir çox müasir dillərin əsasıdır (C++, Java, C#, Python).

### ✨ Niyə C?
* **Effektiv:** Maşın koduna yaxın, yüksək performans.
* **Portativ:** Müxtəlif platformalarda işləyir.
* **Güclü:** Sistem səviyyəli proqramlaşdırmaya imkan verir.
* **Sadə:** Az sayda açar sözlər (32 ədəd).

---

## 🛠 2. Əsas Xüsusiyyətlər və Tətbiq Sahələri

### 🚀 Əsas Xüsusiyyətlər
1. **Strukturlu dil:** Modul və təşkil olunmuş kod.
2. **Aşağı səviyyəli xüsusiyyətlər:** Göstəricilər, bit manipulyasiyası.
3. **Zəngin kitabxana:** Standart C kitabxanası (libc).
4. **Orta səviyyə dil:** Yüksək və aşağı səviyyə arasında körpü.

### 📂 Tətbiq Sahələri
* **Sistem Proqramlaşdırma:** Linux, Windows kernel, Kompilyatorlar.
* **Embedded Sistemlər:** Mikrokontrollerlər (Arduino, ARM), IoT cihazları, Avtomobil sistemləri.
* **Oyun Proqramlaşdırma:** Oyun mühərrikləri, Fizika simulyasiyaları.
* **Digər:** Verilənlər bazası (MySQL, PostgreSQL), Şəbəkə proqramları.

---

## 💻 3. İlk C Proqramı: Salam Dünya!

```c
#include <stdio.h>

int main() {
    printf("Salam Dünya!\n");
    return 0;
}

```

### 🔍 Kodun İzahı:

* `#include <stdio.h>`: Preprocessor direktivi, `printf()` üçün lazımdır.
* `int main()`: Proqramın başlanğıc nöqtəsi.
* `\n`: Yeni sətir simvolu.
* `return 0;`: Uğurlu icra kodu.

---

## ⚙️ 4. Kompilyasiya Prosesi

C proqramının icra oluna bilən fayla çevrilməsi 4 mərhələdən ibarətdir:

1. **Önişləmə (Preprocessing):** Header faylları daxil edilir, şərhlər silinir.
2. **Kompilyasiya (Compilation):** C kodu assembly dilinə çevrilir.
3. **Assemblə etmə (Assembly):** Assembly kodu maşın koduna (object code) çevrilir.
4. **Linkerləmə (Linking):** Object faylları birləşdirilir və icra oluna bilən fayl yaradılır.

---

## 🐞 5. Debug Alətləri

* **GDB (GNU Debugger):** Proqramı addım-addım izləmək və xətaları tapmaq üçün istifadə olunur.
* **Valgrind:** Yaddaş sızmalarını aşkar etmək üçün (Linux).

```
```
