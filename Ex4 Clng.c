#include <stdio.h>

int main() {
   float Celsius;

    printf("Entrez la temp�rature en Celsius: ");
    scanf("%f", &Celsius);

    if (Celsius < 0) {
        printf("L'�tat de l'eau est : Solide\n");
    } else if (Celsius < 100) {
        printf("L'�tat de l'eau est : Liquide\n");
    } else {
        printf("L'�tat de l'eau est : Gaz\n");
    }

    return 0;
}
