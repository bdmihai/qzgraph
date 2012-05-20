#include "Stable.h"
#include "DemoModel.h"
#include "InitialSampleDemo.h"
#include "ComboDemo.h"

DemoModel::DemoModel(QObject *parent) : QStandardItemModel(parent)
{
  demosList 
    << new InitialSampleDemo()
    << new ComboDemo();

  createModel();
}

DemoModel::~DemoModel()
{
  qDeleteAll(demosList);
}

void DemoModel::createModel()
{
  QStandardItemModel::clear();
  for (int i = 0; i < demosList.count(); i++)
  {
    createDemoNode(demosList[i], invisibleRootItem(), demosList[i]->getPath());
  }
}

void DemoModel::createDemoNode(DemoBase *demo, QStandardItem *parent, const QString &path)
{
  if (path.contains("/"))
  {
    QString nodeName = path.left(path.indexOf("/"));
    QStandardItem *newItem = new QStandardItem(nodeName);
    newItem->setSelectable(false);
    newItem->setEditable(false);
    parent->appendRow(newItem);
    createDemoNode(demo, newItem, path.right(path.length() - path.indexOf("/") - 1));
  }
  else
  {
    parent->appendRow(demo);
  }
}

DemoBase *DemoModel::findDemo(const QModelIndex &selectedIndex)
{
  DemoBase *demo = 0;
  for (int i = 0; i < demosList.count(); i++)
  {
    if (demosList[i]->index() == selectedIndex)
    {
      demo = demosList[i];
      break;
    }
  }
  return demo;
}