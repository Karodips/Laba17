#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i, Max, MaxXI, MaxYI, n, j, k, a, b, c, MaxXJ, MaxYJ, MaxXK, MaxYK;
	Max = 0;
	MaxXI = 0;
	MaxYI = 0;
	MaxXJ = 0;
	MaxYJ = 0;
	MaxXK = 0;
	MaxYK = 0;
	cin >> n;
	int* x = new int[n];
	int* y = new int[n];
	if (n > 2) {
		for (i = 0; i < n; i++) {
			cout << "x" << i + 1 << " ";
			cin >> x[i];
			cout << "y" << i + 1 << " ";
			cin >> y[i];
		}
		for (i = 0; i < n; i++) {
			for (j = i + 1; j < n; j++) {
				for (k = i + 2; k < n; k++) {
					a = sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2));
					b = sqrt(pow(x[i] - x[k], 2) + pow(y[i] - y[k], 2));
					c = sqrt(pow(x[j] - x[k], 2) + pow(y[j] - y[k], 2));
					if (a < b + c & b < a + c & c < a + b & a + b + c > Max) {

						Max = a + b + c;
						MaxXI = x[i];
						MaxYI = y[i];
						MaxXJ = x[j];
						MaxYJ = y[j];
						MaxXK = x[k];
						MaxYK = y[k];
					}
				}
			}
		}
	}
	cout << MaxXI << " " << MaxYI << endl;
	cout << MaxXJ << " " << MaxYJ << endl;
	cout << MaxXK << " " << MaxYK;

	cout << endl;
	system("pause");
	return 0;
}
