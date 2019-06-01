#include "square.h"

square::square(int x,int y,int a_,int l_): figure(x,y), a(a_),l(l_)
{

}
square::~square()
{

}
void square::draw(QPainter * painter)
{
    //squarePath.addRect(QRect(0, 0, 100, 100));
    painter->drawRect(x,y,a,l);
}
