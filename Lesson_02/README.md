Mühazirə 2: Məlumat Tipləri, Dəyişənlər və Sabitlər
1. Məlumat Tiplərinin Yaddaş Strukturu
C dilində məlumat tipləri kompüterin yaddaşında müəyyən həcm tutur və müəyyən diapazonlarda dəyərlər saxlaya bilir.
1.1 Əsas Məlumat Tipləri
Tip	Ölçü (bayt)	Format	Diapazon
char	1	%c	-128 to 127
unsigned char	1	%c	0 to 255
short	2	%hd	-32,768 to 32,767
unsigned short	2	%hu	0 to 65,535
int	4	%d	-2,147,483,648 to 2,147,483,647
unsigned int	4	%u	0 to 4,294,967,295
long	4/8	%ld	platform-dependent
unsigned long	4/8	%lu	platform-dependent
long long	8	%lld	-(2^63) to (2^63)-1
float	4	%f	~7 rəqəm dəqiqlik
double	8	%lf	~15 rəqəm dəqiqlik
long double	10/16	%Lf	ən yüksək dəqiqlik
1.2 sizeof() operatoru
Məlumat tipinin ölçüsünü yoxlamaq üçün:
#include <stdio.h>

int main() {
    printf("char: %zu bayt\n", sizeof(char));
    printf("int: %zu bayt\n", sizeof(int));
    printf("float: %zu bayt\n", sizeof(float));
    printf("double: %zu bayt\n", sizeof(double));
    printf("long long: %zu bayt\n", sizeof(long long));
    
    return 0;
}
Qeyd: %zu - size_t tipi üçün format
1.3 Yaddaş təsviri
int eded = 42;

Yaddaşda:
Ünvan:   0x1000  0x1001  0x1002  0x1003
Dəyər:   00000000 00000000 00000000 00101010 (binary)
         |-------- 4 bayt (32 bit) --------|
________________________________________
2. İşarəli (signed) və İşarəsiz (unsigned) Tiplər
2.1 İşarəli Tiplər (default)
int a = -50;      // Mənfi ola bilər
short b = -1000;
char c = -128;
•	İlk bit işarə biti (0 = müsbət, 1 = mənfi)
•	İki komplement sistemi istifadə olunur
2.2 İşarəsiz Tiplər
unsigned int a = 50;        // Yalnız müsbət
unsigned short b = 1000;
unsigned char c = 255;
•	Bütün bitlər dəyər üçün istifadə olunur
•	İki dəfə böyük müsbət diapazon
2.3 Fərq nümunəsi
#include <stdio.h>

int main() {
    signed char a = -1;
    unsigned char b = 255;
    
    printf("signed: %d\n", a);      // -1
    printf("unsigned: %u\n", b);    // 255
    
    // Overflow nümunəsi
    unsigned char c = 255;
    c = c + 1;
    printf("overflow: %u\n", c);    // 0 (dövr edir)
    
    return 0;
}
________________________________________
3. const, volatile və enum
3.1 const - Sabit dəyərlər
Sintaksis:
const tip ad = dəyər;
Nümunələr:
#include <stdio.h>

int main() {
    const int MAX_TELEBE = 100;
    const float PI = 3.14159;
    const char YENİ_SETIR = '\n';
    
    printf("Maksimum tələbə: %d\n", MAX_TELEBE);
    printf("PI sabiti: %.5f\n", PI);
    
    // MAX_TELEBE = 200;  // XƏTA! Dəyişdirmək olmaz
    
    return 0;
}
const üstünlükləri:
•	Təsadüfi dəyişiklikdən qoruyur
•	Oxunaqlılığı artırır
•	Kompilyator optimallaşdırması
3.2 volatile - Dəyişən dəyərlər
Hardware ilə işləyərkən istifadə olunur:
volatile int sensor_deyer;  // Hardware tərəfindən dəyişə bilər
volatile nə vaxt istifadə olunur:
•	Interrupt handler-lərdə
•	Memory-mapped I/O
•	Multi-threading
Nümunə:
volatile int hardware_flag = 0;

