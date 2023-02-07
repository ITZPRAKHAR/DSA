#include <iostream>
#include <vector>

using namespace std;

// for the undirected graph
void addEdge(vector<int> graph[], int source, int destination)
{
    graph[source].push_back(destination);
    graph[destination].push_back(source);
}

// DFS

void dfs(vector<int> graph[], vector<bool> &visited, int current_node)
{

    cout << "Processing Node " << current_node << endl;
    visited[current_node] = true;
    for (int neighbour : graph[current_node])
    {
        if (!visited[neighbour])
        {
            dfs(graph, visited, neighbour);
        }
    }
    cout << "there are no more unporcessed nodes are left in adjacent of " << current_node << endl;
}

int main()
{

    vector<int> graph[4];

    vector<bool> visited(4, false);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 3);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);

    int start_node = 0;

    dfs(graph, visited, start_node);

    return 0;
}