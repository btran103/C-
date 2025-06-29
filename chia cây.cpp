#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 5;
vector<int> adj[MAXN];
int n, dist[MAXN];
bool isPrime[MAXN];

void dfs(int u, int p) {
    for (int v : adj[u]) {
        if (v != p) {
            dist[v] = dist[u] + 1;
            dfs(v, u);
        }
    }
}

bool is_prime(int x) {

}

int main() {
 
    dfs(1, -1);

    int count = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            if (isPrime[dist[i] + dist[j]]) {
                count++;
            }
        }
    }

    double total_pairs = n * (n - 1) / 2.0;
    double probability = count / total_pairs;

    cout  << fixed << setprecision(6) << probability << endl;

    return 0;
}
