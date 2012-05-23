#include "coord_decimal.h"
#include "iostream"
coord_decimal::coord_decimal():longitude(0),latitude(0)
{
}

//accesseurs
double coord_decimal::getLatitude()
{
    return latitude;
}

double coord_decimal::getLongitude()
{
    return longitude;
}


//muttateurs
void coord_decimal::setLatitude(double la)
{
    latitude = la;
}

void coord_decimal::setLongitude(double lo)
{
    longitude = lo;
}

void coord_decimal::toDecLo(int a, int b, double c)
{

    double x = (((double) a) + (((double) b)/60) + ((c/3600)));
    std::cout<<" longitude : "<<x<<std::endl;
    setLongitude(x);

}

void coord_decimal::toDecLa(int a, int b, double c)
{

    double y = (((double) a) + (((double) b)/60) + ((c/3600)));
    std::cout<<" latitude : "<<y<<std::endl;
    setLatitude(y);

}

QString coord_decimal::toSexaLa(double la)
{
    int DLA = (double) la;
    double resDLA = (la - ((double) DLA));
    double resMLA = (resDLA * 60);
    int MLA = (double) resMLA;
    double SLA = ( (resMLA-((int) MLA)) * 60 );


    QString str;
    str= (QString::number(DLA)+"°"+ QString::number(MLA)+"'"+QString::number(SLA)+"''");
    return str;

}


QString coord_decimal::toSexaLo(double lo)
{

    int DLO = (double) lo;
    double resDLO = (lo - ((double) DLO));
    double resMLO = (resDLO* 60);
    int MLO = (double) resMLO;
    double SLO = ( (resMLO-((int) MLO)) * 60 );


    QString str = (QString::number(DLO))+"°"+ QString::number(MLO)+"'"+QString::number(SLO)+"''";
    return str;
}
