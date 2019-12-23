#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i, n, NasMnogo, Perviy, Posledniy, l, ZeroSaviour;
	cin >> n >> l;
	ZeroSaviour = 0;
	NasMnogo = 1;
	Perviy = 0;
	Posledniy = 0;
	int* arr = new int[n];
	for (i = 0; i < n; i++) cin >> arr[i];
	for (i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
	for (i = 0; i < n - 1; i++) {
		if (arr[i] == 0 && arr[i] != arr[i + 1]) ZeroSaviour++;
		if (arr[i] == arr[i + 1]) {
			if (NasMnogo == 1) {
				Perviy = i;
				Posledniy = i+1;
			}
			else {
				Posledniy = i + 1;
			}
			NasMnogo++;
		}
		else if (NasMnogo > l) {
			for (Perviy; Perviy < Posledniy + 1; Perviy++) arr[Perviy] = 0;
			NasMnogo = 1;
		}
		else
		{
			NasMnogo = 1;
		}
	}
	if (arr[n - 2] == arr[n - 1] && NasMnogo > l) {
		for (Perviy; Perviy < Posledniy + 1; Perviy++) arr[Perviy] = 0;
	}
	NasMnogo = 1;
	for (i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
	 for (i = 0; i < n; i++) {
		 if (arr[i] == 0) {
			 if (NasMnogo == 1) {
				 Perviy = i;
				 Posledniy = i;
			 }
			 else {
				 Posledniy = i;
			 }
			 NasMnogo++;
		 }
		 else if (NasMnogo > l) {
			 for (Perviy; Perviy < Posledniy + 1; Perviy++) {
				 arr[Perviy] = arr[n - 1];
				 n--;
				 for (i = 0; i < n; i++) cout << arr[i] << " ";
				 cout << endl;
			 }
			 NasMnogo = 1;
			 i = -1;
		 }
		 else NasMnogo = 1;
		}

	 if (arr[n-1] == 0 && NasMnogo > l) {
		 for (Perviy; Perviy < Posledniy + 1; Perviy++) n--;
	 }
	 for (i = 0; i < ZeroSaviour; i++) {
		 n++;
		 arr[n - 1] = 0;
	}
	for (i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}
