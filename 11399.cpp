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

	vector<int> S(N, 0);
	vector<int> A(N, 0);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	for (int i = 1; i < N; i++) {
		int insert_p = i;
		int insert_v = A[i];
		for (int j = i - 1; j >= 0; j--) {
			if (A[j] < A[i]) {
				insert_p = j + 1;
				break;
			}
			if (j == 0) {
				insert_p = 0;
			}
		}
		for (int j = i; j > insert_p; j--) {
			A[j] = A[j - 1];
		}
		A[insert_p] = insert_v;
	}

	S[0] = A[0];

	for (int i = 1; i < N; i++) {
		S[i] = S[i - 1] + A[i];
	}

	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum = sum + S[i];
	}
	cout << sum;

	return 0;
}