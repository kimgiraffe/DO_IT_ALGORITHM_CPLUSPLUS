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
	vector<int> v(N, 0);

	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	int result = 0;

	for (int k = 0; k < N; k++) {
		long find = v[k];
		int i = 0;
		int j = N - 1;

		while (i < j) {
			if (v[i] + v[j] == find) {
				if (i != k && j != k) {
					result++;
					break;
				}
				else if (i == k) {
					i++;
				}
				else if (j == k) {
					j--;
				}
			}
			else if (v[i] + v[j] < find) {
				i++;
			}
			else {
				j--;
			}
		}
	}

	cout << result << "\n";

	return 0;
}