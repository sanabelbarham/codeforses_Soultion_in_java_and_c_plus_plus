#include <iostream>
#include <iomanip>

int main() {
    int n;
    std::cin >> n;

    double totalOrangeJuice = 0.0;

    for (int i = 0; i < n; ++i) {
        int pi;
        std::cin >> pi;
        totalOrangeJuice += pi / 100.0; // Convert percentage to fraction
    }

    double cocktailFraction = (totalOrangeJuice / n) * 100.0; // Convert fraction back to percentage

    std::cout << std::fixed << std::setprecision(9) << cocktailFraction << std::endl;

    return 0;
}
