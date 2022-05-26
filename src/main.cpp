#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	double x;
	cin >> x;
	while (!(x < 0)) {
		constexpr auto wf = double{ 0.167 };

		cout << fixed << setprecision(2)
			<< "Objects weighing " << x
			<< " on Earth will weigh " << x * wf
			<< " on the moon.\n";

		cin >> x;
	}

	return 0;
}