#ifndef DEMOSELECTIONMODEL_H
#define DEMOSELECTIONMODEL_H

#include "DemoModel.h"
class DemoSelectionModel : public QItemSelectionModel
{
  Q_OBJECT

  public:
    DemoSelectionModel(DemoModel *model);
    virtual ~DemoSelectionModel();

  signals:
    void demoSelected(DemoBase *demo);

  private slots:
    void onSelectionChanged(const QItemSelection &selected, const QItemSelection &deselected);
  
  private:
    DemoModel *demoModel;
};

#endif // DEMOSELECTIONMODEL_H
