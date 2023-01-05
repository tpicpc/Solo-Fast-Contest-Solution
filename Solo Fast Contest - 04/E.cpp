#include <iostream>
using namespace std;

int main()
{
    int t, x, y, avg;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        avg = (x + y) / 2;
        if (avg % 2 == 0)
        {
            cout << "Sadia will be happy." << endl;
        }
        else
        {
            cout << "Oops!" << endl;
        }
    }

    return 0;
}
