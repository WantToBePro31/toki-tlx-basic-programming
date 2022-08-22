#include <bits/stdc++.h>
using namespace std;

int main()
{
    double num;
    int floor, ceil;

    cin >> num;
    if (num == trunc(num))
    {
        floor = num;
        ceil = num;
    }
    else if (num > 0.0)
    {
        floor = trunc(num);
        ceil = trunc(num) + 1;
    }
    else if (num < 0.0)
    {
        floor = trunc(num) - 1;
        ceil = trunc(num);
    }
    cout << floor << " " << ceil << endl;
}