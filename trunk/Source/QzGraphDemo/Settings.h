#ifndef SETTINGS_H
#define SETTINGS_H

/*!
This class represents the settings class for the application.
*/
class Settings : public QSettings
{
  Q_OBJECT

  public:
    Settings(const QString &filePath);
    virtual ~Settings();

    void setWindowGeometry(const QByteArray &newValue) { setValue("MainWindow/Geometry", newValue);         }
    QByteArray getWindowGeometry()                     { return value("MainWindow/Geometry").toByteArray(); }
    void setWindowState(const QByteArray &newValue)    { setValue("MainWindow/State", newValue);            }
    QByteArray getWindowState()                        { return value("MainWindow/State").toByteArray();    }
    void setVSplitSizes(const QList<int> &newValue);
    QList<int> getVSplitSizes();
    void setHSplitSizes(const QList<int> &newValue);
    QList<int> getHSplitSizes();
  private:
    void setDefault();
};

extern Settings settings;

#endif // SETTINGS_H