while (hardware_flag == 0) {
    // Gözlə
}
// Kompilyator bu döngünü optimallaşdırmaz
3.3 enum - Sadalama tipi
Sintaksis:
enum ad {
    DƏYƏR1,
    DƏYƏR2,
    DƏYƏR3
};
Nümunə 1: Həftənin günləri
#include <stdio.h>

enum Heftenin_Gunleri {
    BAZAR_ERTESI,    // 0
    CERSENBE_AXSAMI, // 1
    CERSENBE,        // 2
    CUME_AXSAMI,     // 3
    CUME,            // 4
    SENBE,           // 5
    BAZAR            // 6
};

int main() {
    enum Heftenin_Gunleri gun = CERSENBE;
    
    if (gun == CERSENBE) {
        printf("Bu gün çərşənbədir\n");
    }
    
    return 0;
}
Nümunə 2: Xüsusi dəyərlər
enum Reng {
    QIRMIZI = 1,
    YASIL = 2,
    MAVI = 4,
    SARI = 8
};

enum Status {
    UGURLU = 0,
    XETA = -1,
    GOZLEME = 1
};
________________________________________
4. Tip Dönüşümü (Type Conversion)
4.1 Gizli Tip Dönüşümü (Implicit)
Kompilyator avtomatik çevirir:
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
Promotion qaydası:
char -> short -> int -> long -> float -> double
Diqqət! Məlumat itkisi:
float x = 9.99;
int y = x;  // y = 9 (kəsr hissəsi itirilir)
4.2 Açıq Tip Dönüşümü (Explicit Casting)
Sintaksis:
(yeni_tip) dəyər
Nümunələr:
#include <stdio.h>

int main() {
    // float -> int
    float pi = 3.14159;
    int tam_pi = (int)pi;
    printf("Tam hissə: %d\n", tam_pi);  // 3
    
    // int / int -> float
    int a = 5, b = 2;
    float bolme = (float)a / b;
    printf("Bölmə: %.2f\n", bolme);  // 2.50
    
    // Casting olmasa:
    int netice = a / b;
    printf("Casting yoxdur: %d\n", netice);  // 2
    
    return 0;
}
Praktik nümunə: Faiz hesablama
int duzgun = 18;
int cemm = 20;

float faiz = (float)duzgun / cemm * 100;
printf("Faiz: %.2f%%\n", faiz);  // 90.00%
________________________________________
5. Dəyişən Adlandırma və Yaddaş Optimallaşdırması
5.1 Adlandırma Qaydaları
Qanunlar:
•	Hərflər, rəqəmlər və alt xətt (_) istifadə olun
•	Rəqəmlə başlaya bilməz
•	Açar sözlər istifadə oluna bilməz
•	Case-sensitive (böyük-kiçik hərf fərqi var)
Düzgün:
int yas;
int telebe_sayi;
int MAX_DEYAR;
int _temp;
int sayi1, sayi2;
Səhv:
int 1telebe;   // Rəqəmlə başlayır
int int;       // Açar söz
int telebe-sayi;  // Tire (-) istifadə oluna bilməz

5.2 Adlandırma Konvensiyaları
Snake Case (C-də ən çox istifadə olunur):
int telebe_sayi;
float orta_qiymet;
const int MAX_EDED;
Camel Case:
int telebeSayi;
float ortaQiymet;
Macar Notasiyası:
int iTelebeSayi;      // i - integer
float fOrtaQiymet;    // f - float
char* szAd;           // sz - string zero-terminated

5.3 Yaddaş-Effektiv Məlumat Tipləri
Prinsip: Lazım olan minimal tipi seçin
// Yaş üçün (0-150):
unsigned char yas;  // 1 bayt (0-255) - KİFAYƏTDİR

// Əvəzinə:
int yas;  // 4 bayt - İSRAFDIR
Praktik nümunələr:
// Bayraq (flag) - yalnız 0 və ya 1:
unsigned char aktiv;  // 1 bayt

// Kiçik saylar:
short telebe_sayi;    // 2 bayt (-32K to +32K)

// Böyük saylar:
long long əhali;      // 8 bayt

