#ifndef ossimPlanetAboutDialog_HEADER
#define ossimPlanetAboutDialog_HEADER
#include <QDialog>
#include <ui_ossimPlanetQtAboutDialog.h>
#include <ossimPlanetQt/ossimPlanetQtExport.h>

class OSSIMPLANETQT_DLL ossimPlanetQtAboutDialog :  public QDialog, public Ui::ossimPlanetQtAboutDialog
{
public:
   ossimPlanetQtAboutDialog(QWidget* parent);
};

#endif
