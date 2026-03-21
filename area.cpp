#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Invalid Input";
        return 0;
    }
    int a = 0, b = 1, c;
    cout << a << " " << b << " ";
    for (int i = 2; i < n; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    return 0;
}
