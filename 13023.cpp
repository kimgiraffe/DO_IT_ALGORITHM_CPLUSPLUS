#include <iostream>
#include <vector>

using namespace std;

static vector<vector<int>> v;
static vector<bool> visited;
static bool arrive;
void DFS(int n, int depth);

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	arrive = false;

	v.resize(N);
	visited = vector<bool>(N, false);

	for (int i = 1; i <= M; i++) {
		int s, e;
		cin >> s >> e;
		v[s].push_back(e);
		v[e].push_back(s);
	}

	for (int i = 0; i < N; i++) {
		DFS(i, 1);
		if (arrive) break;
	}

	if (arrive) cout << 1 << "\n";
	else cout << 0 << "\n";

	return 0;
}

void DFS(int n, int depth) {
	if (depth == 5 || arrive) {
		arrive = true;
		return;
	}

	visited[n] = true;

	for (int i : v[n]) {
		if (!visited[i]) {
			DFS(i, depth + 1);
		}
	}
	visited[n] = false;
}