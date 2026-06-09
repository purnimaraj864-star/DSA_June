#include <iostream>
using namespace std;
int main()
{
    int c1, c2, c3, c4;
    cout << "enter the prices";
    cin >> c1 >> c2 >> c3 >> c4;

    int n;
    cout << "enter the number of rickshaw";
    cin >> n;

    int m;
    cout << "enter the number of cabs";
    cin >> m;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int r = 0;
    for (int i = 0; i < n; i++)
    {
        r = r + min(a[i] * c1, c2);
    }
    int total_r = min(r, c3);

    int c = 0;
    for (int i = 0; i < m; i++)
    {
        c = c + min(b[i] * c1, c2);
    }

    int total_c = min(c, c3);
    int total = min((total_c + total_r), c4);

    cout << "min price is" << total;
}