#include <stdio.h>
#include <stdbool.h>

void flush_stdin(){
    char c;
    do{
        c = getchar();
    }while(c != '\n' && c != EOF);
}

double read_radius(){
    while(true){
        double radius = 0;
        printf("Enter sphere radius: ");
        if(scanf("%lf", &radius) != 1){
            puts("Invalid value");
            flush_stdin();
        }else{
            return radius;
        }
    }
}

double calculate_pi(){
    double pi = 4.0;
    double divisor = 3.0;
    double previous_pi = 0.0;
    while(pi != previous_pi){
        previous_pi = pi;
        pi -= 4.0 / divisor - 4.0 / (divisor + 2);
        divisor += 4;
    }
    return pi;
}

double calculate_sphere_volume(const double radius){
    return (4.0 / 3.0) * calculate_pi() * (radius * radius * radius);
}

int main(){
    const double radius = read_radius();
    const double volume = calculate_sphere_volume(radius);
    printf("Volume: %lf\n", volume);
}
