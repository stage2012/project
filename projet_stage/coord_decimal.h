#ifndef COORD_DECIMAL_H
#define COORD_DECIMAL_H

#include <QtGui/QtGui>

class coord_decimal
{
private:
    double longitude;
    double latitude;



public:
    coord_decimal();
    // getteurs
    double getLatitude();
    double getLongitude();


    //seteurs
    void setLatitude(double la);
    void setLongitude(double lo);

    QString toSexaLa(double la);
    QString toSexaLo(double lo);
    void toDecLa(int a, int b, double c);
    void toDecLo(int a, int b, double c);
};

#endif // COORD_DECIMAL_H
