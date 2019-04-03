#include "21600671.h"
#include "21300187.h"
int main(void){
        char input[MAX_SIZE];
        int is_number = FALSE;
        int reverse;
        int sort;
	char binarized[MAX_SIZE];
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
			binarized = binarzied(atoi(input));
			printf("%s\n", binarized);
                        printf("reverse> %d\nsort> %d\n",reverse, sort);
                }
        }
        return 0;
}

