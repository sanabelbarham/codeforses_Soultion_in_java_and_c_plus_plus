#include <iostream>
using namespace std;

int main() {
    int n, num, c = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (i == 0)
            arr[i] = num;
        else {
            int min = arr[i - 1];
            int max = arr[i - 1];
            for (int j = 0; j < i; j++) {
                if (arr[j] <= min)
                    min = arr[j];
                if (arr[j] >= max)
                    max = arr[j];
            }
            if (num < min || num > max)
                c++;
            arr[i] = num;
        }
    }
    cout << c << endl;
    return 0;
}
