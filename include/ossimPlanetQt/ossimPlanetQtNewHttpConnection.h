#ifndef ossimPlanetQtNewHttpConnection_HEADER
#define ossimPlanetQtNewHttpConnection_HEADER
#include <ui_ossimPlanetQtNewHttpConnection.h>
#include <ossimPlanetQt/ossimPlanetQtExport.h>

class OSSIMPLANETQT_DLL ossimPlanetQtNewHttpConnection : public QDialog, public Ui::ossimPlanetQtNewHttpConnection
{
   Q_OBJECT
public:
   ossimPlanetQtNewHttpConnection(QWidget* parent,
                                  const QString& connName = QString::null,
                                  Qt::WindowFlags fl=0);

public slots:
   void saveConnection();

protected:
   QString theConnectionName;
 
};

#endif
