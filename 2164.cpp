#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	queue<int> S;
	for (int i = 1; i <= N; i++) {
		S.push(i);
	}

	while (S.size() > 1) {
		S.pop();
		S.push(S.front());
		S.pop();
	}

	cout << S.front();

	return 0;
}