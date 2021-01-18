class Solution
{
public:
    bool isCyclicUtil(int v, bool visited[], bool *recStack, vector<int> adj[])
    {

        // Mark the current node as visited and part of recursion stack
        visited[v] = true;
        recStack[v] = true;

        // Recur for all the vertices adjacent to this vertex

        for (auto i : adj[v])
        {
            if (recStack[i] == true)
                return true;

            else if (visited[i] == false)
            {
                bool cycle_mila = isCyclicUtil(i, visited, recStack, adj);
                if (cycle_mila == true)
                {
                    return true;
                }
            }
        }

        recStack[v] = false; // remove the vertex from recursion stack
        return false;
    }
    bool isCyclic(int V, vector<int> adj[])
    {

        bool *visited = new bool[V];
        bool *recStack = new bool[V];
        for (int i = 0; i < V; i++)
        {
            visited[i] = false;
            recStack[i] = false;
        }

        // Call the recursive helper function to detect cycle in different
        // DFS trees
        for (int i = 0; i < V; i++)
            if (isCyclicUtil(i, visited, recStack, adj))
                return true;

        return false;
    }
};