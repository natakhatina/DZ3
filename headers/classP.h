#ifndef DZ3_CLASSP_H
#define DZ3_CLASSP_H


class Class_Point {
    int x,y;
public:
    int getX();

    int getY();

    Class_Point(int x1,int y1);

    double Distance (); // расстояние от нуля до точки

};
class Class_Date{
    int day, month, year;
public:
    void setYear(int year);

    void setMonth(int month);

    void setDay(int day);

    void CorrectDay();

    void PrintDate();
};

#endif //DZ3_CLASSP_H
