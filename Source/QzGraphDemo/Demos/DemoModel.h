#ifndef DEMOMODEL_H
#define DEMOMODEL_H

#include "DemoBase.h"
class DemoModel : public QStandardItemModel
{
  Q_OBJECT

  public:
    DemoModel(QObject *parent);
    virtual ~DemoModel();

    DemoBase *findDemo(const QModelIndex &selectedIndex);

  private:
    void createModel();
    void createDemoNode(DemoBase *demo, QStandardItem *parent, const QString &path);

  private:
    QList<DemoBase*> demosList;
};

#endif // DEMOMODEL_H
