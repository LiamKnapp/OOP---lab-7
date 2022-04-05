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
#include "Drawable.h"

class Shape : public Drawable {  
public:
	/**
	  * This function will calculate the area of any shape. 
	  * @author Tony
	  * @param None
	  * @return None
	  * @date 2022-04-04
	  */
	virtual void Area() = 0 {
	}
};