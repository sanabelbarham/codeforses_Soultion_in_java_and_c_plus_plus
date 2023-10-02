#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;

        // Initialize variables for counting and the result
        int count = 0;
        int result = 0;

        // Start with the first positive integer
        int i = 1;

        while (count < k) {
            // Check if the current integer is disliked by Polycarp
            if (i % 3 != 0 && i % 10 != 3) {
                count++;
                result = i;
            }
            i++;
        }

        cout << result << endl;
    }

    return 0;
}
