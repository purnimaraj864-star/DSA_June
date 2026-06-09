#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "size";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            int count = 0;
            for (int k = i; a[k] == 1; k++)
            {
                count = count + 1;
            }
            if (count > max)
            {
                max = count;
            }
        }
    }
    cout << max;
}
