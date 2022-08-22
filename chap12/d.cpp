#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string kata, str;

    getline(cin, kata);
    str = kata;
    reverse(kata.begin(), kata.end());
    if (kata == str)
        cout << "YA" << endl;
    else
        cout << "BUKAN" << endl;
}