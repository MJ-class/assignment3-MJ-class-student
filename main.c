#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "21500771.h"
#include "21700431.h"

#define FALSE 0
#define TRUE 1
void main() {
	char input[30];
	int is_number;
	int reverse;
	int sort;
	int prime;
	while(fgets(input, sizeof(input), stdin) != NULL) {
		if(input[strlen(input) -1] == '\n')
			input[strlen(input) -1] = 0;

		if(strcmp(input, "quit") == 0) {
			printf("(bye)\n");
			break;
		}

		is_number = TRUE;
		for(int i=0; i<strlen(input); i++) {
			if(!isdigit(input[i])) {
				printf("Entered input is not a number\n");
				is_number = FALSE;
				break;
			}
		}

		if(is_number) {
			reverse = reverse_digits(atoi(input));
			sort = sort_digits(atoi(input));
			printf("reverse>%d\nsort>%d\n", reverse, sort);
			if(isPrime(atoi(input))) printf("True\n");
			else printf("False\n");
		}
		
	}
}
