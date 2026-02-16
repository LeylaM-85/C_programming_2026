//Simvollarla İş (char)
//Yalnız bir hərf və ya işarə saxlamaq üçün char tipindən istifadə olunur.

#include <stdio.h>

int main() {
    char qrup_adi = 'B'; // Simvollar mütləq tək dırnaq ' ' içində yazılır

    // %c -> tək bir simvolu çap etmək üçündür
    printf("Sizin qrupunuz: %c\n", qrup_adi);

    return 0;
}