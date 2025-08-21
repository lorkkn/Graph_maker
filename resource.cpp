#include "functions.h"

void swaprows(char** Matrix, int a, int b) {
	std::swap(Matrix[a], Matrix[b]);
}

void rotate(int size, char** Matrix) {
	for (int i = 0; i < size/2;i++) {
		swaprows(Matrix, i, size - i - 1);
	}
}

double f(double x) {
	return tan(sin(x));
}

void graphMake(int size,double step) {
	char** Matrix = new char* [size];
	for (int i = 0; i < size; i++) {
		Matrix[i] = new char [size];
	}
	for (int i = 0;i < size;i++) {
		for (int k = 0; k < size; k++) {
			Matrix[i][k]= ' ';
		}
	}

	int point_X = 0;
	double index;
	if (step < 1) index = size * step/2;
	else index = size / 2;
	for (double i = -index; i < index;i+=step) {
		double y = f(i);
		int point_Y = -1;
		for (int k = 0; k < size;k++) {
			point_Y++;
			if (y <= point_Y-size/2) break;

		}
		if (point_Y == size - 1);
		else if (point_Y == 0);
		else Matrix[point_Y][point_X] = '.';
		point_X++;
	}
	rotate(size, Matrix);
	graphPrint(size, Matrix);


}



void graphPrint(int size, char** Matrix) {
	std::cout << "Graph";
	for (int i = 0;i < size;i++) {
		std::cout << "\n";
		for (int k = 0; k < size; k++) {
			std::cout << Matrix[i][k] << " ";
		}
	}
	for (int i = 0; i < size; i++) {
		delete[] Matrix[i];
	}
	delete[] Matrix;
}

