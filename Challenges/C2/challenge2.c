#include <stdio.h>

int main(){

    int a = 10;
    char *ptr;
    char c = 'X';
    char array[4];
    char array2[] = {'X', 'Y', 'Z'};

    ptr = &c;

    printf("please enter: \n");

    scanf("%s", array);

    *ptr = '5';

    if (array2[1] == '5') {
        printf("Welcome to overflow!\n");
    } else {
        printf("This is normal output!\n");
    }
    return 0;
}
