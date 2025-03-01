#include <string>
#include <vector>

std::vector<std::string> towerBuilder(unsigned nFloors) {
  std::vector<std::string> v(nFloors);
  
  for(unsigned i=0; i < nFloors; i++) {
    std::string layer;
    
    for(unsigned j=0; j < nFloors - i -1; j++) {
      layer += " ";
    }
    
    for(unsigned j=0; j < 2 * i + 1; j++) {
      layer += "*";
    }
    
    for(unsigned j=0; j < nFloors - i - 1; j++) {
      layer += " ";
    }
    
    v[i] = layer;
  }
  
  return v;
}

int main() {
    if(towerBuilder(1) == std::vector<std::string>{"*"}) {
        printf("Test 1 Passed\n");
        fflush(stdout);
    }

    if(towerBuilder(7) == std::vector<std::string>{"      *      ",
                                                   "     ***     ",
                                                   "    *****    ",
                                                   "   *******   ",
                                                   "  *********  ",
                                                   " *********** ",
                                                   "*************"}) {
        printf("Test 2 Passed\n");
        fflush(stdout);
    }

    if(towerBuilder(5) == std::vector<std::string>{"    *    ",
                                                   "   ***   ",
                                                   "  *****  ",
                                                   " ******* ",
                                                   "*********"}) {
        printf("Test 3 Passed\n");
        fflush(stdout);
    }
}