#include <iostream>
#include <cmath>
#define Z 15

using namespace std;

#if Z > 10

int main() {
	int x;
	int y;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	int w = max(pow(x, 3), pow((x + y), 2));
	cout << "w = " << w;

	return 0;
}
#else

int main() {
	int x, z;
	cout << "x = "; cin >> x;
	cout << "z = "; cin >> z;

	int w = min(abs(x - z), abs(x + z));
	cout << "w = " << w;

	return 0;
}

#endif
