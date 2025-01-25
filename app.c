#include <stdio.h>
#include <stdbool.h>

void flush_stdin(){
    int c;
    do{
        c = getchar();
    }while(c != '\n' && c != EOF);
}

unsigned int read_box_dimension(const char *name){
    unsigned int value = 0;
    while(true){
        printf("Enter %s of box: ", name);
        if(scanf("%u", &value) == 0){
            puts("Invalid value");
            flush_stdin();
        }else{
            return value;
        }
    }
}

int main(){
    const unsigned int height = read_box_dimension("height");
    const unsigned int length = read_box_dimension("length");
    const unsigned int width = read_box_dimension("width");
    
    const unsigned int volume = height * length * width;

    printf("Volume (cubic inches): %u\n", volume);
    printf("Dimensional weight (pounds): %u\n", (volume + 165) / 166);
}
