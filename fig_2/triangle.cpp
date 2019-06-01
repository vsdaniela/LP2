#include "triangle.h"

triangle::triangle(int e_, int i_, int a_): figure(e_,i_), a(a_)
{
}
triangle::~triangle()
{

}
void triangle::draw(QPainter * painter)
{
    QPolygon poligono;
    poligono<<QPoint(e,i);
    poligono<<QPoint(a-20,a+20);
    poligono<<QPoint(a+20,a+20);
    painter->drawPolygon(poligono);
}
