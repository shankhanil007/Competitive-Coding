class Solution
{
public:
    int find(int a, int parentOf[])
    {
        return parentOf[a] == -1 ? a : find(parentOf[a], parentOf);
    }

    void union_set(int a, int b, int parentOf[])
    {
        int s1 = find(a, parentOf);
        int s2 = find(b, parentOf);

        if (s1 != s2)
        {
            parentOf[s2] = s1;
        }
    }

    int makeConnected(int n, vector<vector<int>> &connections)
    {

        int parentOf[n];

        for (int i = 0; i < n; i++)
        {
            parentOf[i] = -1;
        }

        for (int i = 0; i < connections.size(); i++)
        {
            int x = connections[i][0];
            int y = connections[i][1];
            union_set(x, y, parentOf);
        }

        int comp = 0;

        for (int i = 0; i < n; i++)
        {
            if (parentOf[i] == -1)
            {
                comp++;
            }
        }

        int edges = connections.size();

        if (edges < n - 1)
        {
            return -1;
        }
        else
        {
            return comp - 1;
        }
    }
};