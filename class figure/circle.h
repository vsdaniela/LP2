#ifndef CIRCLE_H
#define CIRCLE_H
#include "figure.h"

class circle: public figure
{
public:
    circle(int x=0, int y=0, int r=0);
    ~circle();
    void draw(QPainter * painter);

private:
    int r_1;
};
#endif // CIRCLE_H
