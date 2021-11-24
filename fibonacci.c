#include <strings.h>
#include <stdio.h>

int main (int argc, char *argv[]){
	if (argc == 2){
		int digits;
		sscanf(argv[1], "%d", &digits);
		int n1 = 0;
		int n2 = 1;
		int total = 0;
		
		printf("%d %d ", n1, n2);
		for (int i = 2; i < digits;){
			total = n1 + n2;
			printf("%d ", total);
			n1 = n2;
			n2 = total;
			i++;
		};
	} else {
		printf("This program prints the fibonacci sequence up to the number of specified digits\n");
		printf("USAGE: <digits>");
	}
	return 0;
}
