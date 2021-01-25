// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

#define MAX 5
vector<string> findPath(int m[MAX][MAX], int n);

// Position this line where user code will be pasted.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int m[MAX][MAX];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> m[i][j];
            }
        }

        vector<string> result = findPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
} // } Driver Code Ends

bool isSafe(int m[][MAX], int n, int i, int j, bool visited[][MAX])
{
    if (i == -1 || i == n || j == -1 ||
        j == n || visited[i][j] || m[i][j] == 0)
        return false;

    return true;
}

void solveUntil(int m[][MAX], int n, int i, int j, bool visited[][MAX], string &path, vector<string> &ans)
{
    if (i < 0 || i >= n || j < 0 || j >= n || visited[i][j] || m[i][j] == 0)
        return;

    if (i == n - 1 && j == n - 1)
    {
        ans.push_back(path);
        return;
    }

    visited[i][j] = true;

    if (isSafe(m, n, i - 1, j, visited))
    {
        path.push_back('U');
        solveUntil(m, n, i - 1, j, visited, path, ans);
        path.pop_back();
    }

    if (isSafe(m, n, i + 1, j, visited))
    {
        path.push_back('D');
        solveUntil(m, n, i + 1, j, visited, path, ans);
        path.pop_back();
    }

    if (isSafe(m, n, i, j + 1, visited))
    {
        path.push_back('R');
        solveUntil(m, n, i, j + 1, visited, path, ans);
        path.pop_back();
    }

    if (isSafe(m, n, i, j - 1, visited))
    {
        path.push_back('L');
        solveUntil(m, n, i, j - 1, visited, path, ans);
        path.pop_back();
    }

    visited[i][j] = false;
}

vector<string> findPath(int m[MAX][MAX], int n)
{

    bool visited[n][MAX];
    memset(visited, false, sizeof(visited));

    string path;
    vector<string> ans;

    solveUntil(m, n, 0, 0, visited, path, ans);

    sort(ans.begin(), ans.end());

    return ans;
}
