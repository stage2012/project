#include <QtGui>
#include "fenetre.h"
#include "carte.h"

int main (int argc, char* argv[])
{
        QApplication app(argc, argv);
        fenetre fen;
        fen.show() ;
        return app.exec() ;
}


