/********************************************//**
 * @brief Main code that calls on the objects
 * @authors Liam
 * @authors Ilyas
 * @authors Tony
 * @Date 2022-04-01
 ***********************************************/

#include "Header.h"
#include "BMW.h"
#include "Circle.h"
#include "Drawable.h"
#include "Mazda.h"
#include "Rectangle.h"
#include "Shape.h"
#include "Vehicle.h"

//Polymorphic Draw Function, draws any shape or vehicle.
void Draw(Drawable& d) {
    d.Draw();
}
//Polymorphic Drive Function, drives any vehicle.
void Drive(Vehicle& vehicle) {
    vehicle.Drive(); 
}

int main(void)
{
 /*  RECTANGLE STUFF  */
    Rectangle rectangle;
    rectangle.setCol(6);
    rectangle.setRow(4);
    Draw(rectangle); 
    rectangle.Area();

    /*  CIRCLE STUFF  */
    Circle circle;
    circle.setCol(6);
    Draw(circle); 
    circle.Area();

    /* BMW STUFF*/
    BMW bmw;
    Draw(bmw);  
    Drive(bmw);    
    
    /* MAZDA STUFF*/
    MAZDA mazda;
    Draw(mazda); 
    Drive(mazda);   
    return 0; 
}