#pragma once

/********************************************//**
 * @brief Class called Circle inherits from class Shape
 * 
 * Class circle features one private integer variable ' col ' \n
 * This class will create my circles with the defined circumference \n
 * The class will be able to calculate the area of the circle defined and print a visual of the circle
 * 
 * @authors Ilyas
 * @date 2022-04-01
 ***********************************************/

#include "Header.h"
#include "Shape.h"

class Circle :public Shape {  
	int col = 0; 

public:

	/**
	  * @brief This function will set the private int value col to the value specified by the function parameter
	  * @authors Ilyas
	  * @authors Liam
	  * @param a an integer argument
	  * @return col an integer argument
	  * @date 2022-04-01
	  */
	int setCol(int a) { 
		col = a; 
		return col;
	}

	/**
	  * @brief This function calculates the are of the circle by finding the radius then multiplying pi to the radius power of 2
	  * @author Ilyas
	  * @authors Liam
	  * @param no arguments
	  * @return NULL type void
	  * @date 2022-04-01
	  */
	void Area() { 

		//find radius
		int rad = col / 2; /// int value rad. to find the radius

		//find area
		double area = 3.14 * pow(rad, 2);

		cout << "Circle Area: " << area << endl;
	}

	/**
	  * @brief This function will draw the circle shape given its size. It will use for loops to iterate through each point where it needs to place a ' * ' to create the correct circle.
	  * @author Ilyas
	  * @authors Liam
	  * @param no arguments
	  * @return NULL type void
	  * @date 2022-04-01
	  */
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