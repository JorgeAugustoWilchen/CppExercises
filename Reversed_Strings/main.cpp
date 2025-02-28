#include <string>

std::string reverseString (std::string str )
{
    std::string new_str;
    for (char c : str) {
    new_str = c + new_str;
    }
    return new_str;
}

int main()
{
    if(reverseString("hello") == "olleh") {
        printf("Test 1 passed\n");
        fflush(stdout);
    }

    if(reverseString("world") == "dlrow") {
        printf("Test 2 passed\n");
        fflush(stdout);
    }

    if(reverseString("hello world") == "dlrow olleh") {
        printf("Test 3 passed\n");
        fflush(stdout);
    }
    
    return 0;
}