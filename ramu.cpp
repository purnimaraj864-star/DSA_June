#include <iostream>
using namespace std;
int main()
{
    int c1, c2, c3, c4;
    cout << "Enter the prices";
    cin >> c1 >> c2 >> c3 >> c4;
    int n;
    cout << "Enter the number of rickshaws";
    cin >> n;
    int m;
    cout << "Enter the number of cabs";
    cin >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number of times rick used";
        cin >> a[i];
    }
    int b[m];
    for (int j = 0; j < m; j++)
    {
        cout << "Enter the number of times cab used";
        cin >> b[j];
    }
    int rick = 0;
    for (int i = 0; i < n; i++)
    {
        rick = rick + min(a[i] * c1, c2);
    }
    int total_rickshaw = min(rick, c3);
    int cab = 0;
    for (int j = 0; j < m; j++)
    {
        cab = cab + min(b[j] * c1, c2);
    }
    int total_cab = min(cab, c3);
    int total = min((total_cab + total_rickshaw), c4);
    cout << "Min price is " << total;
}