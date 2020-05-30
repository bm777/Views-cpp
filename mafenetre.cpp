#include "mafenetre.h"

MaFenetre::MaFenetre(): QWidget()
{
    setFixedSize(300, 150);

    // ----- Construction du button-----
    // ----- Construction du button-----
    m_button = new QPushButton("Exit", this);
    m_button->setFont(QFont("Comic Sans MS", 14));
    m_button->setCursor(Qt::PointingHandCursor);
    m_button->move(110, 50);
// Method to exit Qt application
QObject::connect(m_button, SIGNAL(clicked()), qApp, SLOT(quit()));





}
