#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;

    cout << (a + b) % c << '\n';
    cout << (a % c + b % c) % c << '\n';
    cout << (a * b) % c << '\n';
    cout << (a % c * b % c) % c << '\n';

    return 0;
}