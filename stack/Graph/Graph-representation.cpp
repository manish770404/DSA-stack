#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

template <typename T>
class graph{
    public:

    unordered_map<T, list<T>> adj;

    void addedge(T u, T v, bool direction)
    {
        adj[u].push_back(v);

        if(direction == 0)
        {
             adj[v].push_back(u);
        }
    }

    void print()
    {
       for(auto it1 : adj)
       {
        cout << it1.first << " -> ";

        for(auto it2 : it1.second)
        {
            cout << it2 << " ";
        }
        cout << endl;
       }
    }
};

int main()
{
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    int m;
    cout << "Enter the number of edges: ";
    cin >> m;

    graph<int> g;  // Using 'int' as the type for this instance of the graph

    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addedge(u, v, 0);  // Undirected graph with 0 as the direction
    }

    g.print();

    return 0;
}
