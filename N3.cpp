#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int i, n, NasMnogo, Perviy, Posledniy, k, SchetSerii, Perviyk, FoundPer, Posledniyk, Rookie;
	SchetSerii = 0;
	NasMnogo = 1;
	FoundPer = 0;
	Perviy = 0;
	Posledniy = 0;
	cin >> n >> k;
	int* arr = new int[n];
	for (i = 0; i < n; i++) cin >> arr[i];
	for (i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
	for (i = 0; i < n - 1; i++) {
		if (arr[i] == arr[i + 1]) {
			if (NasMnogo == 1) {
				Perviy = i;
				Posledniy = i + 1;
				SchetSerii++;
				if (SchetSerii == k && FoundPer == 0) {
					Perviyk = i;
					FoundPer = 1;
				}
			}
			else {
				Posledniy = i + 1;
			}
			NasMnogo++;
		}
		else if (NasMnogo > 1 && SchetSerii == k) {
			Posledniyk = i;
			NasMnogo = 1;
		}
		else
		{
			NasMnogo = 1;
		}
	}
	if (arr[n - 2] == arr[n - 1] && SchetSerii == k) {
		for (i = 0; i < n; i++) cout << arr[i] << " ";
		cout << endl;
	}
	else if (k < SchetSerii) {
		if (abs(Perviy - Posledniy) > abs(Perviyk - Posledniyk)) {
			for (Perviyk; Perviyk < Posledniyk + 1; Perviyk++) {
				Rookie = arr[Perviy];
				arr[Perviy] = arr[Perviyk];
				arr[Perviyk] = Rookie;
				Perviy++;
			}


		}
		else if (abs(Perviy - Posledniy) < abs(Perviyk - Posledniyk)) {
			for (Perviy; Perviy < Posledniy + 1; Perviy++) {
				Rookie = arr[Perviy];
				arr[Perviy] = arr[Perviyk];
				arr[Perviyk] = Rookie;
				Perviy++;
			}
		}
		else if (abs(Perviy - Posledniy) == abs(Perviyk - Posledniyk)) {
			for (Perviyk; Perviyk < Posledniyk + 1; Perviyk++) {
				Rookie = arr[Perviy];
				arr[Perviy] = arr[Perviyk];
				arr[Perviyk] = Rookie;
				Perviy++;
			}
		}
	}
	else cout << "Серия не найдена";

	for (i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}
