#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[]){
	if(argc==2){
		printf("Checking License Key: %s\n", argv[1]);
		int sum = 0;
		for(int i=0; i<strlen(argv[1]); i++){
			sum += (int)argv[1][i];
		}
		if(sum == 912){
			printf("Valid License Key Provided\nAccess Granted!\n");
		} else {
			printf("Invalid License Key Provided\nACCESS DENIED\n");
		}
	} else {
		printf("LICENSE KEY CHECKER\n\nUsage: <key>\n");
	}
	return 0;
}

