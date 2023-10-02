#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        if (n % 2 == 0) {
            // If n is even, there are (n/2 - 1) ways to distribute candies.
            cout << (n / 2 - 1) << endl;
        } else {
            // If n is odd, there are (n-1)/2 ways to distribute candies.
            cout << ((n - 1) / 2) << endl;
        }
    }

    return 0;
}
