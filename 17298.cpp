#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<int> v(N, 0);
	vector<int> ans(N, 0);
	stack<int> S;
	S.push(0);

	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

	for (int i = 1; i < N; i++) {
		while (!S.empty() && v[S.top()] < v[i]) {
			ans[S.top()] = v[i];
			S.pop();
		}
		S.push(i);
	}

	while (!S.empty()) {
		ans[S.top()] = -1;
		S.pop();
	}
	for (int i = 0; i < N; i++) {
		cout << ans[i] << " ";
	}
	return 0;
}