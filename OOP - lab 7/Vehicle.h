#pragma once
#include "Header.h"
#include "Shape.h"

class Vehicle : public Shape {
public:
	virtual void Drive() = 0 {
	}
};