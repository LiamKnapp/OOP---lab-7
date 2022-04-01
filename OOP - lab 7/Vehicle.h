#pragma once

/********************************************//**
 * @brief Class called Vehicle
 * 
 * this class....
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
	  * this function.....
	  * @author Tony
	  * @param 
	  * @return
	  * @date 2022-04-01
	  */
	virtual void Drive() = 0 {
	}
};