Kodu necə işə salacaqsınız?
Faylı yaratdıqdan və ya açdıqdan sonra, aşağıdakı addımlarla onu icra edə bilərsiniz:

Aşağıdakı Terminal hissəsinə keçin.

Kodu kompilyasiya etmək üçün yazın: gcc fayl_adi.c -o proqram

İcra etmək üçün yazın: ./proqram


1. Auto Save (Avtomatik Yadda Saxlama) Funksiyasını Aktiv Edin
Hər dəfə Ctrl + S basmağı unutmaqdan qorxursunuzsa, bu funksiyanı aktivləşdirə bilərsiniz. Beləliklə, siz kod yazdıqca o özü avtomatik yadda qalacaq:

Yuxarı sol küncdəki üç xətt (Menu) düyməsinə klikləyin.

File bölməsinə keçin.

Auto Save yazısının üzərinə klikləyin (yanında işarə görünməlidir).

2. Ağ Dairə Hələ də Qalırsa Nə Etməli?




Kodu necə yoxlamalı?
Artıq Auto Save aktiv olduğu üçün Ctrl+S basmağa ehtiyac yoxdur. Birbaşa terminala keçin:

Kompilyasiya edin: gcc Ders_01.1.c -o ders1

İşə salın: ./ders1

Daxil etmə: Proqram dayanıb sizdən rəqəm gözləyəcək. Yaşınızı yazıb Enter düyməsini sıxın.


1. Adı nəyə əsasən qoyuruq?
Kompilyasiya əmrindəki -o hərfi "output" (çıxış) sözünü təmsil edir. Ondan sonra yazdığınız söz, yaradılacaq icra oluna bilən (executable) proqram faylının adıdır.

İstənilən ad: Bu adı özünüz təyin edirsiniz. Məsələn, gcc Ders_01.1.c -o salam yazsanız, proqramı işə salmaq üçün ./salam yazmalı olacaqsınız.

Məntiqi adlandırma: Adətən kodun nə işə yaradığını ifadə edən qısa adlar seçilir (məsələn: hesabla, test, proqram1).

2. Hər dəfə dəyişmək lazımdır?
Xeyr: Eyni fayl üzərində (məsələn, Ders_01.1.c) işləyirsinizsə, hər dəfə eyni ders1 adını saxlaya bilərsiniz. Hər yeni kompilyasiyada köhnə ders1 faylı avtomatik yenisi ilə əvəz olunacaq.

Bəli (fayl dəyişdikdə): Əgər yeni bir fayl yaradıb (məsələn, Ders_02.c) onun proqramını köhnəsi ilə qarışdırmaq istəmirsinizsə, onda -o ders2 kimi fərqli ad verməyiniz daha yaxşı olar.

Əmr,Mənası
gcc Ders_01.1.c,Kompilyasiya et (ad verməsəniz avtomatik a.out adlı fayl yaradır).
-o ders1,"""Nəticəni ders1 adlı fayla yaz"" deməkdir."
./ders1,"""Cari qovluqdakı ders1 proqramını işə sal"" deməkdir."
