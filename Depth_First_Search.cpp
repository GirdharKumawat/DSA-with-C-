    
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Graph
{

public:
    vector<vector<int> > adjList;

    Graph(vector<pair<int, int> > &edges, int n)
    {
        adjList.resize(n);

        for (int i = 0; i < edges.size(); i++)
        {
            adjList[edges[i].first].push_back(edges[i].second);
            adjList[edges[i].second].push_back(edges[i].first);
        }
    }
};


void DFS_recursive(Graph &graph, int node, vector<int> &visited, vector<int> &ans)
{
    ans.push_back(node);
    visited[node] = 1;

    for (int i = 0; i < graph.adjList[node].size(); i++)
    {
        if (!visited[graph.adjList[node][i]])
        {
            BFS_recursive(graph, graph.adjList[node][i], visited, ans);
        }
    }
}
int main()
{

    vector<pair<int, int> > edges;

    edges.push_back(make_pair(1, 2));
    edges.push_back(make_pair(1, 3));
    edges.push_back(make_pair(1, 4));
    edges.push_back(make_pair(2, 5));
    edges.push_back(make_pair(2, 6));
    edges.push_back(make_pair(5, 9));
    edges.push_back(make_pair(5, 10));
    edges.push_back(make_pair(4, 7));
    edges.push_back(make_pair(4, 8));
    edges.push_back(make_pair(7, 11));
    edges.push_back(make_pair(7, 12));

    int n = 13;
    Graph graph(edges, n);

    vector<int> ans;
    vector<int> visited(n,0);
 
    DFS_recursive(graph, 1, visited, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        if(ans[i]==-1)
        cout << endl;
        else
        cout << ans[i] << " ";
    }
}