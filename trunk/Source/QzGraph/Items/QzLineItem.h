#ifndef QZLINEITEM_H
#define QZLINEITEM_H

#include "QzCurveItem.h"
#include "../Data/QzPointPairList.h"
#include "../QzTypes.h"

class QzLineItemPrivate;
class QZGRAPH_EXPORT QzLineItem : public QzCurveItem
{
  public:
    QzLineItem();
    QzLineItem(QString label, QzPointPairList *points, QColor color, QzSymbolType::QzSymbolType symbolType);
    virtual ~QzLineItem();

  private:
    Q_DECLARE_PRIVATE(QzLineItem);
};

#endif // QZLINEITEM_H
