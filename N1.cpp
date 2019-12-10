#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i, n, ZapolnyatelMassivaSerii, SchetSerii;
	cin >> n;
	SchetSerii = 0;
	ZapolnyatelMassivaSerii = 1;
	int* arr = new int[n];
	int* seriya = new int[n];
	int* chisla = new int[n];
	for (i = 0; i < n; i++) cin >> arr[i];
	for (i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
	for (i = 0; i < n-1; i++) {
		if (arr[i] == arr[i + 1]) {
			ZapolnyatelMassivaSerii ++;
		}
		else {
			seriya[SchetSerii] = ZapolnyatelMassivaSerii;
			ZapolnyatelMassivaSerii = 1;
			SchetSerii++;
		}
		chisla[i] = arr[i];
	}
	if (arr[n - 1] == arr[n - 2]) {
		seriya[SchetSerii] = ZapolnyatelMassivaSerii;
	}
	else {
		seriya[SchetSerii] = 1;
	}
	chisla[n - 1] = arr[n - 1];
	for (i = 0; i < n; i++) {
		if (seriya[i] == -842150451) break;
		else cout << seriya[i] << " ";
	}
	cout << endl;
	for (i = 0; i < n; i++) cout << chisla[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}
