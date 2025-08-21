#include "functions.h"

using namespace std;

int main() {
	while (1) {
		int size;
		cout << "Input mesh size\n";
		cin >> size;
		double step;
		cout << "Input step\n";
		cin >> step;
		system("cls");
		graphMake(size, step);
	}
}