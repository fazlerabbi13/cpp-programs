#include <iostream>
using namespace std;

int main()
{
    int T, a, b;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        cin >> a >> b;
        int sum = 0;

        for (int j = a; j <= b; j++)
        {
            if (j % 2 != 0)
            {
                sum += j;
            }
        }
        cout << "Case " << i << ": " << sum << endl;
    }
    return 0;
}
