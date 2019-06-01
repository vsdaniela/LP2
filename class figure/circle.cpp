#include "circle.h"
circle::circle(int x, int y, int r): figure(x,y), r_1(r)
{

}
circle::~circle()
{

}
void circle::draw(QPainter * painter)
{
    painter->drawEllipse({x,y}, r_1, r_1);
}
