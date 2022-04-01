#pragma once
#include "Header.h"
#include "Vehicle.h"

class BMW :public Vehicle {

public:

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

	void Drive() {
		cout << "Driving a BMW\n" << endl;
	}
};