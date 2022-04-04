#pragma once

/********************************************//**
 * @brief Class called Rectangle inherits from class Shape 
 * 
 * Class Rectangle features two private integer variables ' row ' and ' col ' \n
 * This class will create my rectangles with the defined lengths and widths \n
 * The class will be able to calculate the area of the rectangle defined and print a visual of the rectangle
 * 
 * @authors Liam
 * @date 2022-04-01
 ***********************************************/

#include "Header.h"
#include "Shape.h"

class Rectangle : public Shape {  
	int row = 0;
	int col = 0;

public:

	  /**
		* @brief This function is used to set the private variable row to the integer that got passed as a argument
		* @author Liam
		* @param a an integer argument
		* @return row an integer argument
		* @date 2022-04-01
		*/
	int setRow(int a) { 
		row = a; 
		return a; 
	}

	  /**
		* @brief This function is used to set the private variable col to the integer that got passed as a argument
		* @author Liam
		* @param a an integer argument
		* @return col an integer argument
		* @date 2022-04-01
		*/
	int setCol(int a) { 
		col = a;
		return a; 
	}

	/**
	  * @brief This function is used to calculate the area between the private variables ' row ' and ' col '
	  * @author Liam
	  * @param No arguments
	  * @return area an integer argument
	  * @date 2022-04-01
	  */
	int Area() { 
		int area = row * col;

		cout << "Rectangle Area: " << area << endl;
		return area;
	}

	  /**
		* @brief This function prints the rectangle shape by iterating through a for loop and printing a ' * ' according to the length and width of the private variables ' row ' and ' col '
		* @author Liam
		* @param No arguments
		* @return NULL no return type void
		* @date 2022-04-01
		*/
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