#pragma once

/********************************************//**
 * @brief Class called Mazda inherits from class Vehicle
 * 
 * This class has no private variables \n
 * The class will print the a vehicle and a print statement to let the user know the car is driveing
 * 
 * @authors Tony
 * @date 2022-04-01
 ***********************************************/

#include "Header.h"
#include "Vehicle.h"

class MAZDA :public Vehicle {

public:

	/**
	  * this function.....
	  * @author Tony
	  * @param no arguments
	  * @return NULL type void
	  * @date 2022-04-01
	  */
	void Draw() { 
		cout << "MAZDA" << endl;
		cout << "\t       * *  * * *" << endl;
		cout << "\t    * *       *    *" << endl;
		cout << "\t  *   *       *     *" << endl;
		cout << "\t* * * *  *  *  * ** *  **  * **" << endl;
		cout << "\t*                              *" << endl;
		cout << "\t*                               *" << endl;
		cout << "\t* ** * * *             *  *     *" << endl;
		cout << "\t   *       *  *  *   *      * * " << endl;
		cout << "\t     *   *             *  *" << endl;

	}

	/**
	  * this function.....
	  * @author Tony
	  * @param no arguments
	  * @return NULL type void
	  * @date 2022-04-01
	  */
	void Drive() {
		cout << "Driving a Mazda" << endl;
	}
};