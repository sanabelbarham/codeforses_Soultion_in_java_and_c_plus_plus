#include <iostream>

int main() {
    long long int n;
    std::cin >> n;

    long long int result;

    if (n % 2 == 0) {
        result = n / 2;
    } else {
        result = -((n + 1) / 2);
    }

    std::cout << result << std::endl;

    return 0;
}
