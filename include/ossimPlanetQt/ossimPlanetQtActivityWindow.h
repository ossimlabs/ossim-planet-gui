#ifndef ossimPlanetQtActivityWindow_HEADER
#define ossimPlanetQtActivityWindow_HEADER
#include <ui_ossimPlanetQtActivityWindow.h>
#include <QDialog>
#include <ossimPlanetQt/ossimPlanetQtExport.h>

class OSSIMPLANETQT_DLL ossimPlanetQtActivityWindow : public QDialog, public Ui::ossimPlanetQtActivityWindow
{
   Q_OBJECT
public:
   ossimPlanetQtActivityWindow(QWidget* parent = 0);

   
};

#endif
