#ifndef POINT_GPS_H
#define POINT_GPS_H

class point_gps
{
private:
    double x;
    double y;

public:
    point_gps();
    double X();
    double Y();
    void setY(double y1);
    void setX(double x1);
};

#endif // POINT_GPS_H
