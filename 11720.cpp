#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, sum = 0;
	string str;

	cin >> N;
	cin >> str;
	
	for (int i = 0; i < str.length(); i++) {
		sum += str[i] - '0';
	}

	cout << sum << '\n';

	return 0;
}