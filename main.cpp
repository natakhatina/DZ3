#include <iostream>
#include "headers/classP.h"

int main() {
    Class_Point A(3,4);
    double dist=A.Distance();
    std::cout << "Расстояние от нуля до точки: "<<dist << std::endl;
    return 0;
}