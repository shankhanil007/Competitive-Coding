class Solution
{
public:
    void dfs_helper(int no, map<int, bool> &visited, vector<int> adj[], vector<int> &ans)
    {
        ans.push_back(no);
        visited[no] = true;

        for (auto i = adj[no].begin(); i != adj[no].end(); ++i)
        {
            if (visited[*i] == false)
            {
                dfs_helper(*i, visited, adj, ans);
            }
        }
    }

    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        map<int, bool> visited;
        for (int i = 0; i < V; i++)
        {
            visited[i] = false;
        }
        vector<int> ans;
        dfs_helper(0, visited, adj, ans);
        return ans;
    }
};