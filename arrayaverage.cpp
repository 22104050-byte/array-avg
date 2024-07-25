#include <iostream>
using namespace std;
int main()
{
    int n, i, sum;
    sum = 0;
    cout << "enter array size: ";
    cin >> n;
    int ar[n];
    cout << "enter array elements";
    for (i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
    }
    cout << "the average is: " << sum / n;
}