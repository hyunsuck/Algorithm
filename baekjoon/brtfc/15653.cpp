//https://www.acmicpc.net/problem/15653
//https://yabmoons.tistory.com/100?category=838490
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int arr[8];
bool s[8] = {
    false,
};
vector<int> per;
int n, m;
void out()
{
    for (int i = 0; i < per.size(); i++)
    {
        cout << per[i] << ' ';
    }
    cout << '\n';
}
void dfs(int cnt)
{
    if (cnt == m)
        out();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == true)
            continue;
        if (cnt == 0 || per.back() < arr[i])
        {
            s[i] = true;
            per.push_back(arr[i]);
            dfs(cnt + 1);
            per.pop_back();
            s[i] = false;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    dfs(0);
    return 0;
}