#include<vector>
#include<stdio.h>

bool isValidWalk(std::vector<char> walk) {
  if(walk.size() != 10) {
    return false;
  }
  
  int n = 0;
  int e = 0;
  
  for(char i: walk) {
    switch (i){
        case 'n':
          n++;
          break;
        case 's':
          n--;
          break;
        case 'e':
          e++;
          break;
        case 'w':
          e--;
          break;
    }
  }

  return n == 0 && e == 0;
}

int main() {
    if(isValidWalk({'n','s','n','s','n','s','n','s','n','s'})) {
        printf("Test 1 Passed\n");
        fflush(stdout);
    }

    if(!isValidWalk({'e','w','e','w','n','s','n','s','e','n'})) {
        printf("Test 2 Passed\n");
        fflush(stdout);
    }

    if(!isValidWalk({'w','e','w','e','w','s','e','e','n','w','s'})) {
        printf("Test 3 Passed\n");
        fflush(stdout);
    }

    return 0;
}