#include "point_gps.h"

point_gps::point_gps():x(0),y(0)
{
}

double point_gps::X() {return x;}
double point_gps::Y() {return y;}

void point_gps::setX(double x1) { x=x1;}
void point_gps::setY(double y1) { y=y1;}
