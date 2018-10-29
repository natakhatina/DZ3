#include "../headers/classP.h"
#include <math.h>
#include <iostream>

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

///////////////////////////////////////////////

void Class_Date::setYear(int year) {
    if (year>0)
        Class_Date::year = year;
    else
        std::cout<<"Incorrect year"<<std::endl;
}

void Class_Date::setMonth(int month) {
    if ((month<13)&&(month>0))
        Class_Date::month = month;
    else
        std::cout<<"Incorrect month"<<std::endl;
}

void Class_Date::setDay(int day) {
    if (((month==4)||(month==6)||(month==9)||(month==11))&&(day<=30)&&(day>0))
        Class_Date::day = day;
    else if ((month==2)&&(day<=28)&&(day>0))
        Class_Date::day = day;
    else if ((month==2)&&(day==29)&&(year%400==0))
        Class_Date::day = day;
    else if ((month==2)&&(day==29)&&(year%4==0)&&(year%100!=0))
        Class_Date::day = day;
    else if (((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12))&&(day<=31)&&(day>0))
        Class_Date::day = day;
    else
        std::cout<<"Incorrect day"<<std::endl;
}

void Class_Date::CorrectDay(){
    if ((day>0)&&(month>0)&&(year>0))
        PrintDate();
    else
        std::cout<<"Incorrect date. Reset date"<<std::endl;
}

void Class_Date::PrintDate() {
    if (month<10)
        std::cout<<"Установленная дата: "<<day<<".0"<<month<<"."<<year<<std::endl;
    else
        std::cout<<"Установленная дата: "<<day<<"."<<month<<"."<<year<<std::endl;
}
