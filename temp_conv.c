#include <stdio.h>

//variables
#define LOWER   0
#define UPPER   300
#define STEP    20


//print Fahrenheit-Celsius table
int main() {
    double f_temp;

    printf("\n\n%10s%6s%10s\n", "Fahrenheit", "->", "Celsius");
    for (f_temp = LOWER; f_temp <= UPPER; f_temp += STEP){
        printf("%10.0f%6s%10.1f\n", f_temp, "->", (5.0 / 9.0) * (f_temp - 32));
    }
    return 0;
}
