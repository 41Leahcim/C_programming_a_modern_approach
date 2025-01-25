#include <stdio.h>

int main(){
    int answer, q = 1, p = 3;

    // Tokens: Assign(answer, Div(Sub(Mul(3, q), Mul(p, p)), 3))
    answer = (3 * q - p * p) / 3;

    printf("%d\n", answer);
}
