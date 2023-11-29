#include <iostream>

size_t strlen(const char* str) {
    size_t result = 0;
    while (str[result] != '\0') {
        result++;
    }
    return result;
}

int main() {
    const char* testString = "Example String";
    size_t length = strlen(testString);
    std::cout << "Length of the string: " << length << std::endl;
    return 0;
}
