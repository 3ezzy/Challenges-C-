#include <stdio.h>

int main() {
    float celsius;
    float kelvin;


    printf("Entrez la temp�rature en Celsius: ");
    scanf("%f", &celsius);


    kelvin = celsius + 273.15;


    printf("La temp�rature en Kelvin est: %.2f", kelvin);

    return 0;
}
