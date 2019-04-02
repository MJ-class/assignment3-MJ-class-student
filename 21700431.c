#include <stdio.h>
#include <string.h>
#include "21700431.h"
typedef int bool;
#define true 1
#define false 0
int sort_digits(int input) {
	//	c = getchar();
	int output = 0;
	int temp = input;
	int ins;
	int cmp;
	while (temp > 0) {
		ins = temp%10;
		for (int j=1; output/j >= 0 ;j*=10) {
			if(output == 0) {
				output = ins;
				break;
			}
			cmp = ((int)output/j)%10;
			if (ins >= cmp) {
				output = (((int)output/j)*j*10) + (output%j) + ins*j;
				break;
			}
		}
		temp /= 10;
	}
	return output;
}

bool isPrime(int n){
	int i;
	for(i = 2; i < n; i++){
		if( n % i == 0) return false;
	}
	return true;
}
