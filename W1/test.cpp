#include <iostream>

int recuirsion(int n) {
    if (n == 0) {
        return 0;
    }
    return recuirsion(n - 1);
}

int main() {
    std::cout << recuirsion(2);
    return 0;
}