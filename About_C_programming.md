C Proqramlaşdırmasına Giriş
1. C dilinin icmalı və tarixi
Tarixi Kontekst
•	1972-ci il: Dennis Ritchie tərəfindən Bell Laboratories-də yaradılmışdır
•	Məqsəd: UNIX əməliyyat sistemini yazmaq üçün inkişaf etdirilmişdir
•	Sələf: B dili (Ken Thompson tərəfindən yaradılmış)
•	Təsir: Bir çox müasir dillərin əsası (C++, Java, C#, Python)
Niyə C?
•	Effektiv: Maşın koduna yaxın, yüksək performans
•	Portativ: Müxtəlif platformalarda işləyir
•	Güclü: Sistem səviyyəli proqramlaşdırmaya imkan verir
•	Sadə: Az sayda açar sözlər (32 ədəd)
•	Geniş yayılmış: 50+ ildir istifadə olunur
________________________________________
2. C dilinin əsas xüsusiyyətləri və tətbiq sahələri
Əsas Xüsusiyyətlər
1.	Strukturlu dil: Modul və təşkil olunmuş kod
2.	Aşağı səviyyəli xüsusiyyətlər: Göstəricilər, bit manipulyasiyası
3.	Zəngin kitabxana: Standart C kitabxanası (libc)
4.	Genişlənə bilən: Yeni funksiyalar əlavə etmək asandır
5.	Orta səviyyə dil: Yüksək və aşağı səviyyə arasında körpü
Tətbiq Sahələri
a) Sistem Proqramlaşdırma
•	Əməliyyat sistemləri: Linux, Windows kernel
•	Device driver-lər: Aparatla əlaqə
•	Kompilyatorlar: GCC, Clang özləri C-də yazılıb
b) Embedded Sistemlər
•	Mikrokontrollerlər: Arduino, AVR, ARM
•	IoT cihazları: Smart evlər, sensorlar
•	Avtomobil sistemləri: ABS, airbag sistemləri
c) Oyun Proqramlaşdırma
•	Oyun mühərrikləri: Unreal Engine (C++)
•	Performans-kritik hissələr: Fizika simulyasiyaları
•	Real-time sistemlər: Düşük latensi tələb edən tətbiqlər
d) Digər Sahələr
•	Verilənlər bazası: MySQL, PostgreSQL
•	Şəbəkə proqramları: TCP/IP stack
•	Elmi hesablamalar: Yüksək performanslı hesablamalar
________________________________________



Sadə "Hello World" proqramı
c
#include <stdio.h>

int main() {
    printf("Salam Dünya!\n");
    return 0;
}
Kodu dəqiq izah:
c
#include <stdio.h>
•	#include: Preprocessor direktivi
•	stdio.h: Standard Input/Output header faylı
•	Məqsəd: printf() funksiyasını istifadə etmək üçün lazımdır
c
int main() {
•	int: Funksiyanın qayıdan tipi (integer - tam ədəd)
•	main: Proqramın başlanğıc nöqtəsi, hər C proqramında olmalıdır
•	(): Parametr yoxdur (və ya void yaza bilərik)
c
    printf("Salam Dünya!\n");
•	printf: Ekrana çıxış funksiyası
•	"Salam Dünya!": Sətir literalı
•	\n: Yeni sətir simvolu (newline)
•	;: Əmrin sonu (statement terminator)
c
    return 0;
•	return: Funksiyadan çıxış
•	0: Uğurlu icra kodu (əməliyyat sisteminə)
•	Qeyri-sıfır dəyərlər xəta bildirir


c
}
