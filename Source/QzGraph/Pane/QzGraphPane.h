#ifndef QZGRAPHPANEPANE_H
#define QZGRAPHPANEPANE_H

#include "../QzTypes.h"
#include "QzPaneBase.h"
#include "../Grid/QzXAxis.h"
#include "../Grid/QzYAxis.h"
#include "../Data/QzPointPairList.h"
#include "../Items/QzLineItem.h"

class QzGraphPanePrivate;
class QZGRAPH_EXPORT QzGraphPane : public QzPaneBase
{
  public:
    QzGraphPane();
    virtual ~QzGraphPane();

    QzXAxis *xAxis();
    QzYAxis *yAxis();

    QzLineItem *addCurve(QString label, QzPointPairList *points, QColor color, QzSymbolType::QzSymbolType symbolType);

  private:
    Q_DECLARE_PRIVATE(QzGraphPane);
};

#endif // QZGRAPHPANEPANE_H
