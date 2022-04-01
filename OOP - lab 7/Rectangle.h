#pragma once
#include "Header.h"
#include "Shape.h"

class Rectangle : public Shape {
	int row = 0;
	int col = 0;

public:

	void setRow(int a) {
		row = a;

	}

	void setCol(int a) {
		col = a;

	}

	void Area() {
		int area = row * col;

		cout << "Rectangle Area: " << area << endl;
	}

	void Draw() {

		char ch = '*';
		int i, j;
		for (i = 1; i <= row; i++) {
			for (j = 1; j <= col; j++) {
				if (i == 1 || i == row || j == 1 || j == col) {
					cout << ch;
				}
				else {
					cout << " ";
				}
			}
			cout << "\n";
		}
	}

};