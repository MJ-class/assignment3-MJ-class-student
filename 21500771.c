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

void binarized(int input, char output[]) {
	//printf("%s\n", output);
	int c;
	for (int i = 0; input > 0; i++) {
		c = input % 2;
		//printf("%d\n", c);
		input /= 2;
		if (c == 1) {
			output[31-i] = '1';
		}
		//printf("%c", output[31-i]);
	}
	return;
}
