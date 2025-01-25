// The values tend to be 0, but may be different if the memory is initialized in an other
// application.

#include <stdio.h>
#include <stdint.h>

int main(){
    const uint8_t byte;
    const uint16_t word;
    const uint32_t double_word;
    const uint64_t quad_word;
    const float single_precision;
    const double double_precision;

    printf("Byte: %u\n", byte);
    printf("Byte: %u\n", word);
    printf("Byte: %u\n", double_word);
    printf("Byte: %u\n", quad_word);
    printf("Byte: %f\n", single_precision);
    printf("Byte: %lf\n", double_precision);
}
