#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "figure.h"

class triangle: public figure
{
public:
    triangle(int e_=0, int i_=0, int a_=0);
    ~triangle();
    void draw(QPainter * painter);
private:
    int e;
    int i;
    int a;
};

#endif // TRIANGLE_H
