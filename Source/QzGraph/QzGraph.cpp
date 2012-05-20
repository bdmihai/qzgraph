#include "Stable.h"
#include "qzgraph.h"
#include "QzGraphPrivate.h"

QzGraph::QzGraph(QWidget *parent) : QGraphicsView(parent), d_ptr(new QzGraphPrivate())
{

}

QzGraph::~QzGraph()
{

}

QzGraphPane *QzGraph::graphPane()
{
  Q_D(QzGraph);

  if ( d->masterPane != 0 && d->masterPane->count() > 0 )
    return d->masterPane->at(0);
  else
    return 0;
}

void QzGraph::axisChange()
{

}
