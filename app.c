#include <stdio.h>

int main(){
    const unsigned int height = 8, length = 12, width = 10;
    const unsigned int volume = height * length * width;
    const unsigned int weight = (volume + 165) / 166;

    printf("Dimensions: %d x %d x %d\n", length, width, height);
    printf("Volume (cubic inches): %u\n", volume);
    printf("Dimensional weight (pounds): %u\n", weight);
}
