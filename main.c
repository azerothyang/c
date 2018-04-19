#include <stdio.h>
void fahrToCelsius(void);
int main() {
    fahrToCelsius();
    return 0;
}

// fahr to Celsius
void fahrToCelsius(void){
    float fahr=0, Celsius;
    int step = 20;
    while (fahr <= 300){
        Celsius = (5*(fahr-32))/9;
        printf("%3.0f %6.1f\n", fahr, Celsius);
        fahr += step;
    }
}