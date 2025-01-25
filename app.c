#include <stdio.h>
#include <stdbool.h>

#define FREEZING_POINT 32.0

void flush_stdin(){
    int c;
    do{
        c = getchar();
    }while(c != '\n' && c != EOF);
}

float read_temperature(){
    float value = 0;
    while(true){
        printf("Enter Fahrenheit temperature: ");
        if(scanf("%f", &value) == 0){
            puts("Invalid value");
            flush_stdin();
        }else{
            return value;
        }
    }
}

int main(){
    const float fahrenheit = read_temperature();
    const float scale_factor = 5.0 / 9.0;
    const float celsius = (fahrenheit - FREEZING_POINT) * scale_factor;
    printf("Celsius equivalent: %.1f\n", celsius);
}
