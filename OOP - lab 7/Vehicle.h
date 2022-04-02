#pragma once

/********************************************//**
 * @brief Class called Vehicle inherits from class Shape
 * 
 * This class only contains one function that all our car companies will need to use that being a virutal void
 * 
 * @authors Liam
 * @authors Ilyas
 * @authors Tony
 * @date 2022-04-01
 ***********************************************/

#include "Header.h"
#include "Shape.h"

class Vehicle : public Shape {
public:
	/**
	  * This function will let the cars start driveing when called.
	  * @author Tony
	  * @param 
	  * @return
	  * @date 2022-04-01
	  */
	virtual void Drive() = 0 {
	}
};