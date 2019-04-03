#include "21600671.h"

int reverse_digits(int num){
        int temp, num2 = 0;
        while(num){
        temp = num % 10;
        num = num / 10;
        num2 = num2*10 + temp;

        }
        return num2;
}

