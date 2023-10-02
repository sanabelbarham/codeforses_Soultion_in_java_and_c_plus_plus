##include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> cards(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> cards[i];
    }

    int serejaScore = 0;
    int dimaScore = 0;
    int left = 0;
    int right = n - 1;
    bool serejaTurn = true;

    while (left <= right) {
        if (cards[left] > cards[right]) {
            // Sereja's turn
            if (serejaTurn) {
                serejaScore += cards[left];
            } else {
                dimaScore += cards[left];
            }
            left++;
        } else {
            // Dima's turn
            if (serejaTurn) {
                serejaScore += cards[right];
            } else {
                dimaScore += cards[right];
            }
            right--;
        }
        serejaTurn = !serejaTurn; // Switch turns
    }

    std::cout << serejaScore << " " << dimaScore << std::endl;

    return 0;
}
