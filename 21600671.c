#include "21600671.h"
#include <stdbool.h>
bool isPrime(int n) {
   for (int i = 2; i < n; i++) {
      if (n%i == 0) return false;
   }
   return true;
}

int reverse_digits(int num){
        int temp, num2 = 0;
        while(num){
        temp = num % 10;
        num = num / 10;
        num2 = num2*10 + temp;

        }
        return num2;
}

