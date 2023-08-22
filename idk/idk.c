#include <stdio.h>

void wasd(int n, char c){
    for (int i = 0; i < n; ++i){
        printf("%c", c);
    }
    printf("\n");
}


main(){
    int n = 5;
    char c = '*';
    for (int i = 0; i <= n; ++i){
        wasd(i, c);
    }
}
