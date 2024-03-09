#include <iostream>
#include <cstring>

int main() {
    const char* str1 = "ba";
    const char* str2 = "bb";

    int result = strcmp(str1, str2);

    if (result < 0) {
        std::cout << "Chu?i 1 nh? hon chu?i 2." << std::endl;
    } else if (result > 0) {
        std::cout << "Chu?i 1 l?n hon chu?i 2." << std::endl;
    } else {
        std::cout << "Hai chu?i b?ng nhau." << std::endl;
    }

    return 0;
}
