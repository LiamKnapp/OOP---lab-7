#pragma once
#include "Header.h"
#include "Vehicle.h"

class MAZDA :public Vehicle {

public:

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

	void Drive() {
		cout << "Driving a Mazda" << endl;
	}
};