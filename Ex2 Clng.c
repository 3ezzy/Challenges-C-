#include <stdio.h>

int main() {
    float celsius;
    float kelvin;


    printf("Entrez la température en Celsius: ");
    scanf("%f", &celsius);


    kelvin = celsius + 273.15;


    printf("La température en Kelvin est: %.2f", kelvin);

    return 0;
}
