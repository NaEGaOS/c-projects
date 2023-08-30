#include <stdio.h>

int main(){
    int arr[10] = {0, 1, 2, 5};
    for (int i = 1; i < sizeof(arr); i++){
        printf("%d\n", *(arr + i - 1));
    }
}
