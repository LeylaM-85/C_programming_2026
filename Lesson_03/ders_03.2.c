//Məsələ: İstifadəçidən bir simvol (char) və bir rəqəm almalı olan proqram yazın. Simvoldan sonra buferi təmizləmək üçün fflush(stdin) (və ya alternativ) istifadə edin.

#include <stdio.h>

int main() {
    char simvol;
    int eded;

    printf("Bir simvol daxil edin: ");
    scanf(" %c", &simvol); // %c-dən əvvəl boşluq qoymaq əvvəlki Enter-i görməzdən gəlir

    printf("Bir eded daxil edin: ");
    scanf("%d", &eded);

    printf("Daxil etdikleriniz: %c və %d\n", simvol, eded);

    return 0;
}

/*İzahat:
Bufer problemi: scanf rəqəmi oxuduqdan sonra "Enter" düyməsini buferdə saxlayır. Növbəti %c gələndə həmin "Enter"-i simvol kimi oxuyur.

Həlli: scanf(" %c", &simvol); yazdıqda, dırnaq içindəki boşluq bütün boşluqları və "Enter"-ləri atlayır.*/