#include "21600671.h"
#include "21300187.h"
int main(void){
        char input[MAX_SIZE];
        int is_number = FALSE;
        int reverse;
        int sort;
	char* binary;
	int true_not;
        while(fgets(input, sizeof(input), stdin)!= NULL){

                if(input[strlen(input)-1] == '\n')
                        input[strlen(input)-1] = 0;
                if(strcmp(input,"quit") == 0){
                       printf("(bye)\n");
                        break;
                }

                is_number = TRUE;
                for(int i = 0; i < strlen(input); i++){
                        if(!isdigit(input[i])){
                                printf("Entered input is not a number\n");
                                is_number = FALSE;
                                break;
                        }
                }
                if(is_number){
                        reverse = reverse_digits(atoi(input));
                        sort = sort_digits(atoi(input));
			binary = binarized(atoi(input));
			true_not = isPrime(atoi(input));
                        printf("reverse> %d\nsort> %d\n",reverse, sort);
			printf("binary> ");
			for (int i = position - 1; i >= 0; i--) printf("%c", binary[i]);
			printf("\n");
			printf("isPrime> %s\n", true_not ? "True" : "False");
                }
        }
        return 0;
}

