#include "Stable.h"
#include "DemoBase.h"

DemoBase::DemoBase(const QString &path, const QString &description) : QStandardItem()
{
  this->path = path;
  this->description = description;

  graph = new QzGraph();
  graph->setText(path);

  setEditable(false);
  setToolTip(description);
  setText(path.right(path.length() - path.indexOf("/") - 1));
}

DemoBase::~DemoBase()
{
  delete graph;
}
