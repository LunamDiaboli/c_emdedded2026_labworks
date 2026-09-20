#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"

// Вирахувати число цифр в строці

int main(int argc, char** argv) {

    printHeader();

    char string[100];
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = '\0';

    int size = strlen(string);

    printf("The string is: %s\n", string);

    int count = 0;
    for (int i = 0; i < size; ++i) {
        switch(string[i]) {
            case '0':
                ++count;
                break;
            case '1':
                ++count;
                break;
            case '2':
                ++count;
                break;
            case '3':
                ++count;
                break;
            case '4':
                ++count;
                break;
            case '5':
                ++count;
                break;
            case '6':
                ++count;
                break;
            case '7':
                ++count;
                break;
            case '8':
                ++count;
                break;
            case '9':
                ++count;
                break;
        }
    }
    printf("The count of numbers in string: %d\n", count);

    return 0;
}