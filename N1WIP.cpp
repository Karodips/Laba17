#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i, n, nspec, ZapolnyatelMassivaSerii, SchetSerii;
	cin >> n;
	nspec = n;
	ZapolnyatelMassivaSerii = 1;
	int* arr = new int[n];
	int* seriya = new int[nspec];
	int* chisla = new int[n];
	for (i = 0; i < n; i++) cin >> arr[i];
	for (i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
	for (i = 0; i < n-1; i++) {
		if (arr[i] = arr[i + 1]) {

		}
	}
	cout << endl;
	system("pause");
	return 0;
}
