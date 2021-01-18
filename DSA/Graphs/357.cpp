class Solution
{
public:
    vector<int> bfsOfGraph(int V, vector<int> adj[])
    {

        bool *visited = new bool[V + 100];
        for (int i = 0; i < V; i++)
            visited[i] = false;

        // Create a queue for BFS
        list<int> queue;
        vector<int> ans;

        // Mark the current node as visited and enqueue it
        visited[0] = true;
        queue.push_back(0);

        // 'i' will be used to get all adjacent
        // vertices of a vertex

        while (!queue.empty())
        {
            // Dequeue a vertex from queue and print it
            int s = queue.front();
            ans.push_back(s);
            queue.pop_front();

            // Get all adjacent vertices of the dequeued
            // vertex s. If a adjacent has not been visited,
            // then mark it visited and enqueue it
            for (auto i = adj[s].begin(); i != adj[s].end(); ++i)
            {
                if (!visited[*i])
                {
                    visited[*i] = true;
                    queue.push_back(*i);
                }
            }
        }
        return ans;
    }
};