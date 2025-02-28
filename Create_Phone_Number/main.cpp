#include <string>

std::string createPhoneNumber(const int arr [10]){
  std::string phone = "(";
  for (int i = 0; i < 10; i++) {
    if (i == 3) {
      phone += ") ";
    } else if (i == 6) {
      phone += "-";
    }
    phone += std::to_string(arr[i]);
  }
  return phone;
}

int main() {
  int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
  int arr2[10] = {0, 8, 9, 3, 1, 1, 5, 5, 5, 0};
  int arr3[10] = {9, 9, 9, 8, 2, 4, 3, 7, 4, 1};

  if(createPhoneNumber(arr1) == "(123) 456-7890") {
    printf("Test 1 Passed\n");
    fflush(stdout);
  }

  if(createPhoneNumber(arr2) == "(089) 311-5550") {
    printf("Test 2 Passed\n");
    fflush(stdout);
  }

  if(createPhoneNumber(arr3) == "(999) 824-3741") {
    printf("Test 3 Passed\n");
    fflush(stdout);
  }
  
  
  return 0;
}