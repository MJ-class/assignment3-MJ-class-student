#include <stdio.h>
#include <string.h>

int reverse_digits(int input) {
    int output=0;
    int temp = input;
    while (temp > 0) {
        output = output*10;
        output += temp%10;
        temp /= 10;
    }
    return output;
}