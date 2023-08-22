#include <stdio.h>
#include <string.h>

void compare_values(int x, int y){
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
    int string_length = strlen(string);
    char new_string[100];
    for (int i = 0; i < string_length; i++){
        new_string[i] = string[string_length - 1 - i];
    }
    printf("%s\n", new_string);
}

void main(){
    /*
    int x = 10;
    int y = 5;
    compare_values(x, y);
    int num_lines = 4;
    my_triangles(num_lines);
    int number = 10;
    int prime_factor = 5;
    printf("%d\n", my_prime_factor(number, prime_factor));
    int startnum = 1;
    int endnum = 5;
    my_numbers(startnum, endnum);
    reverse_string("A string");
    */
    char funcs[5][50] = {"compare_values", "my_triangles", "my_prime_factor", "my_numbers", "reverse_string"};
    char selected[50];
    printf("enter which function to run?\n");
    for (int i = 0; i < 5; i++){
        printf("    %s\n", funcs[i]);
    }
    scanf("%s", selected);
    // because c doesn't allow switches with strings
   if (strcmp(selected,"compare_values") == 0){
        int num1;
        int num2;
        printf("enter num 1: ");
        scanf("%d", &num1);
        printf("enter num 2: ");
        scanf("%d", &num2);
        compare_values(num1, num2);
    }
    else if (strcmp(selected, "my_triangles") == 0){
        int num_lines;
        printf("enter number of lines: ");
        scanf("%d", &num_lines);
        my_triangles(num_lines);
    }
    else if (strcmp(selected, "my_prime_factor") == 0){

    }
    else if (strcmp(selected, "my_numbers") == 0){

    }
    else if (strcmp(selected, "reverse_string") == 0){

    }
    else{
        main();
    }
}
