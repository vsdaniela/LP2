#ifndef FIGURE_H
#define FIGURE_H
#include <QPainter>
#include <QPixmap>
#include <QPen>
#include <QMainWindow>
class figure
{
public:
    figure(int e=0, int i=0);
    virtual ~figure();
    virtual void draw(QPainter * painter)=0;
protected:
    int x;
    int y;
};

#endif // FIGURE_H
