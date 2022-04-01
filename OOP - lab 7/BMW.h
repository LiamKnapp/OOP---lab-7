#pragma once
/********************************************//**
 * @brief BMW class....
 * @authors Tony
 * @date 2022-04-01
 ***********************************************/

#include "Header.h"
#include "Vehicle.h"

class BMW :public Vehicle {

public:

	/**
	  * this function.....
	  * @author Tony
	  * @param no arguments
	  * @return NULL type void
	  * @date 2022-04-01
	  */
	void Draw() { 
		cout << "BMW" << endl;
		cout << "\t           ** * * * * *" << endl;
		cout << "\t         *  *       *   *" << endl;
		cout << "\t       *    *       *     *" << endl;
		cout << "\t*  *  * *  *  *  * * * *  *  *  * *" << endl;
		cout << "\t*                                 *" << endl;
		cout << "\t* *  * * *            * * *       *" << endl;
		cout << "\t    *  *  *  *  * *  *  *  *  *  *" << endl;
		cout << "\t      *  *             *  *" << endl;

	}

	/**
	  * this function.....
	  * @author Tony
	  * @param no arguments
	  * @return NULL type void
	  * @date 2022-04-01
	  */
	void Drive() { 
		cout << "Driving a BMW\n" << endl; 
	}
};