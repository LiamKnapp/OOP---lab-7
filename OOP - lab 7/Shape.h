#pragma once

/********************************************//**
 * @brief Class called Shape
 * 
 * This class contains only one function that being a virtual void that will allow the shapes to be drawn
 * 
 * @authors Liam
 * @authors Ilyas
 * @authors Tony
 * @date 2022-04-01
 ***********************************************/

#include "Header.h"

class Shape {
public:
	/**
	  * This function will let the shapes be drawn when called
	  * @author Ilyas
	  * @param
	  * @return
	  * @date 2022-04-01
	  */
	virtual void Draw() = 0 {
	}
};