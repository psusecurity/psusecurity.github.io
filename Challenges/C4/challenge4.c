#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bad_function(char *input) {
    char input_len = strlen(input);
    char dest_buffer[8];
    char str[] = "ls";

    //printf("the length of input is %d and address of str %p and address of system %p\n", input_len, str, system);

    if (input_len < 8) {
        strcpy(dest_buffer, input);
    }
    else {
        printf("Error : input is too long for buffer.\n");
    }
}

int main(int argc, char *argv[]) {

    char *buff = (char *)malloc(512);
    printf("Please input a string:\n");
    scanf("%s", buff);

    bad_function(buff);  

    return 0;

}
