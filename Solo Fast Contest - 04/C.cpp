#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int sticks[n];
    for (int i = 0; i < n; i++)
    {
        cin >> sticks[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int a = sticks[i], b = sticks[j], c = sticks[k];

                if (a + b > c && a + c > b && b + c > a)
                {
                    count++;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}
