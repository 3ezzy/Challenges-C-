#include <stdio.h>

int main() {
    float Km;
    float yards;


    printf("Entrez la distance en kilom�tres ");
    scanf("%f", &Km);


    yards = Km * 1093.61;


    printf("La distance en yards est: %.2f yards\n", yards);

    return 0;
}
