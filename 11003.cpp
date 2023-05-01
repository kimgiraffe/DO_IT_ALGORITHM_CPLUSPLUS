#include <iostream>
#include <deque>

using namespace std;

typedef pair<int, int> Node;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, L;
	cin >> N >> L;

	deque<Node> dq;

	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;

		while (dq.size() && dq.back().first > tmp) {
			dq.pop_back();
		}
		dq.push_back(Node(tmp, i));

		if (dq.front().second <= i - L) {
			dq.pop_front();
		}
		cout << dq.front().first << "\n";
	}

	return 0;
}