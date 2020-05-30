#ifndef MAFENETRE_H
#define MAFENETRE_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLCDNumber>
#include <QSlider>
#include <QProgressBar>

class MaFenetre: public QWidget //On herite de wqidget
{
public:
    MaFenetre();

private:
    QLCDNumber *m_lcd;
    QSlider *m_slider;
    QPushButton *m_btn;
    QProgressBar *m_progess;
};

#endif // MAFENETRE_H
