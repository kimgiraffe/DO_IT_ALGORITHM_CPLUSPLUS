#include <iostream>

using namespace std;

static int N;
void DFS(int number, int digit);
bool isPrime(int num);

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	DFS(2, 1);
	DFS(3, 1);
	DFS(5, 1);
	DFS(7, 1);

	return 0;
}

void DFS(int number, int digit) {
	if (digit == N) {
		if (isPrime(number)) {
			cout << number << "\n";
		}
		return;
	}
	for (int i = 1; i <= 9; i++) {
		if (i % 2 == 1 && isPrime(number * 10 + i)) {
			DFS(number * 10 + i, digit + 1);
		}
	}
}

bool isPrime(int num) {
	for (int i = 2; i < num / 2; i++) {
		if (num % i == 0) return false;
	}
	return true;
}