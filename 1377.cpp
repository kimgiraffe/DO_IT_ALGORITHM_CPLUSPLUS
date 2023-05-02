#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<pair<int, int>> v(N);

	for (int i = 0; i < N; i++) {
		cin >> v[i].first;
		v[i].second = i;
	}

	sort(v.begin(), v.end());

	int MAX = 0;

	for (int i = 0; i < N; i++) {
		if (MAX < v[i].second - i) {
			MAX = v[i].second - i;
		}
	}
	cout << MAX + 1 << "\n";

	return 0;
}