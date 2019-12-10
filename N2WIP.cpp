#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i, n, NasMnogo, Perviy, Posledniy, l;
	cin >> n >> l;
	NasMnogo = 1;
	Perviy = 0;
	Posledniy = 0;
	int* arr = new int[n];
	for (i = 0; i < n; i++) cin >> arr[i];
	for (i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
	for (i = 0; i < n-1; i++) {
		if (arr[i] == arr[i + 1]) {
			NasMnogo++;
			if (NasMnogo == 1) {
				Perviy = i;
				Posledniy = i;
			}
			else {
				Posledniy = i;
			}
		}
		else {
			for (Perviy; Perviy < Posledniy + 1; Perviy ++) arr[Perviy] = 0;
		}
	}
	for (i = 0; i < n; i++) cout << arr[i];
	cout << endl;
	system("pause");
	return 0;
}
