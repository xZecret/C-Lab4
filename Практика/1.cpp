#include <stdio.h>

int main(){
    int a;
    while ((a = getchar()) != 10){
        putchar(a | 0b00100000);
    }
    putchar('\n');
}