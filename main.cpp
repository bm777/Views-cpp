#include <QtWidgets>
//#include <QPushButton>
#include "mafenetre.h"

int main(int argc, char *argv[]){
    QApplication app(argc, argv);

    // -------widget ---------
    MaFenetre fenetre;

    fenetre.show();


    return app.exec();
}
