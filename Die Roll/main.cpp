#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int Y, W;
    cin >> Y >> W;

    int M = max(Y, W);  // Calculate the maximum of Y and W.

    int winning_outcomes = 6 - M + 1;  // Calculate the number of winning outcomes for Dot.

    int gcd = __gcd(winning_outcomes, 6);  // Calculate the GCD of the numerator and denominator.

    // Output the probability fraction in irreducible form.
    cout << winning_outcomes / gcd << "/" << 6 / gcd << endl;

    return 0;
}
