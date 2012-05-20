#ifndef QZGRAPHPANEPRIVATE_H
#define QZGRAPHPANEPRIVATE_H

#include "QzPaneBasePrivate.h"
#include "../Grid/QzXAxis.h"
#include "../Grid/QzYAxis.h"
#include "../Items/QzCurveList.h"

class QzGraphPanePrivate : public QzPaneBasePrivate
{
  public:
    QzGraphPanePrivate() 
    {
      xAxis = new QzXAxis();
      yAxis = new QzYAxis();
      curveList = new QzCurveList();
    }
    virtual ~QzGraphPanePrivate() 
    {
      delete xAxis;
      delete yAxis;
      delete curveList;
    }

    QzXAxis *xAxis;
    QzYAxis *yAxis;
    QzCurveList *curveList;
};

#endif // QZGRAPHPANEPRIVATE_H
