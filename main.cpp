#include <iostream>
#include "headers/classP.h"

int main() {
    std::cout <<"Пункт 1:" << std::endl;
    Class_Point A(3,4);
    double dist=A.Distance();
    std::cout << "Расстояние от нуля до точки: "<<dist << std::endl;

    std::cout <<"Пункт 2:" << std::endl;
    Class_Date DR;
    int y,m,d;
    std::cout <<"Год: " << std::endl;
    std::cin>>y;
    std::cout <<"Месяц: " << std::endl;
    std::cin>>m;
    std::cout <<"День: " << std::endl;
    std::cin>>d;
    DR.setYear(y);
    DR.setMonth(m);
    DR.setDay(d);
    DR.CorrectDay();

    std::cout <<"Пункт 3:" << std::endl;
    Class_Polar B;
    B.setCord(A);
    return 0;
}