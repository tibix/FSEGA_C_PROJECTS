#include <stdio.h>

enum Day{Dum = 1, Lu = 2, Ma = 3, Mi = 4, Jo = 5, Vi = 6, Sa = 7};

int main() {
    enum Day today = Lu;

    // printf("%d", today);
    if(today == Dum || today == Sa)
    {
        printf("E weekend! Ne jucam!\n");
    }
    else
    {
        printf("Trebuie sa mergem la scoala!\n");
    }


    return 0;
}