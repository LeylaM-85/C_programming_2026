C Proqramlaşdırma: Laboratoriya İşləri 💻Bu repozitoriya Western Caspian University tələbələri üçün C proqramlaşdırma dilinin əsaslarını öyrənmək məqsədilə yaradılmışdır. Burada siz real kompilyasiya prosesini və terminal əmrlərini öyrənəcəksiniz.🛠️ Mühitin Qurulması (GitHub Codespaces)Bu kursda biz heç bir əlavə proqram yükləmədən GitHub Codespaces mühitindən istifadə edirik. Burada gcc (GNU Compiler Collection) artıq quraşdırılmış vəziyyətdədir.🚀 Kodun Yazılması və İcra EdilməsiC dilində yazdığınız bir kodun proqram kimi işləməsi üçün iki əsas mərhələdən keçməlidir: Kompilyasiya və İcra.1. Terminalı AçınKlaviaturada Ctrl + ` (tab düyməsinin üstü) düymələrini sıxaraq terminal pəncərəsini açın.2. Kompilyasiya (Compilation)Yazdığınız .c uzantılı faylı kompüterin başa düşəcəyi maşın dilinə çevirmək üçün aşağıdakı əmri yazın:Bashgcc ders1.c -o ders1
gcc: Kompilyator proqramın adıdır.ders1.c: Sizin yazdığınız kod faylı.-o ders1: Yaradılacaq icra oluna bilən (executable) faylın adı.3. Proqramı İşlətmək (Execution)Kompilyasiya uğurlu bitdikdən sonra proqramı işlətmək üçün terminala bunu yazın:Bash./ders1
📋 Faydalı Terminal ƏmrləriƏmrTəsvirilsQovluqdakı faylların siyahısını göstərir.cd qovluq_adiGöstərilən qovluğa daxil olur.clearTerminal ekranını təmizləyir.gcc --versionQuraşdırılmış GCC versiyasını yoxlayır.📝 İlk Tapşırıq (Hello World)Aşağıdakı kodu salam.c faylı yaradaraq daxilinə yazın və yuxarıdakı əmrlərlə işlədin:C#include <stdio.h>

int main() {
    printf("Salam, C dunyasina xoş gelmisiniz!\n");
    return 0;
}
Müəllim: Leyla MəmmədovaKafedra: İnformasiya TexnologiyalarıLeyla xanım, kiçik bir məsləhət:Tələbələr bəzən -o hissəsini unudurlar. Əgər onlar sadəcə gcc salam.c yazsalar, Linux sistemi avtomatik olaraq a.out adlı fayl yaradacaq. Onlara bunu da xatırlatmaq olar ki, əgər ./salam işləməsə, ./a.out yazaraq nəticəni yoxlasınlar.İstərdinizmi, bu README faylına tələbələrin "ən çox rastlaşdığı xətalar və həlləri" (məsələn, nöqtəli vergülün unudulması) haqqında bir bölmə də əlavə edək?


⚠️ Tez-tez Rastlaşan Xətalar və Həlləri
Proqramlaşdırmaya yeni başlayanda xətalarla qarşılaşmaq tamamilə normaldır. Əsas olan terminaldakı xəta mesajını düzgün oxumaqdır.

1. Unudulmuş Nöqtəli Vergül (;)
Xəta mesajı: error: expected ';' before '...'

Səbəb: C dilində hər bir əmrin sonu mütləq ; ilə bitməlidir.

Həll: Xəta göstərilən sətirdən bir əvvəlki sətrin sonuna nöqtəli vergül əlavə edin.

2. Kitabxananın Unudulması (#include)
Xəta mesajı: warning: implicit declaration of function 'printf'

Səbəb: printf və ya scanf istifadə etmisiniz, lakin yuxarıda #include <stdio.h> yazmamısınız.

Həll: Faylın ən üstünə standart giriş-çıxış kitabxanasını əlavə edin.

3. Kompilyasiya Zamanı "No such file" Xətası
Xəta mesajı: fatal error: ders1.c: No such file or directory

Səbəb: Terminalda yazdığınız fayl adı ilə qovluqdakı fayl adı üst-üstə düşmür və ya səhv qovluqdasınız.

Həll: ls əmri ilə fayllarınızın adını yoxlayın və adı hərfi-hərfinə düzgün yazın.

4. Bağlanmamış Mörtərizələr { }
Xəta mesajı: error: expected '}' at end of input

Səbəb: main funksiyasının və ya bir şərt blokunun açılan { mörtərizəsini bağlamağı unutmusunuz.

Həll: Hər açılan mörtərizənin mütləq bir qarşılığı olduğunu yoxlayın.

💡 Qızıl Qayda: "Compile Early, Compile Often"
Kodu 50 sətir birdən yazıb sonra kompilyasiya etməyin. Hər 2-3 sətirdən bir gcc əmri ilə yoxlayın ki, xətanın harada olduğunu dərhal biləsiniz.

Leyla xanım, bu bələdçi ilə tələbələriniz özlərini tək hiss etməyəcəklər. Onlar artıq xəta alanda panikaya düşmək yerinə, bu README-yə baxıb problemi özləri həll etməyə çalışacaqlar.

Sizcə, dərslərdə tələbələrin ən çox çətinlik çəkdiyi başqa bir mövzu varmı? Məsələn, dəyişən adlandırma qaydaları və ya scanf (məlumat girişi) haqqında da qısa bir "Yaddaş kitabçası" əlavə edək?
