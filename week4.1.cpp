#include<iostream>
using namespace std;
void loop(int);

int main() {
	int x;
	for (x = 1; x <= 10001; x++) {

		loop(x);
	}

	return 0;
}

void loop(int x) {
	struct koop {
		int x[2];
		int ansplus;
	};
	koop L;
	L.x[1] = 1;
	L.x[0] = x;
	L.ansplus = 0;
	for (L.x[1] = 1; L.x[1] <= L.x[0]; L.x[1]++)
	{


		if ((L.x[0] % L.x[1]) == 0 && L.x[0] != L.x[1])
		{

			L.ansplus = L.ansplus + L.x[1];

		}
		else if (L.ansplus == L.x[0]) {
			cout << L.ansplus << endl;
			L.ansplus = 0;
			break;
		}
		else if (L.ansplus != L.x[0] && L.x[0] == L.x[1]) {
			L.ansplus = 0;
		}
		else {}

	}
}