#include <iostream>
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

	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (v[i] > v[j]) {
				int tmp = v[i];
				v[i] = v[j];
				v[j] = tmp;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout << v[i] << "\n";
	}

	return 0;
}