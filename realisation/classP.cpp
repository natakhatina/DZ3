#include "../headers/classP.h"
#include <math.h>

int Class_Point::getX() {
    return x;
}

int Class_Point::getY(){
    return y;
}

Class_Point::Class_Point(int x1, int y1) {
    x=x1;
    y=y1;
}

double Class_Point::Distance (){
    double dist=sqrt(pow(x,2)+pow(y,2));
    return dist;
}