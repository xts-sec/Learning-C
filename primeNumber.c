#include <strings.h>
#include <stdio.h>

int main (int argc, char *argv[]) {
	int num;
	sscanf(argv[1], "%d", &num);
	for (int i = 0; i < num;) {
		int res = num % i;
		if (res != 0) {
			i++;
		} else if (res == 0) {
			printf("%d is not prime, divisible by %d", num, i);
			return 0;
		}
		printf("%d is prime, no factors found", num);
		return 0;
	}
	return 0;
}
