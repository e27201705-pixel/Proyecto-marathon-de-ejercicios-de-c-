#include <iostream>
#include <vector>

using namespace std;

bool dfs(int node, vector<vector<int>>& adj, vector<int>& visited, vector<int>& inStack) {
    visited[node] = 1;
    inStack[node] = 1;

    for (int neighbor : adj[node]) {
        if (!visited[neighbor] && dfs(neighbor, adj, visited, inStack))
            return true;
        else if (inStack[neighbor])
            return true;
    }

    inStack[node] = 0;
    return false;
}

bool hasCycle(int n, vector<vector<int>>& adj) {
    vector<int> visited(n, 0);
    vector<int> inStack(n, 0);

    for (int i = 0; i < n; i++) {
        if (!visited[i] && dfs(i, adj, visited, inStack))
            return true;
    }
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    if (hasCycle(n, adj)) {
        cout << "El grafo tiene un ciclo." << endl;
    } else {
