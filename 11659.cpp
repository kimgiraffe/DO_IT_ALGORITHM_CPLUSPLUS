#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	int a, b;
	int S[100001] = {};

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		int tmp;
		cin >> tmp;
		S[i] = S[i-1] + tmp;
	}

	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		cout << S[b] - S[a - 1] << '\n';
	}


	return 0;
}