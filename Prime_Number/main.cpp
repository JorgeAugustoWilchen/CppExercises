#include <cmath>
#include <stdio.h>

bool isPrime(int num) {
  if (num <= 1) return false;
  if (num == 2 || num == 3) return true;
  if (num % 2 == 0 || num % 3 == 0) return false; 
  
  for (int i = 5; i <= std::sqrt(num); i+=6) {
    if (num % i == 0 || num % (i+2) == 0) return false;
  }
  return true;
}

int main() {
    if(isPrime(7)) {
        printf("Test 1 Passed\n");
        fflush(stdout);
    }

    if(!isPrime(62)) {
        printf("Test 2 Passed\n");
        fflush(stdout);
    }

    if(isPrime(97)) {
        printf("Test 3 Passed\n");
        fflush(stdout);
    }
    return 0;
}