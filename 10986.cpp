#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	long answer = 0;
	cin >> N >> M;

	vector<long> S(N, 0);
	vector<long> C(M, 0);

	cin >> S[0];

	for (int i = 1; i < N; i++) {
		int tmp;
		cin >> tmp;
		S[i] = S[i - 1] + tmp;
	}
	
	for (int i = 0; i < N; i++) {
		int remainder = S[i] % M;
		if (remainder == 0) {
			answer++;
		}
		C[remainder]++;
	}

	for (int i = 0; i < M; i++) {
		if (C[i] > 1) {
			answer = answer + (C[i] * (C[i] - 1) / 2);
		}
	}

	cout << answer << '\n';

	return 0;
}