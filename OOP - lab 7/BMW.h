#pragma once
/********************************************//**
 * @brief Class called BMW inherits from class Vehicle
 * 
 * This class has no private variables \n
 * The class will print the a vehicle and a print statement to let the user know the car is driveing
 * 
 * @authors Tony
 * @date 2022-04-01
 ***********************************************/

#include "Header.h"
#include "Vehicle.h"

class BMW :public Vehicle {

public:

	/**
	  * This function will print a BMW brand car when called
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
	  * This function will print that the BMW vehicle is driveing when called
	  * @author Tony
	  * @param no arguments
	  * @return NULL type void
	  * @date 2022-04-01
	  */
	void Drive() { 
		cout << "Driving a BMW\n" << endl; 
	}
};