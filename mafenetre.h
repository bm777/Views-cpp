#ifndef MAFENETRE_H
#define MAFENETRE_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
class MaFenetre: public QWidget //On herite de wqidget
{
public:
    MaFenetre();

private:
    QPushButton *m_button;
};

#endif // MAFENETRE_H
