#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

const int v = 6;

void addedge(vector<int> graph[], int source, int destination)
{

   graph[source].push_back(destination);
   graph[destination].push_back(source);
}

void print_graph(vector<int> graph[])
{

   for (int source = 0; source < v; source++)
   {
      for (int neighbour : graph[source])
      {
         cout << "There is an edge between the " << source << " and " << neighbour << endl;
      }
      cout << endl;
   }
}

int main()
{

   vector<int> graph[v];  

   addedge(graph, 0, 1);
   addedge(graph, 0, 5);
   addedge(graph, 1, 2);
   addedge(graph, 2, 4);
   addedge(graph, 4, 3);
   addedge(graph, 3, 5);
   addedge(graph, 1, 5);

   print_graph(graph);
   return 0;
}