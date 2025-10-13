#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Edge {
    int u, v, weight;
    bool operator<(const Edge& e) const {
        return weight < e.weight;
    }
};

int findParent(int u, vector<int>& parent) {
    if (parent[u] != u)
        parent[u] = findParent(parent[u], parent);
    return parent[u];
}

void unionSets(int u, int v, vector<int>& parent, vector<int>& rank) {
    int rootU = findParent(u, parent);
    int rootV = findParent(v, parent);

    if (rootU != rootV) {
        if (rank[rootU] > rank[rootV])
            parent[rootV] = rootU;
        else if (rank[rootU] < rank[rootV])
            parent[rootU] = rootV;
        else {
            parent[rootV] = rootU;
            rank[rootU]++;
        }
    }
}

int kruskal(int n, vector<Edge>& edges) {
    sort(edges.begin(), edges.end());
    vector<int> parent(n), rank(n, 0);
    for (int i = 0; i < n; i++) parent[i] = i;

    int mstWeight = 0;
    for (const auto& edge : edges) {
        int u = edge.u, v = edge.v;
        if (findParent(u, parent) != findParent(v, parent)) {
            mstWeight += edge.weight;
            unionSets(u, v, parent, rank);
        }
    }
    return mstWeight;
}

int main() {
    int n, m;  // n = número de vértices, m = número de aristas
    cin >> n >> m;

    vector<Edge> edges(m);
    for (int i = 0; i < m; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].weight;
    }

    cout << "Peso del Árbol de Expansión Mínima: " << kruskal(n, edges) << endl;
    return 0;
}


