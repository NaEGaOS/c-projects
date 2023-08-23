#include <stdio.h>

void schwa(int n){
    int steps = 0;
    while (n != 1){
        if (n % 2 == 0){
            n /= 2;
        }
        else{
            n = n * 3 + 1;
        }
        steps++;
        printf("%d\n", n);
    }
    printf("steg: %d", steps);
}

void main(){
    int n = 10;
    print("startverdi: %d\n", n);
    schwa(n);
}
