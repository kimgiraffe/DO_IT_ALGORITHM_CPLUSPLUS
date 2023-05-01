#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> v(n, 0);
	vector<char> resultV;

	stack<int> S;
	int num = 1;
	bool result = true;

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}


	for (int i = 0; i < v.size(); i++) {
		int su = v[i];

		if (su >= num) {
			while (su >= num) {
				S.push(num++);
				resultV.push_back('+');
			}
			S.pop();
			resultV.push_back('-');
		}
		else {
			int n = S.top();
			S.pop();

			if (n > su) {
				cout << "NO";
				result = false;
				break;
			}
			else {
				resultV.push_back('-');
			}
		}
	}

	if (result) {
		for (int i = 0; i < resultV.size(); i++) {
			cout << resultV[i] << '\n';
		}
	}

	return 0;
}