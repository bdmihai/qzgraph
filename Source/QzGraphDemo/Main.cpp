#include "Stable.h"
#include "Defines.h"
#include "MainWindow.h"

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  MainWindow *mainWindow;

  // set the application info
  app.setApplicationName(APP_NAME);
  app.setOrganizationName(APP_COMPANY);
  app.setOrganizationDomain(APP_DOMAIN);
  app.setApplicationVersion(APP_VERSION);

  // show the main window
  mainWindow = new MainWindow();
  mainWindow->show();

  // run the application
  return app.exec();
}
