#ifndef FENETRE_H
#define FENETRE_H
#include <QtGui/QtGui>
#include "carte.h"



class fenetre : public QMainWindow
{
     Q_OBJECT

private:
    QHBoxLayout* mainLayout;

    //MENU *menu;
    //menubar
    QMenu *menuFichier;
    QMenu *menuEdition;
    QMenu *menuAffichage;
    //toolbar
    QToolBar *toolbar;
    QLabel * label;
    QPushButton *gestionnaire;
    bool flag_dock;
    //action
    QAction *charge;
    QAction *save_as;
    QAction *save;
    QAction *zoom_in;
    QAction *zoom_out;
    QAction *exp;
    QAction *affich_dock;
    QAction *effacer;
    QAction *retour;

    // latitude/longitude
    QDoubleSpinBox  *la;
    QDoubleSpinBox  *lo;
    QDoubleSpinBox  *la1;
    QDoubleSpinBox  *lo1;
    //DOCK
    QDockWidget * dock;
    //degree/minute/seconde
    QSpinBox *d1;
    QSpinBox *m1;
    QDoubleSpinBox *s1;
    QSpinBox *d2;
    QSpinBox *m2;
    QDoubleSpinBox *s2;
    QSpinBox *dd1;
    QSpinBox *mm1;
    QDoubleSpinBox *ss1;
    QSpinBox *dd2;
    QSpinBox *mm2;
    QDoubleSpinBox *ss2;
    QPushButton *expo;
    //Status bar
    QStatusBar *SB;
    //carte
    carte* image;
    //couleur
    QString couleur;
    //scroll
    //QScrollArea* scroll;




public:
    fenetre();


signals:


public slots:
    void telechargerImage();
    void setCouleur();
    void valider_dec();
    void valider_sexa();
    void ignor();
    void afficher_dock();
    void svg_as();
    void svg();
    void charger();
    void fermerProjet();
};

#endif // FENETRE_H
