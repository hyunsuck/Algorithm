//https://www.acmicpc.net/problem/15652
//https://yabmoons.tistory.com/123?category=838490
#include <iostream>
#include <vector>
using namespace std;
int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
int s[8];
int n, m;
void dfs(int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << s[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (cnt == 0 || s[cnt - 1] <= arr[i])
        {
            s[cnt] = arr[i];
            dfs(cnt + 1);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    dfs(0);
    return 0;
}