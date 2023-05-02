#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	cin >> str;

	int N = str.size();
	vector<int> v(N);

	for (int i = 0; i < N; i++) {
		v[i] = str[i] - '0';
	}

	for (int i = 0; i < N; i++) {
		int MAX = i;
		for (int j = i + 1; j < N; j++) {
			if (v[j] > v[MAX]) {
				MAX = j;
			}
		}
		if (v[i] < v[MAX]) {
			int tmp = v[i];
			v[i] = v[MAX];
			v[MAX] = tmp;
		}
	}

	for (int i = 0; i < N; i++) {
		cout << v[i];
	}

	return 0;
}