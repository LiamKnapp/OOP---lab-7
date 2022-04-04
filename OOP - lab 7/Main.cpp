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

 /**
   * @brief This function will print to the console any vehicle or shape passed to it.
   * @author Ilyas
   * @param A drawable object
   * @return No return
   * @date 2022-04-04
   */
void Draw(Drawable& d) {
    d.Draw();
}

/**
   * @brief This function will display that the vehicle is driving.
   * @author Ilyas
   * @param A vehicle object
   * @return No return
   * @date 2022-04-04
   */
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