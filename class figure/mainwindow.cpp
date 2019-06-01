#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pixmap = new QPixmap(600, 400);
    pixmap->fill();
    pen = new QPen(QColor("red"));

    ui->label_draw_area->setPixmap(*pixmap);

    painter = new QPainter(pixmap);
    painter->setPen(*pen);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_circle_clicked()
{
    int r = rand() % 60 + 1;
    int r_ = rand() % 100 + 150;
    int r_2 = rand() % 100 + 150;
    a.push_back(new circle(r_,r_2,r));
}

void MainWindow::on_draw_clicked()
{
    pixmap->fill();
    for(int i=0;i<a.size();i++){
        a[i]->draw(painter);
    }
    ui->label_draw_area->setPixmap(*pixmap);

}

void MainWindow::on_square_clicked()
{
    int r = rand() % 50 + 1;
    int r_ = rand() % 200 +150;
    a.push_back(new square(r_,r_,r,r));
}

void MainWindow::on_triangle_clicked()
{
    int r = rand() % 140 + 120;
    int r_1 = rand() % 140 + 120;
    int r_ = rand() % 70 + 65;
    a.push_back(new triangle(r,r_1,r_));
}
