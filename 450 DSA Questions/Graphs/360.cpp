class Solution
{
public:
    bool cycleHelper(int node, bool *visited, int parent, vector<int> adj[])
    {

        visited[node] = true;

        // Visit all nbrs of src
        for (auto nbr : adj[node])
        {

            if (!visited[nbr])
            {
                bool cycleFound = cycleHelper(nbr, visited, node, adj);
                if (cycleFound)
                    return 1;
            }
            else
            {
                if (parent != nbr)
                    return 1;
            }
        }

        return 0;
    }
    bool isCycle(int V, vector<int> adj[])
    {

        bool *visited = new bool[V];
        for (int i = 0; i < V; i++)
        {
            visited[i] = false;
        }
        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
                if (cycleHelper(i, visited, -1, adj))
                {
                    return true;
                }
        }
        return false;
    }
};