// Pul məbləği (dəqiq hesablama):
double mebleğ;        // 8 bayt, dəqiq
5.4 Struktur Hizalanması (Alignment)
Yaddaş optimallaşdırması:
// Effektiv olmayan:
struct Telebe1 {
    char ad;        // 1 bayt + 3 padding
    int yas;        // 4 bayt
    char kurs;      // 1 bayt + 3 padding
    double qiymet;  // 8 bayt
};  // Cəmi: 20 bayt

// Effektiv:
struct Telebe2 {
    double qiymet;  // 8 bayt
    int yas;        // 4 bayt
    char ad;        // 1 bayt
    char kurs;      // 1 bayt
    // 2 bayt padding
};  // Cəmi: 16 bayt
________________________________________
Praktik Nümunələr
Nümunə 1: Bütün tip dönüşümləri
#include <stdio.h>

int main() {
    int a = 17;
    int b = 5;
    
    // Integer bölmə
    printf("17 / 5 = %d\n", a / b);  // 3
    
    // Float bölmə (casting)
    printf("17 / 5 = %.2f\n", (float)a / b);  // 3.40
    
    // Qalıq
    printf("17 %% 5 = %d\n", a % b);  // 2
    
    return 0;
}
Nümunə 2: Temperatur çevirici
#include <stdio.h>

int main() {
    const float DONDURMA_NOQTESI = 32.0;
    const float DONUSTURME_FAKTORU = 9.0 / 5.0;
    
    float celsius, fahrenheit;
    
    printf("Celsius daxil edin: ");
    scanf("%f", &celsius);
    
    fahrenheit = celsius * DONUSTURME_FAKTORU + DONDURMA_NOQTESI;
    
    printf("%.2f°C = %.2f°F\n", celsius, fahrenheit);
    
    return 0;
}
________________________________________
Praktik Tapşırıqlar
Tapşırıq 1: Məlumat tiplərinin ölçüsü
sizeof() operatorundan istifadə edərək bütün əsas məlumat tiplərinin ölçüsünü və diapazonu göstərən proqram yazın.
Gözlənilən çıxış:
Məlumat Tipi    Ölçü (bayt)    Diapazon
char            1              -128 to 127
int             4              -2147483648 to 2147483647
...
________________________________________
Tapşırıq 2: Dəyişən elanları
Aşağıdakı məlumatlar üçün düzgün məlumat tipləri seçin və proqram yazın:
•	Tələbənin yaşı (0-100)
•	Əhalinin sayı (milyonlarla)
•	PI sabiti
•	Qiymət (0.00-100.00)
•	Həftənin günü (enum istifadə edin)
________________________________________
Tapşırıq 3: Tip dönüşümü
İki tam ədədin bölünməsi zamanı həm tam ədəd, həm də float nəticəni göstərən proqram yazın.
Nümunə:
Birinci ədəd: 22
İkinci ədəd: 7

Tam bölmə: 3
Float bölmə: 3.14
Qalıq: 1
________________________________________
Tapşırıq 4: const istifadəsi
Dairənin sahəsini və perimetrini hesablayan proqram yazın (PI sabitindən istifadə edin).
Formula:
•	Sahə = π × r²
•	Perimetr = 2 × π × r
________________________________________
Tapşırıq 5: enum tətbiqi
İlin fəsillərini enum ilə təyin edin və hər fəsil üçün orta temperaturu göstərən proqram yazın.
________________________________________
Tapşırıq 6: Yaddaş optimallaşdırması
1000 tələbənin yalnız yaşını saxlamaq üçün hansı məlumat tipini seçərdiniz? Hesablayın ki, bu seçim neçə bayt qənaət edər.
________________________________________
Mühazirə Xülasəsi
Bu mühazirədə öyrəndiklərimiz:
✅ Məlumat tiplərinin yaddaş strukturu və diapazonu ✅ İşarəli və işarəsiz tiplər ✅ const, volatile və enum istifadəsi ✅ Gizli və açıq tip dönüşümü ✅ Dəyişən adlandırma qaydaları ✅ Yaddaş optimallaşdırması prinsipləri
