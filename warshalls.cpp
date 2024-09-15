#include <iostream>
using namespace std;

void Warshall(int graph[20][20], int n) 
{
    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                graph[i][j] = (graph[i][j] || (graph[i][k] && graph[k][j]));

    cout << "Transitive Closure Matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << graph[i][j] << "\t";
        }
        cout << endl;
    }
}
int main() {
    int n, graph[20][20];
    cout << "Enter the number of nodes: ";
    cin >> n;

    cout << "Enter the adjacency matrix:\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> graph[i][j];
    Warshall(graph, n);
    return 0;
}
    Warshall(graph);
    return 0;
}
*/
