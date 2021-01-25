class Solution
{

public:
#define MAX 1000

    bool isSafe(bool visited[][MAX], int n, int i, int j)
    {
        if (i >= 1 && i <= n && j >= 1 && j <= n && visited[i][j] == 0)
            return true;
        return false;
    }

    int minStepToReachTarget(vector<int> &KnightPos, vector<int> &TargetPos, int N)
    {

        bool visited[MAX][MAX];
        memset(visited, false, sizeof(visited));

        int dis[MAX][MAX] = {0};

        queue<pair<int, int>> q;
        q.push(make_pair(KnightPos[0], KnightPos[1]));

        visited[KnightPos[0]][KnightPos[1]] = 1;

        int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
        int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

        while (!q.empty())
        {
            pair<int, int> curr = q.front();
            q.pop();

            for (int i = 0; i < 8; i++)
            {
                if (isSafe(visited, N, curr.first + dx[i], curr.second + dy[i]))
                {
                    visited[curr.first + dx[i]][curr.second + dy[i]] = true;
                    q.push(make_pair(curr.first + dx[i], curr.second + dy[i]));

                    dis[curr.first + dx[i]][curr.second + dy[i]] = dis[curr.first][curr.second] + 1;
                    if (curr.first + dx[i] == TargetPos[0] && curr.second + dy[i] == TargetPos[1])
                    {
                        return dis[curr.first + dx[i]][curr.second + dy[i]];
                    }
                }
            }
        }
    }
};