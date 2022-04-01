#pragma once

/********************************************//**
 * @brief Rectangle class....
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
		* @brief This function.....
		* @author Liam
		* @param a an integer argument
		* @return row an integer argument
		* @date 2022-04-01
		*/
	int setRow(int a) { 
		row = a;

	}

	  /**
		* @brief This function.....
		* @author Liam
		* @param a an integer argument
		* @return col an integer argument
		* @date 2022-04-01
		*/
	void setCol(int a) { 
		col = a;

	}

	/**
	  * @brief This function.....
	  * @author Liam
	  * @param No arguments
	  * @return NULL no return type void
	  * @date 2022-04-01
	  */
	void Area() { 
		int area = row * col;

		cout << "Rectangle Area: " << area << endl;
	}

	  /**
		* @brief This function.....
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