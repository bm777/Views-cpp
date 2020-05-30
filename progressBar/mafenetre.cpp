#include "mafenetre.h"

MaFenetre::MaFenetre(): QWidget()
{
    setFixedSize(300, 150);
    //m_lcd = new QLCDNumber(this);
    //m_lcd->setSegmentStyle(QLCDNumber::Flat);
    //m_lcd->move(50,20);

    m_progess = new QProgressBar(this);
    m_progess->setGeometry(10, 30, 150, 20);

    m_slider = new QSlider(Qt::Horizontal, this);
    m_slider->setGeometry(10, 60, 150, 20);

    m_btn = new QPushButton("Reset", this);
    m_btn->setGeometry(10, 90, 150, 20);

    QObject::connect(m_slider, SIGNAL(valueChanged(int)), m_progess, SLOT(setValue(int)));
    QObject::connect(m_btn, SIGNAL(clicked()), m_progess, SLOT(reset()));


}
