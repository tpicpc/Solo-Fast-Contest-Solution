#include <iostream>
#include <iomanip>
using namespace std;
#define PI 3.1415926535897932384626433832795
int main()
{
    int r, d;
    float area, ans;
    cin >> r;
    area = 2 * PI * r;
    d = 2 * r;
    ans = area / d;
    cout << fixed << setprecision(5) << ans << endl;

    return 0;
}
