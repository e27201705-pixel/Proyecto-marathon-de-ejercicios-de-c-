#include <iostream>
#include <vector>
#include <queue>
#define INF 1e9
using namespace std;

typedef pair<int, int> pii;

void dijkstra(int origen, vector<vector<pii>>& grafo, vector<int>& dist) {
    dist[origen] = 0;
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0, origen});

    while (!pq.empty()) {
        int costo = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (costo > dist[u]) continue;

        for (auto& edge : grafo[u]) {
            int v = edge.first;
            int peso = edge.second;
            if (dist[u] + peso < dist[v]) {
                dist[v] = dist[u] + peso;
                pq.push({dist[v], v});
            }
        }
    }
}

int main() {
    int n = 5; // nodos
    vector<vector<pii>> grafo(n);

    // grafo dirigido con pesos
    grafo[0].push_back({1, 10});
    grafo[0].push_back({3, 5});
    grafo[1].push_back({2, 1});
    grafo[1].push_back({3, 2});
    grafo[2].push_back({4, 4});
    grafo[3].push_back({1, 3});
    grafo[3].push_back({2, 9});
    grafo[3].push_back({4, 2});
    grafo[4].push_back({0, 7});
    grafo[4].push_back({2, 6});

    vector<int> dist(n, INF);
    dijkstra(0, grafo, dist);

    cout << "Distancias desde el nodo 0:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Nodo " << i << ": " << dist[i] << endl;
    }
    return 0;
}
