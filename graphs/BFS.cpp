    #include <iostream>
    #include <vector>
    #include <queue>

    using namespace std;

    const int TOTAL_NODES = 8;

    void addEdge(vector<int> graph[], int source, int destination)
    {
        // for undirected graph
        graph[source].push_back(destination);
        graph[destination].push_back(source);
    }

    // BFS

    void bfs(vector<int> graph[], int initial_node)
    {
        queue<int> q;
        vector<bool> visited(TOTAL_NODES, false);

        q.push(initial_node);
        visited[initial_node] = true;

        while (!q.empty())
        {
            int front_element = q.front();
            q.pop();
            cout << "Processing element : " << front_element << endl;
            for (int neighbour : graph[front_element])
            {
                if (!visited[neighbour])
                {
                    q.push(neighbour);
                    visited[neighbour] = true;
                }
            }
        }
    }
    int main()
    {
        vector<int> graph[TOTAL_NODES];

        addEdge(graph, 0, 1);
        addEdge(graph, 0, 2);
        addEdge(graph, 0, 3);
        addEdge(graph, 1, 6);
        addEdge(graph, 6, 7);
        addEdge(graph, 2, 5);
        addEdge(graph, 2, 4);

        int initial_node = 2;

        bfs(graph, initial_node);

        return 0;
    }