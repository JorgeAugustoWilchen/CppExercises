#include <stdio.h>

int makeNegative(int num)
{
  return num < 0 ? num : num > 0 ? num*-1 : 0;
}

int main()
{
    if(makeNegative(42) == -42) {
        printf("Test 1 passed\n");
        fflush(stdout);
    }

    if(makeNegative(-42) == -42) {
        printf("Test 2 passed\n");
        fflush(stdout);
    }

    if(makeNegative(0) == 0) {
        printf("Test 3 passed\n");
        fflush(stdout);
    }
    
    return 0;
}