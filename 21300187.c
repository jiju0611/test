#include "21300187.h"
int sizeofint(int num) {
        int i = 0;
        int cnt = 1;
        for (i = 0; ; i++) {
                if ((num /= 10) <= 0) break;
                cnt++;
        }
        return cnt;
}

int sort_digits(int n){
 char sortedArray[MAX_SIZE];
        sprintf(sortedArray, "%d", n);

        for (int i = 0; i < sizeofint(n); i++) {
                for (int j = 0; j < sizeofint(n) - 1; j++) {
                        if (sortedArray[j] > sortedArray[j + 1]) {
                                int temp = sortedArray[j];
                                sortedArray[j] = sortedArray[j + 1];
                                sortedArray[j + 1] = temp;
                        }
                }
        }
        n = atoi(sortedArray);
        return n;
 }

char temp[2048] = { 0 };
int position = 0;
char* binarized(int n) {

	for (int i = 0; i < 2048; i++) {
		temp[i] = 0;
	}
	position = 0;
	int decimal = n;
	int binary[2048] = { 0 };
	
	char *test = temp;
	

	while (1)
	{
		binary[position] = decimal % 2;
		decimal = decimal / 2;
		position++;
		
		if (decimal == 0)
			break;

	}

	for (int i = 0; i < position; i++) {
		sprintf(test+= strlen(test), "%d", binary[i]);
	}

	
	return temp;

}

