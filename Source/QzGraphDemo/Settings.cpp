#include "Stable.h"
#include "Settings.h"

//! Global settings for the application
Settings settings("Settings.ini");

/*!
Create a new instance of the Settings class.
*/
Settings::Settings(const QString &filePath) : QSettings(filePath, QSettings::IniFormat, 0)
{
  if (!QFile::exists(filePath))
    setDefault();
}


/*!
Clean up.
*/
Settings::~Settings()
{
}

/*!
This function is called in the constructor of the class in order to provide the 
default setting for the application.
*/
void Settings::setDefault()
{
  setVSplitSizes(QList<int>() << 50 << 200);
  setHSplitSizes(QList<int>() << 250 << 50);
}

void Settings::setVSplitSizes(const QList<int> &newValue)
{
  QStringList sizesStrList;

  foreach (int size, newValue)
  {
    sizesStrList.append(QString::number(size));
  }
  setValue("MainWindow/VSplitSizes", sizesStrList.join(","));
}

QList<int> Settings::getVSplitSizes()
{
  QStringList sizesStrList = value("MainWindow/VSplitSizes").toString().split(",");
  QList<int> sizesList;

  foreach (QString sizeStr, sizesStrList)
  {
    sizesList.append(sizeStr.toInt());
  }
  return sizesList;
}

void Settings::setHSplitSizes(const QList<int> &newValue)
{
  QStringList sizesStrList;

  foreach (int size, newValue)
  {
    sizesStrList.append(QString::number(size));
  }
  setValue("MainWindow/HSplitSizes", sizesStrList.join(","));
}

QList<int> Settings::getHSplitSizes()
{
  QStringList sizesStrList = value("MainWindow/HSplitSizes").toString().split(",");
  QList<int> sizesList;

  foreach (QString sizeStr, sizesStrList)
  {
    sizesList.append(sizeStr.toInt());
  }
  return sizesList;
}