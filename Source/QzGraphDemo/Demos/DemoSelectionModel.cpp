#include "Stable.h"
#include "DemoSelectionModel.h"

DemoSelectionModel::DemoSelectionModel(DemoModel *model) : QItemSelectionModel(model)
{
  demoModel = model;
  connect(this, SIGNAL(selectionChanged(const QItemSelection &, const QItemSelection &)), 
          this, SLOT(onSelectionChanged(const QItemSelection &, const QItemSelection &)));
}

DemoSelectionModel::~DemoSelectionModel()
{
}

void DemoSelectionModel::onSelectionChanged(const QItemSelection &selected, const QItemSelection &deselected)
{
  QModelIndexList selectedIndexList = selected.indexes();

  if (selectedIndexList.count() > 0)
  {
    QModelIndex selectedIndex = selectedIndexList[0];
    
    emit demoSelected(demoModel->findDemo(selectedIndex));
  }
}