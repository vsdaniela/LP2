#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QColor>
#include <QPainter>
#include <QPixmap>
#include <QPen>
#include <vector>
#include "circle.h"
#include "square.h"
#include "triangle.h"
#include "figure.h"
#include <iostream>
using namespace std;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_circle_clicked();

    void on_draw_clicked();

    void on_square_clicked();

    void on_triangle_clicked();

protected:
    Ui::MainWindow *ui;
    QPainter * painter;
    QPixmap * pixmap;
    QPen * pen;
    vector<figure*> a;
};

#endif // MAINWINDOW_H
