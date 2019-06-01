#ifndef SQUARE_H
#define SQUARE_H
#include "figure.h"

class square: public figure
{
public:
    square(int x=0, int y=0, int a_=0, int l_=0);
    ~square();
    void draw(QPainter * painter);

private:
    int a;
    int l;
};

#endif // SQUARE_H
