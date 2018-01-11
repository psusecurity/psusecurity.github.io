#include <stdio.h>

int main(){

    int a = 10;
    char c = 'X';
    char array[4];
    char array2[] = {'X', 'Y', 'Z'};

    printf("please enter: \n");

    scanf("%s", array);

    if (c == 'Y') {
        printf("Welcome to overflow!\n");
    } else {
        printf("This is normal output!\n");
    }
    return 0;
}
