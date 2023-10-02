#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            int candy;
            cin >> candy;
            if (candy == 1)
                sum1++;
            else
                sum2++;
        }

        // Check if it's possible to distribute candies fairly
        if (sum1 % 2 == 0 && (sum2 % 2 == 0 || (sum1 > 0 && sum1 % 2 == 0)))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
