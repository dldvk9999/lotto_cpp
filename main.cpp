#include <iostream>
#include <random>
#include <vector>
using namespace std;

int main(void) {
	// Random seed generator
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis(1, 45);

	vector<int> num(5);

	for (int index = 0; index < 5; index++) {
		for (int i = 0; i < 5; i++) {
			int tmp = dis(gen);
			if (find(num.begin(), num.end(), tmp) != num.end()) i--;
			else num[i] = tmp;
		}
		
		sort(num.begin(), num.end());

		for (int i = 0; i < 5; i++)
			cout << num[i] << "\t";
		cout << endl;
	}
	return 0;
}