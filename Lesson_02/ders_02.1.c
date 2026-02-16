//Tam Ədədlərlə İş (int)
/*int (integer) mənfi və ya müsbət tam ədədlər üçün istifadə olunur. 
printf daxilində %d yazaraq proqrama deyirik ki, bura bir tam ədəd gələcək.*/


#include <stdio.h>

int main() {
    // 1. Dəyişənin elan edilməsi və mənimsədilməsi
    int yas = 25; 

    // %d -> tam ədədlər üçün format təyinedicidir
    printf("Mənim %d yaşım var.\n", yas);

    return 0;
}
//