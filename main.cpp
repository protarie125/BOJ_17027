#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto v = vector<int>{ 1,2,3 };

	auto g1 = int{ 0 };
	auto g2 = int{ 0 };
	auto g3 = int{ 0 };
	while (0 < (n--)) {
		int a, b, g;
		cin >> a >> b >> g;

		swap(v[a - 1], v[b - 1]);

		if (1 == v[g - 1]) {
			++g1;
		}
		else if (2 == v[g - 1]) {
			++g2;
		}
		else if (3 == v[g - 1]) {
			++g3;
		}
	}

	cout << max({ g1, g2, g3 });

	return 0;
}