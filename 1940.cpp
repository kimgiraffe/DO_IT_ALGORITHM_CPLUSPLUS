#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<int> v(N, 0);

	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	int start_index = 0;
	int end_index = N - 1;
	int count = 0;

	while (start_index < end_index) {
		if (v[start_index] + v[end_index] > M) {
			end_index--;
		}
		else if (v[start_index] + v[end_index] < M) {
			start_index++;
		}
		else {
			count++;
			start_index++;
			end_index--;
		}
	}
	cout << count << "\n";

	return 0;
}