#include "Stable.h"
#include "QzGraphPane.h"
#include "QzGraphPanePrivate.h"

QzGraphPane::QzGraphPane() : QzPaneBase(new QzGraphPanePrivate())
{

}

QzGraphPane::~QzGraphPane()
{

}

QzXAxis *QzGraphPane::xAxis()
{
  Q_D(QzGraphPane);
  return d->xAxis;
}

QzYAxis *QzGraphPane::yAxis()
{
  Q_D(QzGraphPane);
  return d->yAxis;
}

QzLineItem *QzGraphPane::addCurve(QString label, QzPointPairList *points, QColor color, QzSymbolType::QzSymbolType symbolType)
{
  Q_D(QzGraphPane);
  QzLineItem *curve = new QzLineItem(label, points, color, symbolType);
  d->curveList->append(curve);
  return curve;
}