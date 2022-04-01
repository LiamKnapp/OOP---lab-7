#pragma once
#include "Header.h"
#include "Shape.h"

class Circle :public Shape {
	int col = 0;

public:

	void setCol(int a) {
		col = a;
	}

	void Area() {

		//find radius
		int rad = col / 2;

		//find area
		double area = 3.14 * pow(rad, 2);

		cout << "Circle Area: " << area << endl;
	}

	void Draw() {

		int rad = col / 2;
		int w = rad;
		int l = rad * 1.5;
		int y, x;

		char ch = '*';

		for (y = w; y >= -w; y -= 2) {
			for (x = -l; x <= l; x++) {

				int path = sqrt(pow(x, 2) + pow(y, 2));

				if (path == rad) {
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