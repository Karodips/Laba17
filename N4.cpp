#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i, max, MaxX, MaxY, n;
	max = 0;
	MaxX = 0;
	MaxY = 0;
	cin >> n;
	int* x = new int[n];
	int* y = new int[n];
	for (i = 0; i < n; i++) {
		cout << "x" << i + 1 << " ";
		cin >> x[i];
		cout << "y" << i + 1 << " ";
		cin >> y[i];
	}
	for (i = 0; i < n; i++) {
		if (x[i] < 0 && y[i]>0 && sqrt(x[i] * x[i] + y[i] * y[i]) > max) {
			MaxX = x[i];
			MaxY = y[i];
			max = sqrt(x[i] * x[i] + y[i] * y[i]);
		}
	}
	cout << MaxX << " " << MaxY;

	cout << endl;
	system("pause");
	return 0;
}
