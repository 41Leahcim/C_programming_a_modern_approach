// Removed all unnecessary on line whitespace. Kept new lines as they only have impact and are
// required with macros (only the 2 #include here)
#include<stdio.h>
#include<stdbool.h>

void flush_stdin(){
int c;
do{
c=getchar();
}while(c!='\n'&&c!=EOF);
}

unsigned int read_box_dimension(const char*name){
unsigned int value=0;
while(true){
printf("Enter %s of box: ",name);
if(scanf("%u",&value)==0){
puts("Invalid value");
flush_stdin();
}else{
return value;
}
}
}

int main(){
unsigned int height,length,width;
height=read_box_dimension("height");
length=read_box_dimension("length");
width=read_box_dimension("width");

const unsigned int volume=height*length*width;
const unsigned int weight=(volume+165)/166;

printf("Volume (cubic inches): %u\n",volume);
printf("Dimensional weight (pounds): %u\n",weight);
}
