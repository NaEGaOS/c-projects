#include <stdio.h>

void compare_values(int x, int y){
    // assuming x != y
    int largest = x > y ? x : y;  // ternary
    printf("%d\n", largest);
}

void my_triangles(int num_lines){
    for (int i = 0; i <= num_lines; i++){
        for (int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
}

int my_prime_factor(int number, int prime_factor){
    return number % prime_factor == 0;
}

void my_numbers(int startnum, int endnum){
    for (int i = startnum; i < endnum; i++){
        (i % 2 == 0) ? printf("%d is even and ", i) : printf("%d is odd and ", i);
        (my_prime_factor(i, 5)) ? printf("5 is a prime factor\n") : printf("5 is not a prime factor\n");
    }
}

//int my_log2(unsigned int n){}

void reverse_string(char string[]){
    int string_length = sizeof(string);
    char new_string[100];
    for (int i = 0; i < string_length; i++){
        new_string[i] = string[string_length];
        string_length--;
    }
    printf("%s\n", new_string);
    printf("done\n");
}

void main(){
    /*
    int x = 5;
    int y = 10;
    compare_values(x, y);
    int num_lines = 4;
    my_triangles(num_lines);
    int number = 10;
    int prime_factor = 5;
    printf("%d\n", my_prime_factor(number, prime_factor));
    int startnum = 1;
    int endnum = 16;
    my_numbers(startnum, endnum);
    */
   reverse_string("abcd");
}
