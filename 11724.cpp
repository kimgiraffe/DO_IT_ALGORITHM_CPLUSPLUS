#include <iostream>
#include <vector>

using namespace std;

vector<int> v[1001];
bool visited[1001];

void DFS(int node);

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	int cnt = 0;
	for (int i = 1; i <= N; i++) {
		if (!visited[i]) {
			DFS(i);
			cnt++;
		}
	}

	cout << cnt << "\n";

	return 0;
}

void DFS(int node) {
	visited[node] = true;

	for (int i = 0; i < v[node].size(); i++) {
		int next = v[node][i];

		if (!visited[next])
			DFS(next);
	}
}